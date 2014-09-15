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
 
#ifndef HEADER_CSS_CONVERT
#define HEADER_CSS_CONVERT 

// Returns the lowercase version of a string
string strtolower(string istring);
// Apparently faster replacement for tolower
char chartolower(const char c);

// Returns the uppercase version of a string
string strtoupper(string istring);
char chartoupper(const char c);

// Converts an integer to a hex-string
string dechex(const int i);

// Converts a hexadecimal number (string) to a decimal number
double hexdec(string istring);

// Converts float to string
string f2str(const float f);

// Converts a string to float
float str2f(const string istring);

// Converts a char to a string
string char2str(const char c);

#endif // HEADER_CSS_CONVERT
