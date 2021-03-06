/***************************************************************************
 *   Copyright (C) 2008-2014 by Andrzej Rybczak                            *
 *   electricityispower@gmail.com                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#include <ctime>
#include <cstdlib>
#include <iostream>

#include "error.h"

namespace
{
	const char *Timestamp()
	{
		static char result[32];
		time_t raw;
		tm *t;
		time(&raw);
		t = localtime(&raw);
		result[strftime(result, 31, "%Y/%m/%d %X", t)] = 0;
		return result;
	}
}

void FatalError(const std::string &msg)
{
	std::cerr << "[" << Timestamp() << "] " << msg << std::endl;
	abort();
}

