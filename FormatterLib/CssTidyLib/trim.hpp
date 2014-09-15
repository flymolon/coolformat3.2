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
 
#ifndef HEADER_CSS_TRIM
#define HEADER_CSS_TRIM 

// Removes whitespace at the end and beginning of a string
const string trim(const string istring);

// Removes whitespace at the beginning of a string
const string ltrim(const string istring);

// Removes whitespace at the end of a string
const string rtrim(const string istring);
const string rtrim(const string istring, const string chars);

// Removes HTML tags
string strip_tags(string istring);

#endif // HEADER_CSS_TRIM
