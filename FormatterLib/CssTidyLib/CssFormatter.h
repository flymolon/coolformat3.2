#pragma once
#include <string>
using namespace std;

namespace CssFormatterTidy{
	class CssFormatter
	{
	public:
		CssFormatter(void);
		~CssFormatter(void);
		
		/**
		 * ��ʽ��css
		 * @param const char * pSourceIn 
		 * @param const char * pOptions 
		 * @param string & strOut 
		 * @param string & strErr 
		 * @return bool 
		 */
		bool CssTidyMain(const char* pSourceIn, const char *pOptions, string &strOut, string &strErr);
	};
}
/*
settings["remove_bslash"] = 1;
settings["compress_colors"] = 1;
settings["compress_font-weight"] = 1;
settings["lowercase_s"] = 0;
settings["optimise_shorthands"] = 1;
settings["remove_last_;"] = 0;
settings["case_properties"] = 0;
settings["sort_properties"] = 0;
settings["sort_selectors"] = 0;
settings["merge_selectors"] = 2;
settings["discard_invalid_properties"] = 0;
settings["allow_html_in_templates"] = 0;
settings["silent"] = 0;
settings["preserve_css"] = 0;
settings["timestamp"] = 0;
css_level = "CSS2.1";
csstemplate 
*/