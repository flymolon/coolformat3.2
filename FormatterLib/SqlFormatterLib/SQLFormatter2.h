#ifndef __SQLFORMATTER2_H
#define __SQLFORMATTER2_H

class SQLFormatter2 {

  private :
    int  _maxLookahead;
    int  _indent;
    int  _minSubqueryLength;
    bool _endLineOnSubQuery;
    char _indentationChar;

    bool _isSqlToken(const char *start, const char *end);
    void _output(const char *start, const char *end, bool endLine);
    void _formatSql(char *start, char *end, char *dest, int indent, bool lastWasToken);
    void _addIndentation(char *&p, int indent);
    void _addIndentation(char *&p, int indent, char indentationChar);
    void _moveWhileSpaces(char *&p);
    void _moveUntil(char *&p1, char *p2, char *&res);
    void _moveOneWord(char *&p1, char *&end, char *&res);
    void _handleMaxLookaheadReached(char *&p1, char *&p2, char *&res, int indent, bool &lastWasToken, int &lookahead);
    void _handleTokenOrEndline(char *&p1, char *&p2, char *&res, int &indent, bool &lastWasToken, int &lookahead, bool isFirstWord);
    void _handleSubQuery(char *&p1, char *&p2, char *&res, int indent, bool &lastWasToken, int &lookahead);
    void _handleIncreaseLookahead(char *&p1, char *&p2, char *&res, int indent, bool &lastWasToken, int &lookahead);

  public :
	 
    
    /**
     * ����
     * @param int n_maxLookahead �������
     * @param int n_indent �����ո���
     * @param bool n_endLineOnSubQuery ���Ӳ�ѯ����
     * @param int n_minSubqueryLength ��С�Ӳ�ѯ����
     * @param char n_indentationChar /��ʲô�ַ�����
     * @return  
     */
    SQLFormatter2(int n_maxLookahead = 2, int n_indent = 2, bool n_endLineOnSubQuery = true, int n_minSubqueryLength = 100, char n_indentationChar = ' ');

    /**
     * Destructor
     */

    ~SQLFormatter2(void) {}


    /**
     * Formats given sql string. Splits short subqueries.��ʽ��SQL��䣬�ָ��Ƕ���Ӳ�ѯ
     */

    void formatSql(char *sqlString, char *dest);
	
    /**
     * Flattens given sql string.Ūƽ
     */

    void flattenSql(char *sqlString, char *dest);

    /**
     * Checks if given strings have same length (not counting endline and tabs)�Ƚ��ַ�������
     */

    bool sameLength(char *str1, char *str2);

};

#endif // __SQLFORMATTER2_H
