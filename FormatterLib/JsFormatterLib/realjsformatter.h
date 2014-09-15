/* realjsformatter.h
   2010-12-16

Copyright (c) 2010-2012 SUN Junwen

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#ifndef _REAL_JSFORMATTER_H_
#define _REAL_JSFORMATTER_H_
//#include <ctime>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

#include "jsparser.h"

using namespace std;

/*
 * if-i, else-e, else if-i,
 * for-f, do-d, while-w,
 * switch-s, case-c, default-c
 * try-r, catch-h
 * {-BLOCK, (-BRACKET
 */
#define JS_IF 'i'
#define JS_ELSE 'e'
#define JS_FOR 'f'
#define JS_DO 'd'
#define JS_WHILE 'w'
#define JS_SWITCH 's'
#define JS_CASE 'c'
#define JS_TRY 'r'
#define JS_CATCH 'h'
#define JS_FUNCTION 'n'
#define JS_ASSIGN '='
#define JS_BLOCK '{'
#define JS_BRACKET '('
#define JS_SQUARE '['
#define JS_HELPER '\\'

class RealJSFormatter: public JSParser
{
public:
	template<class T>
	bool GetStackTop(stack<T> stk, T& ret);
	template<class T>
	bool StackTopEq(stack<T> stk, T eq);

	typedef stack<char> CharStack;
	typedef stack<bool> BoolStack;
	typedef queue<JSParser::TokenAndType> TokenQueue;
	typedef map<string, char> StrCharMap;
	typedef set<string> StrSet;

	RealJSFormatter();
	RealJSFormatter(char chIndent, int nChPerInd);
	RealJSFormatter(bool bSkipCR, bool bPutCR);
	RealJSFormatter(char chIndent, int nChPerInd, bool bSkipCR, bool bPutCR, bool bNLBracket);

	virtual ~RealJSFormatter()
	{}

	inline void SetInitIndent(const string& initIndent)
	{ m_initIndent = initIndent; }

	void Go();

	static string Trim(const string& str);
	static string TrimSpace(const string& str);
	static string TrimRightSpace(const string& str);
	void StringReplace(string& strBase, const string& strSrc, const string& strDes);

	bool m_debugOutput;

private:
	void Init();

	virtual void PutChar(int ch) = 0;

	void PopMultiBlock(char previousStackTop);
	void ProcessOper(bool bHaveNewLine, char tokenAFirst, char tokenBFirst);
	void ProcessString(bool bHaveNewLine, char tokenAFirst, char tokenBFirst);

	void PutToken(const string& token,
		const string& leftStyle = string(""),
		const string& rightStyle = string("")); // Put a token out with style
	void PutString(const string& str);
	void PutLineBuffer();

// 	clock_t m_startClock;
// 	clock_t m_endClock;
// 	double m_duration;

	int m_nLineIndents;
	string m_lineBuffer;

	StrSet m_specKeywordSet; // ����Ҫ�������ŵĹؼ��ּ���
	StrCharMap m_blockMap;
	CharStack m_blockStack;
	int m_nIndents; // �������������ü��� blockStack��Ч������

	// ʹ��ջ��Ϊ�˽�����ж������г���ѭ��������
	BoolStack m_brcNeedStack; // if ֮��ĺ��������

	bool m_bNewLine; // ׼�����еı�־
	bool m_bBlockStmt; // block ������ʼ��
	bool m_bAssign;
	bool m_bEmptyBracket; // �� {}

	bool m_bCommentPut; // �ո������ע��

	string m_initIndent; // ��ʼ����
	char m_chIndent; // ��Ϊ�������ַ�
	int m_nChPerInd; // ÿ�����������ַ�����

	bool m_bSkipCR; // ��ȡʱ���� \r
	bool m_bPutCR; // ʹ�� \r\n ��Ϊ����

	bool m_bNLBracket; // { ֮ǰ�Ƿ���

private:
	// ��ֹ����
	RealJSFormatter(const RealJSFormatter&);
	RealJSFormatter& operator=(const RealJSFormatter&);
};

#endif
