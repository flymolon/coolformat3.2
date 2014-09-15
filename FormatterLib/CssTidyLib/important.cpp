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

#include "csspp_globals.hpp"
using namespace std;


bool is_important(string value)
{
	// Remove whitespaces
	value = rtrim(strtolower(value));

	if(value.length() > 9 && value.substr(value.length()-9,9) == "important")
	{
		value = rtrim(value.substr(0,value.length()-9));
		if(value.substr(value.length()-1,1) == "!") {
			return true;
		}
	}
	return false;
}


string gvw_important(string value)
{
	if(is_important(value))
	{
		value = trim(value);
		value = value.substr(0,value.length()-9);
		value = trim(value);
		value = value.substr(0,value.length()-1);
		value = trim(value);
	}
	return value;
}

string c_important(string value)
{
	if(is_important(value))
	{
		value = gvw_important(value) + "!important";
	}
	return value;
}
