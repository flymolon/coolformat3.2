/*
 * Copyright 2005, 2006, 2007 Florian Schmitz
 *
 * This file is part of CSSTidy.
 *
 *  CSSTidy is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2.1 of the License, or
 *   (at your option) any later version.
 *
 *   CSSTidy is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 * 
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
 
using namespace std;
#ifndef HEADER_CSS_STRUCT 
#define HEADER_CSS_STRUCT 

typedef umap<string, string>   pstore;
typedef umap<string, pstore >  sstore;
typedef umap<string, sstore>   css_struct;

enum parse_status
{
	is,ip,iv,instr,ic,at
};

enum message_type
{
	Information,Warning,Error
};

enum token_type
{
	AT_START, AT_END, SEL_START, SEL_END, PROPERTY, VALUE, COMMENT
};

struct token
{
	token_type type;
	string data;
};

struct message
{
	string m;
	message_type t;
};

#endif // HEADER_CSS_STRUCT 
