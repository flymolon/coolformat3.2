// SetPageHtmlTwo.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CoolFormat3.h"
#include "SetPageHtmlTwo.h"


// CSetPageHtmlTwo �Ի���

IMPLEMENT_DYNAMIC(CSetPageHtmlTwo, CBCGPDialog)

CSetPageHtmlTwo::CSetPageHtmlTwo(CWnd* pParent /*=NULL*/)
	: CBCGPDialog(CSetPageHtmlTwo::IDD, pParent)
{
	m_onlyHtmlXml = SYN_HTML;
}

CSetPageHtmlTwo::~CSetPageHtmlTwo()
{
}

void CSetPageHtmlTwo::DoDataExchange(CDataExchange* pDX)
{
	CBCGPDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetPageHtmlTwo, CBCGPDialog)
	ON_BN_CLICKED(IDC_CHECK_HTML_BREAK_BEFORE_BR, &CSetPageHtmlTwo::OnBnClickedCheckHtmlBreakBeforeBr)
	ON_BN_CLICKED(IDC_CHECK_HTML_INDENT_ATTRIBUTES, &CSetPageHtmlTwo::OnBnClickedCheckHtmlIndentAttributes)
	ON_BN_CLICKED(IDC_CHECK_HTML_INDENT_SPACES, &CSetPageHtmlTwo::OnBnClickedCheckHtmlIndentSpaces)
	ON_BN_CLICKED(IDC_CHECK_HTML_MARKUP, &CSetPageHtmlTwo::OnBnClickedCheckHtmlMarkup)
	ON_BN_CLICKED(IDC_CHECK_HTML_PUNCTUATION_WRAP, &CSetPageHtmlTwo::OnBnClickedCheckHtmlPunctuationWrap)
	ON_BN_CLICKED(IDC_CHECK_HTML_VERTICAL_SPACE, &CSetPageHtmlTwo::OnBnClickedCheckHtmlVerticalSpace)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_ASP, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapAsp)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_ATTRIBUTES, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapAttributes)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_JSTE, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapJste)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_PHP, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapPhp)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_SCRIPT_LITERALS, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapScriptLiterals)
	ON_BN_CLICKED(IDC_CHECK_HTML_WRAP_SECTIONS, &CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapSections)
	ON_BN_CLICKED(IDC_CHECK_HTML_ASCII_CHARS, &CSetPageHtmlTwo::OnBnClickedCheckHtmlAsciiChars)
	ON_BN_CLICKED(IDC_CHECK_HTML_SHOW_WARNINGS, &CSetPageHtmlTwo::OnBnClickedCheckHtmlShowWarnings)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_ALT_TEXT, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlAltText)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_CSS_PREFIX, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlCssPrefix)	
	ON_EN_SETFOCUS(IDC_EDIT_HTML_NEW_BLOCKLEVEL_TAGS, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewBlocklevelTags)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_NEW_EMPTY_TAGS, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewEmptyTags)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_NEW_INLINE_TAGS, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewInlineTags)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_NEW_PRE_TAGS, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewPreTags)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_SHOW_ERRORS, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlShowErrors)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_INDENT_SPACES, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlIndentSpaces)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_TAB_SIZE, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlTabSize)
	ON_EN_SETFOCUS(IDC_EDIT_HTML_WRAP, &CSetPageHtmlTwo::OnEnSetfocusEditHtmlWrap)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_INDENT, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlIndent)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_MERGE_DIVS, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlMergeDivs)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_MERGE_SPANS, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlMergeSpans)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_SHOW_BODY_ONLY, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlShowBodyOnly)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_DOCTYPE, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlDoctype)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_REPEATED_ATTRIBUTES, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlRepeatedAttributes)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_SORT_ATTRIBUTES, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlSortAttributes)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_CHAR_ENCODING, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlCharEncoding)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_INPUT_ENCODING, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlInputEncoding)
	ON_CBN_SETFOCUS(IDC_COMBO_HTML_OUTPUT_ENCODING, &CSetPageHtmlTwo::OnCbnSetfocusComboHtmlOutputEncoding)
	ON_BN_CLICKED(IDC_CHECK_HTML_FORCE_OUTPUT, &CSetPageHtmlTwo::OnBnClickedCheckHtmlForceOutput)
