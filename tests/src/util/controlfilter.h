/***************************************************************************
                               controlfilter.h
                             -------------------
    begin                : 2003/12/11
    copyright            : (C) 2003 by Michael CATANZARITI
    email                : mcatan@free.fr
 ***************************************************************************/
 /***************************************************************************
 * Copyright (C) The Apache Software Foundation. All rights reserved.      *
 *                                                                         *
 * This software is published under the terms of the Apache Software       *
 * License version 1.1, a copy of which has been included with this        *
 * distribution in the license.apl file.                                   *
 ***************************************************************************/

#ifndef _LOG4CXX_TESTS_UTIL_CONTROL_FILTER_H
#define _LOG4CXX_TESTS_UTIL_CONTROL_FILTER_H

#include "filter.h"
#include <vector>

namespace log4cxx
{
	class ControlFilter : public Filter
	{
	public:
		ControlFilter();
		String filter(const String& in) const throw(UnexpectedFormatException);
		ControlFilter& operator<<(const String& allowedPattern);

	protected:
		std::vector<String> allowedPatterns;
	};
};


#endif //_LOG4CXX_TESTS_UTIL_CONTROL_FILTER_H
