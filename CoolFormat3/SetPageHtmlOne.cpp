// SetPageHtmlOne.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CoolFormat3.h"
#include "SetPageHtmlOne.h"


// CSetPageHtmlOne �Ի���

IMPLEMENT_DYNAMIC(CSetPageHtmlOne, CBCGPDialog)

CSetPageHtmlOne::CSetPageHtmlOne(CWnd* pParent /*=NULL*/)
	: CBCGPDialog(CSetPageHtmlOne::IDD, pParent)
{

}

CSetPageHtmlOne::~CSetPageHtmlOne()
{
}

void CSetPageHtmlOne::DoDataExchange(CDataExchange* pDX)
{
	CBCGPDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetPageHtmlOne, CBCGPDialog)
	ON_BN_CLICKED(IDC_CHECK_HTML_ADD_XML_DECL, &CSetPageHtmlOne::OnBnClickedCheckHtmlAddXmlDecl)
	ON_BN_CLICKED(IDC_CHECK_HTML_ADD_XML_SPACE, &CSetPageHtmlOne::OnBnClickedCheckHtmlAddXmlSpace)
	ON_BN_CLICKED(IDC_CHECK_HTML_ANCHOR_AS_NAME, &CSetPageHtmlOne::OnBnClickedCheckHtmlAnchorAsName)
	ON_BN_CLICKED(IDC_CHECK_HTML_ASSUME_XML_PROCINS, &CSetPageHtmlOne::OnBnClickedCheckHtmlAssumeXmlProcins)
	ON_BN_CLICKED(IDC_CHECK_HTML_BARE, &CSetPageHtmlOne::OnBnClickedCheckHtmlBare)
	ON_BN_CLICKED(IDC_CHECK_HTML_CLEAN, &CSetPageHtmlOne::OnBnClickedCheckHtmlClean)
	ON_BN_CLICKED(IDC_CHECK_HTML_DECORATE_INFERRED_UL, &CSetPageHtmlOne::OnBnClickedCheckHtmlDecorateInferredUl)
	ON_BN_CLICKED(IDC_CHECK_HTML_DROP_EMPTY_PARAS, &CSetPageHtmlOne::OnBnClickedCheckHtmlDropEmptyParas)
	ON_BN_CLICKED(IDC_CHECK_HTML_DROP_FONT_TAGS, &CSetPageHtmlOne::OnBnClickedCheckHtmlDropFontTags)
	ON_BN_CLICKED(IDC_CHECK_HTML_DROP_PROPRIETARY_ATTS, &CSetPageHtmlOne::OnBnClickedCheckHtmlDropProprietaryAtts)
	ON_BN_CLICKED(IDC_CHECK_HTML_ENCLOSE_BLOCK_TEXT, &CSetPageHtmlOne::OnBnClickedCheckHtmlEncloseBlockText)
	ON_BN_CLICKED(IDC_CHECK_HTML_ENCLOSE_TEXT, &CSetPageHtmlOne::OnBnClickedCheckHtmlEncloseText)
	ON_BN_CLICKED(IDC_CHECK_HTML_ESCAPE_CDATA, &CSetPageHtmlOne::OnBnClickedCheckHtmlEscapeCdata)
	ON_BN_CLICKED(IDC_CHECK_HTML_FIX_BACKSLASH, &CSetPageHtmlOne::OnBnClickedCheckHtmlFixBackslash)
	ON_BN_CLICKED(IDC_CHECK_HTML_FIX_BAD_COMMENTS, &CSetPageHtmlOne::OnBnClickedCheckHtmlFixBadComments)
	ON_BN_CLICKED(IDC_CHECK_HTML_FIX_URI, &CSetPageHtmlOne::OnBnClickedCheckHtmlFixUri)
	ON_BN_CLICKED(IDC_CHECK_HTML_HIDE_COMMENTS, &CSetPageHtmlOne::OnBnClickedCheckHtmlHideComments)
	ON_BN_CLICKED(IDC_CHECK_HTML_HIDE_ENDTAGS, &CSetPageHtmlOne::OnBnClickedCheckHtmlHideEndtags)
	ON_BN_CLICKED(IDC_CHECK_HTML_INDENT_CDATA, &CSetPageHtmlOne::OnBnClickedCheckHtmlIndentCdata)
	ON_BN_CLICKED(IDC_CHECK_HTML_INPUT_XML, &CSetPageHtmlOne::OnBnClickedCheckHtmlInputXml)
	ON_BN_CLICKED(IDC_CHECK_HTML_JOIN_CLASSES, &CSetPageHtmlOne::OnBnClickedCheckHtmlJoinClasses)
	ON_BN_CLICKED(IDC_CHECK_HTML_JOIN_STYLES, &CSetPageHtmlOne::OnBnClickedCheckHtmlJoinStyles)
	ON_BN_CLICKED(IDC_CHECK_HTML_LITERAL_ATTRIBUTES, &CSetPageHtmlOne::OnBnClickedCheckHtmlLiteralAttributes)
	ON_BN_CLICKED(IDC_CHECK_HTML_LOGICAL_EMPHASIS, &CSetPageHtmlOne::OnBnClickedCheckHtmlLogicalEmphasis)
	ON_BN_CLICKED(IDC_CHECK_HTML_LOWER_LITERALS, &CSetPageHtmlOne::OnBnClickedCheckHtmlLowerLiterals)
	ON_BN_CLICKED(IDC_CHECK_HTML_NCR, &CSetPageHtmlOne::OnBnClickedCheckHtmlNcr)
	ON_BN_CLICKED(IDC_CHECK_HTML_NUMERIC_ENTITIES, &CSetPageHtmlOne::OnBnClickedCheckHtmlNumericEntities)
	ON_BN_CLICKED(IDC_CHECK_HTML_OUTPUT_HTML, &CSetPageHtmlOne::OnBnClickedCheckHtmlOutputHtml)
	ON_BN_CLICKED(IDC_CHECK_HTML_OUTPUT_XHTML, &CSetPageHtmlOne::OnBnClickedCheckHtmlOutputXhtml)
	ON_BN_CLICKED(IDC_CHECK_HTML_OUTPUT_XML, &CSetPageHtmlOne::OnBnClickedCheckHtmlOutputXml)
	ON_BN_CLICKED(IDC_CHECK_HTML_PRESERVE_ENTITIES, &CSetPageHtmlOne::OnBnClickedCheckHtmlPreserveEntities)
	ON_BN_CLICKED(IDC_CHECK_HTML_QUOTE_AMPERSAND, &CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteAmpersand)
	ON_BN_CLICKED(IDC_CHECK_HTML_QUOTE_MARKS, &CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteMarks)
	ON_BN_CLICKED(IDC_CHECK_HTML_QUOTE_NBSP, &CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteNbsp)
	ON_BN_CLICKED(IDC_CHECK_HTML_REPLACE_COLOR, &CSetPageHtmlOne::OnBnClickedCheckHtmlReplaceColor)
	ON_BN_CLICKED(IDC_CHECK_HTML_UPPERCASE_ATTRIBUTES, &CSetPageHtmlOne::OnBnClickedCheckHtmlUppercaseAttributes)
	ON_BN_CLICKED(IDC_CHECK_HTML_UPPERCASE_TAGS, &CSetPageHtmlOne::OnBnClickedCheckHtmlUppercaseTags)
	ON_BN_CLICKED(IDC_CHECK_HTML_WORD_2000, &CSetPageHtmlOne::OnBnClickedCheckHtmlWord2000)