END_MESSAGE_MAP()

void CSetPageHtmlTwo::SetViewEdit( LPCTSTR lpszText )
{
	if (m_pEditWnd)
	{
		m_pEditWnd->SetWindowText(lpszText);
	}
}

BOOL CSetPageHtmlTwo::OnInitDialog()
{
	CBCGPDialog::OnInitDialog();

	InitLimit();

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlBreakBeforeBr()
{
	CString strText;
	strText = _T("This option specifies if Tidy should output a line break before each <BR> element.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����ʱ��ÿһ��<BR>Ԫ��ǰ,��һ������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlIndentAttributes()
{
	CString strText;
	strText = _T("This option specifies if Tidy should begin each attribute on a new line.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�ÿ������ռһ��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlIndentSpaces()
{
	CString strText;
	strText = _T("");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T(""));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlMarkup()
{
	CString strText;
	strText = _T("This option specifies if Tidy should generate a pretty printed version of the markup. Note that Tidy won't generate a pretty printed version if it finds significant errors (see force-output).");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����������汾�ı��.ע��:��������ش���ʱ������������. (�� force-output)."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlPunctuationWrap()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap after some Unicode or Chinese punctuation characters.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ���һЩUnicode�����ķ����ַ�������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlVerticalSpace()
{
	CString strText;
	strText = _T("This option specifies if Tidy should add some empty lines for readability.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�Ϊ�ɶ��Լ���һЩ����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapAsp()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap text contained within ASP pseudo elements, which look like: <% ... %>.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��ڶ�ASPαԪ���ڵ��ı����ݻ���, ����: <% ... %>."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapAttributes()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap attribute values, for easier editing. This option can be set independently of wrap-script-literals.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�Ϊ����༭��������ֵ����. ��ѡ��ɶ�����wrap-script-literalsѡ������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapJste()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap text contained within JSTE pseudo elements, which look like: <# ... #>.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��JSTEαԪ���ڵ��ı����ݽ�������, ����: <# ... #>."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapPhp()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap text contained within PHP pseudo elements, which look like: <?php ... ?>.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��phpαԪ���ڵ��ı����ݽ�������, ����: <?php ... ?>."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapScriptLiterals()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap string literals that appear in script attributes. Tidy wraps long script string literals by inserting a backslash character before the line break.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�Գ����ڽű�����(script attributes)�е��ַ�����������������. Tidyͨ���ڻ���ǰ���뷴б�ܶԳ��ַ�����������������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlWrapSections()
{
	CString strText;
	strText = _T("This option specifies if Tidy should line wrap text contained within <![ ... ]> section tags.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ��<![ ... ]>�α�ǩ�ڵ��ı����ݽ�������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlAsciiChars()
{
	CString strText;
	strText = _T("Can be used to modify behavior of -c (--clean yes) option. If set to \"yes\" when using -c, &emdash;, &rdquo;, and other named character entities are downgraded to their closest ascii equivalents.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("�������ڵ���ѡ��-c (--clean yes)����Ϊ. ����-cѡ��ʱ,��Ϊ\"yes\",�� &emdash;, &rdquo;, �Լ����������ַ�ʵ�彫������Ϊ�������ascii."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlShowWarnings()
{
	CString strText;
	strText = _T("This option specifies if Tidy should suppress warnings. This can be useful when a few errors are hidden in a flurry of warnings.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ����ƾ�����Ϣ,���д���������Ϣʹ�ô�����Ϣ���ڷ���ʱ����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnBnClickedCheckHtmlForceOutput()
{
	CString strText;
	strText = _T("This option specifies if Tidy should produce output even if errors are encountered. Use this option with care - if Tidy reports an error, this means Tidy was not able to, or is not sure how to, fix the error, so the resulting output may not reflect your intention.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�������, ��ʹ�����ش������.���Tidy�������ش���Ļ�,��ѡ������, ����ζ��Tidy���ܻ�ȷ������޸�����,�Ӷ�ʹ������ܱ��������ͼ."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlAltText()
{
	CString strText;
	strText = _T("This option specifies the default \"alt=\" text Tidy uses for <IMG> attributes. This feature is dangerous as it suppresses further accessibility warnings. You are responsible for making your documents accessible to people who can not see the images!");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��������涨��ǩ<IMG>��\"alt=\"���Ե�Ĭ���ı�.���������Σ�յ�, ��Ϊ�������ƽ������Ŀɷ����Ծ���.�������ΰ�����Щ���ܿ���ͼƬ����ʶ������ĵ�!"));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlCssPrefix()
{
	CString strText;
	strText = _T("This option specifies the prefix that Tidy uses for styles rules. By default, \"c\" will be used.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨���ڷ������ǰ׺.Ĭ��Ϊ\"c\"."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewBlocklevelTags()
{
	CString strText;
	strText = _T("This option specifies new block-level tags. This option takes a space or comma separated list of tag names. Unless you declare new tags, Tidy will refuse to generate a tidied file if the input includes previously unknown tags. Note you can't change the content model for elements such as <TABLE>, <UL>, <OL> and <DL>. This option is ignored in XML mode.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�µĿ鼶��ǩ. ��ѡ���ÿո�򶺺ŷָ���ǩ�б�.�������������±�ǩ, ��������ļ�������ǰδ֪�ı�ǩ,Tidy���������ɴ����ļ�. �㲻�ܸı�Ԫ�����ݵ�ģʽ,����: <TABLE>, <UL>, <OL> and <DL>. ���ѡ����XMLģʽ�б�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewEmptyTags()
{
	CString strText;
	strText = _T("This option specifies new empty inline tags. This option takes a space or comma separated list of tag names. Unless you declare new tags, Tidy will refuse to generate a tidied file if the input includes previously unknown tags. Remember to also declare empty tags as either inline or blocklevel. This option is ignored in XML mode.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��ָ���µĿ�inline��ǩ.��ѡ��涨�µĿ�inline��ǩ. ��ѡ���ÿո�򶺺ŷָ���ǩ�б�.�������������±�ǩ, ��������ļ�������ǰδ֪�ı�ǩ,Tidy���������ɴ����ļ�.��ס,�����Ŀձ�ǩҲ��Ϊinline��blocklevel��ǩ. ���ѡ����XMLģʽ�б�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewInlineTags()
{
	CString strText;
	strText = _T("This option specifies new non-empty inline tags. This option takes a space or comma separated list of tag names. Unless you declare new tags, Tidy will refuse to generate a tidied file if the input includes previously unknown tags. This option is ignored in XML mode.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�µķǿ�inline��ǩ.��ѡ���ÿո�򶺺ŷָ���ǩ�б�. �������������±�ǩ,��������ļ�������ǰδ֪�ı�ǩ,Tidy���������ɴ����ļ�. ���ѡ����XMLģʽ�б�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlNewPreTags()
{
	CString strText;
	strText = _T("This option specifies new tags that are to be processed in exactly the same way as HTML's <PRE> element. This option takes a space or comma separated list of tag names. Unless you declare new tags, Tidy will refuse to generate a tidied file if the input includes previously unknown tags. Note you can not as yet add new CDATA elements (similar to <SCRIPT>). This option is ignored in XML mode.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨��HTML��<PRE>Ԫ����ͬ��������±�ǩ. ��ѡ���ÿո�򶺺ŷָ���ǩ�б�.�������������±�ǩ,��������ļ�������ǰδ֪�ı�ǩ, Tidy���������ɴ����ļ�. ע��:��Ҳ���ܼ��µ�CDATA Ԫ�� (���� <SCRIPT>). ���ѡ����XMLģʽ�б�����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlShowErrors()
{
	CString strText;
	strText = _T("This option specifies the number Tidy uses to determine if further errors should be shown. If set to 0, then no errors are shown.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨Tidyȷ����ʾ������Ϣ������. �����Ϊ 0, ����ʾ����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlIndentSpaces()
{
	CString strText;
	strText = _T("This option specifies the number of spaces Tidy uses to indent content, when indentation is enabled.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨����ѡ�Ϳ���ʱ,�����Ŀո���."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlTabSize()
{
	CString strText;
	strText = _T("This option specifies the number of columns that Tidy uses between successive tab stops. It is used to map tabs to spaces when reading the input. Tidy never outputs tabs.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨����tab������ռ������. ���ڴ�tab���ո��ӳ��.Tidy�����tab."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnEnSetfocusEditHtmlWrap()
{
	CString strText;
	strText = _T("This option specifies the right margin Tidy uses for line wrapping. Tidy tries to wrap lines so that they do not exceed this length. Set wrap to zero if you want to disable line wrapping.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨���е��ұ߾�. Tidy�ڲ������˳����ڻ���. ��Ϊ0,��ζ�Źر����й���."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlIndent()
{
	CString strText;
	strText = _T("This option specifies if Tidy should indent block-level tags. If set to \"auto\", this option causes Tidy to decide whether or not to indent the content of tags such as TITLE, H1-H6, LI, TD, TD, or P depending on whether or not the content includes a block-level element. You are advised to avoid setting indent to yes as this can expose layout bugs in some browsers.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ������鼶��ǩ. ����Ϊ\"auto\", ���ѡ�����ݱ�ǩ,��:TITLE, H1-H6, LI, TD, TD, �� P�Ƿ�����鼶Ԫ������, �����Ƿ�������ǩ����. �������ʹ��yes, ��Ϊ��ʹһЩ��������ֲ�(layout)bugs."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlMergeDivs()
{
	CString strText;
	strText = _T("Can be used to modify behavior of -c (--clean yes) option. This option specifies if Tidy should merge nested <div> such as \"<div><div>...</div></div>\". If set to \"auto\", the attributes of the inner <div> are moved to the outer one. As well, nested <div> with ID attributes are not merged. If set to \"yes\", the attributes of the inner <div> are discarded with the exception of \"class\" and \"style\".");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("���ڸı�-c (--clean yes)ѡ�����Ϊ.��ѡ��涨�Ƿ�ϲ�Ƕ�׵�<div>��\"<div><div>...</div></div>\". �����Ϊ\"auto\", �ڲ�<div>������ֵ���Ƶ��ⲿ. ��ID���Ե�<div>�����кϲ�. �����Ϊ\"yes\", �ڲ�<div>������ֵ���в��Ϸ���\"class\"��\"style\"��������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlMergeSpans()
{
	CString strText;
	strText = _T("Can be used to modify behavior of -c (--clean yes) option. This option specifies if Tidy should merge nested <span> such as \"<span><span>...</span></span>\". The algorithm is identical to the one used by --merge-divs.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("���ڸı�-c (--clean yes)ѡ�����Ϊ. ��ѡ��涨�Ƿ�ϲ�Ƕ�׵�<span>��\"<span><span>...</span></span>\". �㷨��ѡ��--merge-divsһ��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlShowBodyOnly()
{
	CString strText;
	strText = _T("This option specifies if Tidy should print only the contents of the body tag as an HTML fragment. If set to \"auto\", this is performed only if the body tag has been inferred. Useful for incorporating existing whole pages as a portion of another page. This option has no effect if XML output is requested.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�ֻ��ӡhtml��body��ǩ������.�����Ϊ\"auto\",�����ƶϴ�����body��ǩʱִ��."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlDoctype()
{
	CString strText;
	strText = _T("This option specifies the DOCTYPE declaration generated by Tidy. If set to \"omit\" the output won't contain a DOCTYPE declaration. If set to \"auto\" (the default) Tidy will use an educated guess based upon the contents of the document. If set to \"strict\", Tidy will set the DOCTYPE to the strict DTD. If set to \"loose\", the DOCTYPE is set to the loose (transitional) DTD. Alternatively, you can supply a string for the formal public identifier (FPI).");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨Tidy���ɵ�DOCTYPE ����. ��Ϊ\"omit\" ��������� DOCTYPE ����. ��Ϊ\"auto\"(Ĭ��) �����������������ж�. ��Ϊ\"strict\", Tidy ���� DOCTYPE Ϊ�ϸ�(strict) DTD. ��Ϊ\"loose\", DOCTYPE ��Ϊ loose (transitional) DTD. ��Ϊѡ��, ����Ը�һ���ַ�����ΪFPI(the formal public identifier)."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlRepeatedAttributes()
{
	CString strText;
	strText = _T("This option specifies if Tidy should keep the first or last attribute, if an attribute is repeated, e.g. has two align attributes.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ񱣳��ظ����Եĵ�һ�������һ������.����:��������align����."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlSortAttributes()
{
	CString strText;
	strText = _T("This option specifies that tidy should sort attributes within an element using the specified sort algorithm. If set to \"alpha\", the algorithm is an ascending alphabetic sort.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�Ƿ�һЩ�ض��������㷨��Ԫ���е����Խ�������. �����Ϊ\"alpha\", ����ĸ������."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlCharEncoding()
{
	CString strText;
	strText = _T("This option specifies the character encoding Tidy uses for both the input and output. For ascii, Tidy will accept Latin-1 (ISO-8859-1) character values, but will use entities for all characters whose value > 127. For raw, Tidy will output values above 127 without translating them into entities. For latin1, characters above 255 will be written as entities. For utf8, Tidy assumes that both input and output is encoded as UTF-8. You can use iso2022 for files encoded using the ISO-2022 family of encodings e.g. ISO-2022-JP. For mac and win1252, Tidy will accept vendor specific character values, but will use entities for all characters whose value > 127. For unsupported encodings, use an external utility to convert to and from UTF-8.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨���������������ַ�������. ����ascii,Tidy������Latin-1 (ISO-8859-1)�ַ�ֵ, ������������ֵ>127�ַ���ʵ��. ����raw, Tidy������ʵ�������ֵ>127�ַ�. ����latin1, �ַ���255���ϵ����Ϊ��ʵ��. ����utf8, Tidy�������������ļ�������utf-8����. �������ISO-2022�������,����ISO-2022-JP. ����mac��win1252, Tidy�������䳧�̵������ַ�ֵ, �����������ַ�ֵ>127�Ľ�����ʵ��. ���ڲ�֧�ֵı���, Ҫ���ⲿ���ߴ�UTF-8ת��, ��ת����UTF-8."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlInputEncoding()
{
	CString strText;
	strText = _T("This option specifies the character encoding Tidy uses for the input. See char-encoding for more info.");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨�����ļ����ַ�������. �������char-encoding."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::OnCbnSetfocusComboHtmlOutputEncoding()
{
	CString strText;
	strText = _T("This option specifies the character encoding Tidy uses for the output. See char-encoding for more info. May only be different from input-encoding for Latin encodings (ascii, latin0, latin1, mac, win1252, ibm858).");
	if (1 == theApp.m_nAppLanguageID)
	{
		strText.Append(_T("\r\n"));
		strText.Append(_T("��ѡ��涨Tidy����������ַ�������. �������char-encoding. ������Latin����(ascii, latin0, latin1, mac, win1252, ibm858),������������벻ͬ."));
	}
	SetViewEdit(strText);
}

void CSetPageHtmlTwo::InitLimit()
{
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INDENT))->SetCurSel(2);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_DIVS))->SetCurSel(0);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_SPANS))->SetCurSel(0);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SHOW_BODY_ONLY))->SetCurSel(2);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_DOCTYPE))->SetCurSel(1);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_REPEATED_ATTRIBUTES))->SetCurSel(1);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SORT_ATTRIBUTES))->SetCurSel(0);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_CHAR_ENCODING))->SetCurSel(1);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INPUT_ENCODING))->SetCurSel(3);
	((CComboBox *)GetDlgItem(IDC_COMBO_HTML_OUTPUT_ENCODING))->SetCurSel(1);
	((CEdit *)GetDlgItem(IDC_EDIT_HTML_SHOW_ERRORS))->SetWindowText(_T("6"));
	((CEdit *)GetDlgItem(IDC_EDIT_HTML_INDENT_SPACES))->SetWindowText(_T("2"));
	((CEdit *)GetDlgItem(IDC_EDIT_HTML_TAB_SIZE))->SetWindowText(_T("8"));
	((CEdit *)GetDlgItem(IDC_EDIT_HTML_WRAP))->SetWindowText(_T("68"));
}

void CSetPageHtmlTwo::SetTidyConfig( LPCTSTR lpszTidy, UINT uLangID )
{
	m_onlyHtmlXml = uLangID;
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

void CSetPageHtmlTwo::GetTidyConfig( CString &strTidyValue )
{
	CString strTidy, strValue;
	strTidy.Empty();

	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_BREAK_BEFORE_BR))->GetCheck())
	{
		strTidy.Append(_T("-bbb"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_INDENT_ATTRIBUTES))->GetCheck())
	{
		strTidy.Append(_T("-ia"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_MARKUP))->GetCheck())
	{
		strTidy.Append(_T("-m"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_PUNCTUATION_WRAP))->GetCheck())
	{
		strTidy.Append(_T("-pw"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_VERTICAL_SPACE))->GetCheck())
	{
		strTidy.Append(_T("-vs"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_ASP))->GetCheck())
	{
		strTidy.Append(_T("-wa"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_ATTRIBUTES))->GetCheck())
	{
		strTidy.Append(_T("-wat"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_JSTE))->GetCheck())
	{
		strTidy.Append(_T("-wj"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_PHP))->GetCheck())
	{
		strTidy.Append(_T("-wp"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_SCRIPT_LITERALS))->GetCheck())
	{
		strTidy.Append(_T("-wsl"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_SECTIONS))->GetCheck())
	{
		strTidy.Append(_T("-ws"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_ASCII_CHARS))->GetCheck())
	{
		strTidy.Append(_T("-ac"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_SHOW_WARNINGS))->GetCheck())
	{
		strTidy.Append(_T("-sw"));
	}
	if (((CButton *)GetDlgItem(IDC_CHECK_HTML_FORCE_OUTPUT))->GetCheck())
	{
		strTidy.Append(_T("-fo"));
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INDENT))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-i%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INDENT))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_DIVS))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-md%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_DIVS))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_SPANS))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-ms%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_SPANS))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SHOW_BODY_ONLY))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-sbo%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SHOW_BODY_ONLY))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_DOCTYPE))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-d%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_DOCTYPE))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_REPEATED_ATTRIBUTES))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-ra%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_REPEATED_ATTRIBUTES))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SORT_ATTRIBUTES))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-sa%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SORT_ATTRIBUTES))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_CHAR_ENCODING))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-ce%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_CHAR_ENCODING))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INPUT_ENCODING))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-ie%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INPUT_ENCODING))->GetCurSel());
	}
	if (CB_ERR != ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_OUTPUT_ENCODING))->GetCurSel())
	{
		strTidy.AppendFormat(_T("-oe%d"), ((CComboBox *)GetDlgItem(IDC_COMBO_HTML_OUTPUT_ENCODING))->GetCurSel());
	}

	CString strNothing;
	GetDlgItemText(IDC_EDIT_HTML_SHOW_ERRORS, strValue);
	strTidy.Append(_T("-se"));
	strTidy.Append(strValue);

	GetDlgItemText(IDC_EDIT_HTML_INDENT_SPACES, strValue);
	strTidy.Append(_T("-is"));
	strTidy.Append(strValue);

	GetDlgItemText(IDC_EDIT_HTML_TAB_SIZE, strValue);
	strTidy.Append(_T("-ts"));
	strTidy.Append(strValue);

	GetDlgItemText(IDC_EDIT_HTML_WRAP, strValue);
	strTidy.Append(_T("-w"));
	strTidy.Append(strValue);

	GetDlgItemText(IDC_EDIT_HTML_ALT_TEXT, strValue);
	{
		strTidy.Append(_T("-at"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_at = strValue:strNothing = strValue;
	}

	GetDlgItemText(IDC_EDIT_HTML_CSS_PREFIX, strValue);
	{
		strTidy.Append(_T("-cp"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_cp = strValue:strNothing = strValue;
	}

	GetDlgItemText(IDC_EDIT_HTML_NEW_BLOCKLEVEL_TAGS, strValue);
	{
		strTidy.Append(_T("-nbt"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_nbt = strValue:strNothing = strValue;
	}

	GetDlgItemText(IDC_EDIT_HTML_NEW_EMPTY_TAGS, strValue);
	{
		strTidy.Append(_T("-net"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_net = strValue:strNothing = strValue;
	}

	GetDlgItemText(IDC_EDIT_HTML_NEW_INLINE_TAGS, strValue);
	{
		strTidy.Append(_T("-nit"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_nit = strValue:strNothing = strValue;
	}

	GetDlgItemText(IDC_EDIT_HTML_NEW_PRE_TAGS, strValue);
	{
		strTidy.Append(_T("-npt"));
		m_onlyHtmlXml == SYN_HTML? g_GlobalTidy.m_TidyHtml_npt = strValue:strNothing = strValue;
	}

	strTidyValue.Append(strTidy);
}

void CSetPageHtmlTwo::SetTidyControl( LPCTSTR lpszTidy, int nPos, int nSize )
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
	CString strNumValue;
	strNumValue.Format(_T("%d"), nNumValue);

	CString strNothing;
	strNothing.Empty();
	if (_T("bbb") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_BREAK_BEFORE_BR))->SetCheck(1);
	} 
	else if (_T("ia") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_INDENT_ATTRIBUTES))->SetCheck(1);
	}
	else if (_T("m") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_MARKUP))->SetCheck(1);
	}
	else if (_T("pw") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_PUNCTUATION_WRAP))->SetCheck(1);
	}
	else if (_T("vs") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_VERTICAL_SPACE))->SetCheck(1);
	}
	else if (_T("wa") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_ASP))->SetCheck(1);
	}
	else if (_T("wat") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_ATTRIBUTES))->SetCheck(1);
	}
	else if (_T("wj") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_JSTE))->SetCheck(1);
	}
	else if (_T("wp") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_PHP))->SetCheck(1);
	}
	else if (_T("wsl") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_SCRIPT_LITERALS))->SetCheck(1);
	}
	else if (_T("ws") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_WRAP_SECTIONS))->SetCheck(1);
	}
	else if (_T("ac") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_ASCII_CHARS))->SetCheck(1);
	}
	else if (_T("sw") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_SHOW_WARNINGS))->SetCheck(1);
	}
	else if (_T("fo") == strParam)
	{
		((CButton *)GetDlgItem(IDC_CHECK_HTML_FORCE_OUTPUT))->SetCheck(1);
	}
	else if (_T("i") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INDENT))->SetCurSel(nNumValue);
	}
	else if (_T("md") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_DIVS))->SetCurSel(nNumValue);
	}
	else if (_T("ms") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_MERGE_SPANS))->SetCurSel(nNumValue);
	}
	else if (_T("sbo") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SHOW_BODY_ONLY))->SetCurSel(nNumValue);
	}
	else if (_T("d") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_DOCTYPE))->SetCurSel(nNumValue);
	}
	else if (_T("ra") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_REPEATED_ATTRIBUTES))->SetCurSel(nNumValue);
	}
	else if (_T("sa") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_SORT_ATTRIBUTES))->SetCurSel(nNumValue);
	}
	else if (_T("ce") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_CHAR_ENCODING))->SetCurSel(nNumValue);
	}
	else if (_T("ie") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_INPUT_ENCODING))->SetCurSel(nNumValue);
	}
	else if (_T("oe") == strParam)
	{
		((CComboBox *)GetDlgItem(IDC_COMBO_HTML_OUTPUT_ENCODING))->SetCurSel(nNumValue);
	}
	else if (_T("se") == strParam)
	{
		GetDlgItem(IDC_EDIT_HTML_SHOW_ERRORS)->SetWindowText(strNumValue);
	}
	else if (_T("is") == strParam)
	{
		GetDlgItem(IDC_EDIT_HTML_INDENT_SPACES)->SetWindowText(strNumValue);
	}
	else if (_T("ts") == strParam)
	{
		GetDlgItem(IDC_EDIT_HTML_TAB_SIZE)->SetWindowText(strNumValue);
	}
	else if (_T("w") == strParam)
	{
		GetDlgItem(IDC_EDIT_HTML_WRAP)->SetWindowText(strNumValue);
	}
	else if (_T("at") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_at):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
	else if (_T("cp") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_cp):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
	else if (_T("nbt") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_nbt):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
	else if (_T("net") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_net):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
	else if (_T("nit") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_nit):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
	else if (_T("npt") == strParam)
	{
		m_onlyHtmlXml == SYN_HTML? GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(g_GlobalTidy.m_TidyHtml_npt):GetDlgItem(IDC_EDIT_HTML_ALT_TEXT)->SetWindowText(strNothing);
	}
}