END_MESSAGE_MAP()

void CSetPageHtmlOne::SetViewEdit( LPCTSTR lpszText )
{
	if (m_pEditWnd)
	{
		m_pEditWnd->SetWindowText(lpszText);
	}
}
BOOL CSetPageHtmlOne::OnInitDialog()
{
	CBCGPDialog::OnInitDialog();

	InitLimit();

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlAddXmlDecl()
{
	CString strText;
	strText = _T("This option specifies if Tidy should add the XML declaration when outputting XML or XHTML. Note that if the input already includes an <?xml ... ?> declaration then this option will be ignored. If the encoding for the output is different from \"ascii\", one of the utf encodings or \"raw\", the declaration is always added as required by the XML standard.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��������涨������XML��XHTMLʱ�Ƿ����XML����. ע��:��������Ѿ�������<?xml ... ?> ����,�Ǵ�ѡ�������.���������벻�� \"ascii\", ��ĳ��utf���� �� \"raw\", ��XML��׼Ҫ�󽫻����."));
	}
	SetViewEdit(strText);
}
void CSetPageHtmlOne::OnBnClickedCheckHtmlAddXmlSpace()
{
	CString strText;
	strText = _T("This option specifies if Tidy should add xml:space=\"preserve\" to elements such as <PRE>, <STYLE> and <SCRIPT> when generating XML. This is needed if the whitespace in such elements is to be parsed appropriately without having access to the DTD.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��������涨������XMLʱ�Ƿ����xml:space=\"preserve\" ���� <PRE>, <STYLE> �� <SCRIPT>Ԫ����. ������Ҫ��, �������ЩԪ���пհ��ַ������ʵ���������÷���DTD."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlAnchorAsName()
{
	CString strText;
	strText = _T("This option controls the deletion or addition of the name attribute in elements where it can serve as anchor. If set to \"yes\", a name attribute, if not already existing, is added along an existing id attribute if the DTD allows it. If set to \"no\", any existing name attribute is removed if an id attribute exists or has been added.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("�������������Щ��Ϊê��ʹ�õ��������Ե���ӻ�ɾ��,�����Ϊ \"yes\",����û����������,����id���������һ��DTD������������������Ϊ\"no\",��ɾ���κ�����id���Ի��ѱ���ӵ���������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlAssumeXmlProcins()
{
	CString strText;
	strText = _T("This option specifies if Tidy should change the parsing of processing instructions to require ?> as the terminator rather than >. This option is automatically set if the input is in XML.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�Ӧ�øı�Ϊ��?>��Ϊ����ָ�����, ��������Ϊ��ǩ��ֹ��. ����ΪXML���ѡ���Զ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlBare()
{
	CString strText;
	strText = _T("This option specifies if Tidy should strip Microsoft specific HTML from Word 2000 documents, and output spaces rather than non-breaking spaces where they exist in the input.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��������Word 2000�ĵ���Microsoft���е�HTML,��������������ļ������еĿո���ǻ��м��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlClean()
{
	CString strText;
	strText = _T("This option specifies if Tidy should strip out surplus presentational tags and attributes replacing them by style rules and structural markup as appropriate. It works well on the HTML saved by Microsoft Office products.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��������ı��ֱ�ǩ����style�����滻����,�Լ��ʵ������ĵ��ṹ,����Microsoft Office��������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlDecorateInferredUl()
{
	CString strText;
	strText = _T("This option specifies if Tidy should decorate inferred UL elements with some CSS markup to avoid indentation to the right.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���һЩCSS���װ���ƶ���ULԪ��,������������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlDropEmptyParas()
{
	CString strText;
	strText = _T("This option specifies if Tidy should discard empty paragraphs.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����ն���."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlDropFontTags()
{
	CString strText;
	strText = _T("This option specifies if Tidy should discard <FONT> and <CENTER> tags without creating the corresponding style rules. This option can be set independently of the clean option.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���� <FONT> and <CENTER> ��ǩ,����������Ӧ�ķ�����. ��ѡ����cleanѡ��������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlDropProprietaryAtts()
{
	CString strText;
	strText = _T("This option specifies if Tidy should strip out proprietary attributes, such as MS data binding attributes.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��޳�˽������,����MS���ݰ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlEncloseBlockText()
{
	CString strText;
	strText = _T("This option specifies if Tidy should insert a <P> element to enclose any text it finds in any element that allows mixed content for HTML transitional but not HTML strict.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨,�Ƿ����<P>Ԫ�ذ�����ͳHTML(HTML transitional)�����ϸ�HTML(HTML strict)�����������ݵ��κ�Ԫ���е��κ��ı�."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlEncloseText()
{
	CString strText;
	strText = _T("This option specifies if Tidy should enclose any text it finds in the body element within a <P> element. This is useful when you want to take existing HTML and use it with a style sheet.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�պ�bodyԪ���е�<P>Ԫ��. ������������HTML������CSSʱ����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlEscapeCdata()
{
	CString strText;
	strText = _T("This option specifies if Tidy should convert <![CDATA[]]> sections to normal text.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�Ҫ��<![CDATA[]]>ת����һ���ı� ."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlFixBackslash()
{
	CString strText;
	strText = _T("This option specifies if Tidy should replace backslash characters \"\\\" in URLs by forward slashes \"/\".");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ���Ƿ�Ҫ��URLs�е�\"\\\"�滻Ϊ\"/\"."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlFixBadComments()
{
	CString strText;
	strText = _T("This option specifies if Tidy should replace unexpected hyphens with \"=\" characters when it comes across adjacent hyphens. The default is yes. This option is provided for users of Cold Fusion which uses the comment syntax: <!--- --->");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���\"=\"�����滻�쳣���ַ�,���������ڵ����ַ�ʱ.Ĭ��Ϊyes.��ѡ��Ϊ��Щ���﷨Ϊ <!--- --->��ע�͵�Cold Fusion�û��ṩ."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlFixUri()
{
	CString strText;
	strText = _T("This option specifies if Tidy should check attribute values that carry URIs for illegal characters and if such are found, escape them as HTML 4 recommends.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����URIs�������еķǷ��ַ�,����еĻ���HTML 4�Ƽ��ķ�ʽ����ת��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlHideComments()
{
	CString strText;
	strText = _T("This option specifies if Tidy should print out comments.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��ӡע��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlHideEndtags()
{
	CString strText;
	strText = _T("This option specifies if Tidy should omit optional end-tags when generating the pretty printed markup. This option is ignored if you are outputting to XML.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨������������ǩʱ,�Ƿ�ʡ�Կ�ѡ�պϱ�ǩ.�����Ҫ����XML,���ѡ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlIndentCdata()
{
	CString strText;
	strText = _T("This option specifies if Tidy should indent <![CDATA[]]> sections.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�����<![CDATA[]]>����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlInputXml()
{
	CString strText;
	strText = _T("This option specifies if Tidy should use the XML parser rather than the error correcting HTML parser.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨����XML�����������þ���HTML������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlJoinClasses()
{
	CString strText;
	strText = _T("This option specifies if Tidy should combine class names to generate a single new class name, if multiple class assignments are detected on an element.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨���Ԫ���к��ж���,�Ƿ�����ϳ�һ��������������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlJoinStyles()
{
	CString strText;
	strText = _T("This option specifies if Tidy should combine styles to generate a single new style, if multiple style values are detected on an element.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨���Ԫ���к��ж���ʽ,�Ƿ�����ϳ�һ������������ʽ.."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlLiteralAttributes()
{
	CString strText;
	strText = _T("This option specifies if Tidy should ensure that whitespace characters within attribute values are passed through unchanged.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�֤����ֵ�еĿհ��ַ����ֲ���."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlLogicalEmphasis()
{
	CString strText;
	strText = _T("This option specifies if Tidy should replace any occurrence of <I> by <EM> and any occurrence of <B> by <STRONG>. In both cases, the attributes are preserved unchanged. This option can be set independently of the clean and drop-font-tags options.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���<EM>�滻<I>,�Լ���<STRONG>�滻<B>. ���������,����ֵ�����ֲ���. ��ѡ�����cleanѡ���drop-font-tagsѡ��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlLowerLiterals()
{
	CString strText;
	strText = _T("This option specifies if Tidy should convert the value of an attribute that takes a list of predefined values to lower case. This is required for XHTML documents.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���Ԥ����ֵ���б������ֵת��ΪСд.XHTML�ĵ���Ҫ�˹���."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlNcr()
{
	CString strText;
	strText = _T("This option specifies if Tidy should allow numeric character references.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����������ַ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlNumericEntities()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output entities other than the built-in HTML entities (&amp;, &lt;, &gt; and &quot;) in the numeric rather than the named entity form. Only entities compatible with the DOCTYPE declaration generated are used. Entities that can be represented in the output encoding are translated correspondingly.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�����Ƿ�Ӧ��������ڽ�HTMLʵ��(&amp;, &lt;, &gt; and &quot;)�����ʵ��,����������ʵ����ʽֻ�к�DOCTYPE����Լ������ݵ�ʵ�屸��. ����������п��Ա����ֵ�ʵ�屻��Ӧת��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlOutputHtml()
{
	CString strText;
	strText = _T("This option specifies if Tidy should generate pretty printed output, writing it as HTML.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�����html�������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlOutputXhtml()
{
	CString strText;
	strText = _T("This option specifies if Tidy should generate pretty printed output, writing it as extensible HTML. This option causes Tidy to set the DOCTYPE and default namespace as appropriate to XHTML. If a DOCTYPE or namespace is given they will checked for consistency with the content of the document. In the case of an inconsistency, the corrected values will appear in the output. For XHTML, entities can be written as named or numeric entities according to the setting of the \"numeric-entities\" option. The original case of tags and attributes will be preserved, regardless of other options.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�����XHTML���������. ��ѡ��ʹ��Tidy����DOCTYPE������XHTML��Ĭ�������ռ�. ���������DOCTYPE �� �����ռ� ,���ǽ����ĵ���������һ���Լ��. ������һ�µ����,�����������ֵ. ��XHTML,ʵ�彫����\"numeric-entities\" ѡ��, ת��Ϊ����������ʵ��. ��������ѡ��,ԭʼ�ı�ǩ��Сд�����Խ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlOutputXml()
{
	CString strText;
	strText = _T("This option specifies if Tidy should pretty print output, writing it as well-formed XML. Any entities not defined in XML 1.0 will be written as numeric entities to allow them to be parsed by a XML parser. The original case of tags and attributes will be preserved, regardless of other options.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����Ϊ�����ĸ�ʽ����XML.�κ�û����XML 1.0�ж������ʵ�嶼�ᱻת��Ϊ����ʵ��,��ʹ���ܱ�XML����������. ��������ѡ��,ԭʼ�ı�ǩ��Сд�����Խ�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlPreserveEntities()
{
	CString strText;
	strText = _T("This option specifies if Tidy should preserve the well-formed entitites as found in the input.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ������ʱ������ʽ���õ�ʵ��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteAmpersand()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output unadorned & characters as &amp;.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�ת��&Ϊ&amp;."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteMarks()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output \" characters as &quot; as is preferred by some editing environments. The apostrophe character ' is written out as &#39; since many web browsers don't yet support &apos;.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��ַ� \" ���Ϊ &quot; ��Ϊ����һЩ�༭������ѡ��. Ʋ�� ' ���Ϊ &#39; ��ΪһЩ�������֧�� &apos;."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlQuoteNbsp()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output non-breaking space characters as entities, rather than as the Unicode character value 160 (decimal).");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�non-breaking�ո��ַ�תΪʵ��, ������Unicode 160 (decimal)."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlReplaceColor()
{
	CString strText;
	strText = _T("This option specifies if Tidy should replace numeric values in color attributes by HTML/XHTML color names where defined, e.g. replace \"#ffffff\" with \"white\".");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���ɫ������ֵ�滻ΪHTML/XHTML�������ɫ��, ����, ��\"white\"�滻\"#ffffff\"."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlUppercaseAttributes()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output attribute names in upper case. The default is no, which results in lower case attribute names, except for XML input, where the original case is preserved.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��ô�д���������. Ĭ��Ϊ no, ʹ������תΪСд, ��XML,������ԭʼ�Ĵ�Сд."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlUppercaseTags()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output tag names in upper case. The default is no, which results in lower case tag names, except for XML input, where the original case is preserved.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��ô�д�����ǩ��. Ĭ��Ϊ no, ʹ��ǩ��תΪСд, ��XML,������ԭʼ�Ĵ�Сд."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::OnBnClickedCheckHtmlWord2000()
{
	CString strText;
	strText = _T("This option specifies if Tidy should go to great pains to strip out all the surplus stuff Microsoft Word 2000 inserts when you save Word documents as \"Web pages\". Doesn't handle embedded images or VML. You should consider using Word's \"Save As: Web Page, Filtered\".");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�ȥ��Microsoft Word 2000�ĵ�����Ϊ\"Web pages\" ʱ����������ж��ණ��.������Ƕ��ͼƬ(images) �� VML.��Ӧ�ÿ���ʹ��Word\"Save As: Web Page, Filtered\"."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlOne::InitLimit()
{

}

void CSetPageHtmlOne::SetTidyConfig( LPCTSTR lpszTidy )
{
	int lenTidy = _tcsclen(lpszTidy);
	if (lenTidy <= 0 || lpszTidy[0] != '-')
	{
		return;
	}

	int nOption = -1;
	for (int i = 0; i < lenTidy; ++i)
	{
		if (lpszTidy[i] == '-')
		{
			if (-1 != nOption)
			{
				SetTidyControl(lpszTidy, nOption, i - nOption);
			}
			nOption = i;
		}
	}
	SetTidyControl(lpszTidy, nOption, lenTidy - nOption);
}

void CSetPageHtmlOne::GetTidyConfig( CString &strTidyValue )
{
	CString strTidy;
	strTidy.Empty();

	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ADD_XML_DECL))->GetCheck())
	{
		strTidy.Append(_T("-axd"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ADD_XML_SPACE))->GetCheck())
	{
		strTidy.Append(_T("-axs"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ANCHOR_AS_NAME))->GetCheck())
	{
		strTidy.Append(_T("-aan"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ASSUME_XML_PROCINS))->GetCheck())
	{
		strTidy.Append(_T("-axp"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_BARE))->GetCheck())
	{
		strTidy.Append(_T("-b"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_CLEAN))->GetCheck())
	{
		strTidy.Append(_T("-c"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_DECORATE_INFERRED_UL))->GetCheck())
	{
		strTidy.Append(_T("-diu"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_EMPTY_PARAS))->GetCheck())
	{
		strTidy.Append(_T("-dep"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_FONT_TAGS))->GetCheck())
	{
		strTidy.Append(_T("-dft"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_PROPRIETARY_ATTS))->GetCheck())
	{
		strTidy.Append(_T("-dpa"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ENCLOSE_BLOCK_TEXT))->GetCheck())
	{
		strTidy.Append(_T("-ebt"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ENCLOSE_TEXT))->GetCheck())
	{
		strTidy.Append(_T("-et"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ESCAPE_CDATA))->GetCheck())
	{
		strTidy.Append(_T("-ec"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_BACKSLASH))->GetCheck())
	{
		strTidy.Append(_T("-fb"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_BAD_COMMENTS))->GetCheck())
	{
		strTidy.Append(_T("-fbc"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_URI))->GetCheck())
	{
		strTidy.Append(_T("-fu"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_HIDE_COMMENTS))->GetCheck())
	{
		strTidy.Append(_T("-hc"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_HIDE_ENDTAGS))->GetCheck())
	{
		strTidy.Append(_T("-he"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_INDENT_CDATA))->GetCheck())
	{
		strTidy.Append(_T("-ic"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_INPUT_XML))->GetCheck())
	{
		strTidy.Append(_T("-ix"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_JOIN_CLASSES))->GetCheck())
	{
		strTidy.Append(_T("-jc"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_JOIN_STYLES))->GetCheck())
	{
		strTidy.Append(_T("-js"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_LITERAL_ATTRIBUTES))->GetCheck())
	{
		strTidy.Append(_T("-la"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_LOGICAL_EMPHASIS))->GetCheck())
	{
		strTidy.Append(_T("-le"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_LOWER_LITERALS))->GetCheck())
	{
		strTidy.Append(_T("-ll"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_NCR))->GetCheck())
	{
		strTidy.Append(_T("-n"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_NUMERIC_ENTITIES))->GetCheck())
	{
		strTidy.Append(_T("-ne"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_HTML))->GetCheck())
	{
		strTidy.Append(_T("-oh"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_XHTML))->GetCheck())
	{
		strTidy.Append(_T("-ox"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_XML))->GetCheck())
	{
		strTidy.Append(_T("-oxm"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_PRESERVE_ENTITIES))->GetCheck())
	{
		strTidy.Append(_T("-pe"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_AMPERSAND))->GetCheck())
	{
		strTidy.Append(_T("-qa"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_MARKS))->GetCheck())
	{
		strTidy.Append(_T("-qm"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_NBSP))->GetCheck())
	{
		strTidy.Append(_T("-qn"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_REPLACE_COLOR))->GetCheck())
	{
		strTidy.Append(_T("-rc"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_UPPERCASE_ATTRIBUTES))->GetCheck())
	{
		strTidy.Append(_T("-ua"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_UPPERCASE_TAGS))->GetCheck())
	{
		strTidy.Append(_T("-ut"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WORD_2000))->GetCheck())
	{
		strTidy.Append(_T("-wo"));
	}
	strTidyValue.Append(strTidy);
}

void CSetPageHtmlOne::SetTidyControl( LPCTSTR lpszTidy, int nPos, int nSize )
{
	if (lpszTidy[nPos] != '-' || nSize < 2)
	{
		return;
	}

	int nNumValue = nSize;
	for (int i = nPos + 1; i < nPos + nSize; ++i)
	{
		if (!_istalpha(lpszTidy[i]))
		{
			nNumValue = i - nPos;
			break;
		}
	}
	CString strParam(lpszTidy + nPos + 1, nNumValue - 1);
	if (nNumValue != nSize)
	{
		CString strNum(lpszTidy + nPos + nNumValue, nSize - nNumValue);
		nNumValue = _ttoi(strNum);
	}
	else
	{
		nNumValue = 0;
	}
	
	if (_T("axd") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ADD_XML_DECL))->SetCheck(1);
	} 
	else if (_T("axs") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ADD_XML_SPACE))->SetCheck(1);
	}
	else if (_T("aan") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ANCHOR_AS_NAME))->SetCheck(1);
	}
	else if (_T("axp") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ASSUME_XML_PROCINS))->SetCheck(1);
	}
	else if (_T("b") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_BARE))->SetCheck(1);
	}
	else if (_T("c") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_CLEAN))->SetCheck(1);
	}
	else if (_T("diu") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_DECORATE_INFERRED_UL))->SetCheck(1);
	}
	else if (_T("dep") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_EMPTY_PARAS))->SetCheck(1);
	}
	else if (_T("dft") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_FONT_TAGS))->SetCheck(1);
	}
	else if (_T("dpa") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_DROP_PROPRIETARY_ATTS))->SetCheck(1);
	}
	else if (_T("ebt") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ENCLOSE_BLOCK_TEXT))->SetCheck(1);
	}
	else if (_T("et") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ENCLOSE_TEXT))->SetCheck(1);
	}
	else if (_T("ec") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ESCAPE_CDATA))->SetCheck(1);
	}
	else if (_T("fb") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_BACKSLASH))->SetCheck(1);
	}
	else if (_T("fbc") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_BAD_COMMENTS))->SetCheck(1);
	}
	else if (_T("fu") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_FIX_URI))->SetCheck(1);
	}
	else if (_T("hc") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_HIDE_COMMENTS))->SetCheck(1);
	}
	else if (_T("he") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_HIDE_ENDTAGS))->SetCheck(1);
	}
	else if (_T("ic") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_INDENT_CDATA))->SetCheck(1);
	}
	else if (_T("ix") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_INPUT_XML))->SetCheck(1);
	}
	else if (_T("jc") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_JOIN_CLASSES))->SetCheck(1);
	}
	else if (_T("js") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_JOIN_STYLES))->SetCheck(1);
	}
	else if (_T("la") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_LITERAL_ATTRIBUTES))->SetCheck(1);
	}
	else if (_T("le") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_LOGICAL_EMPHASIS))->SetCheck(1);
	}
	else if (_T("ll") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_LOWER_LITERALS))->SetCheck(1);
	}
	else if (_T("n") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_NCR))->SetCheck(1);
	}
	else if (_T("ne") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_NUMERIC_ENTITIES))->SetCheck(1);
	}
	else if (_T("oh") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_HTML))->SetCheck(1);
	}
	else if (_T("ox") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_XHTML))->SetCheck(1);
	}
	else if (_T("oxm") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_OUTPUT_XML))->SetCheck(1);
	}
	else if (_T("pe") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_PRESERVE_ENTITIES))->SetCheck(1);
	}
	else if (_T("qa") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_AMPERSAND))->SetCheck(1);
	}
	else if (_T("qm") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_MARKS))->SetCheck(1);
	}
	else if (_T("qn") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_QUOTE_NBSP))->SetCheck(1);
	}
	else if (_T("rc") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_REPLACE_COLOR))->SetCheck(1);
	}
	else if (_T("ua") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_UPPERCASE_ATTRIBUTES))->SetCheck(1);
	}
	else if (_T("ut") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_UPPERCASE_TAGS))->SetCheck(1);
	}
	else if (_T("wo") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WORD_2000))->SetCheck(1);
	}
}