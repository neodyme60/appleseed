
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2014-2017 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_FOUNDATION_PLATFORM_OSLHEADERGUARDS_H
#define APPLESEED_FOUNDATION_PLATFORM_OSLHEADERGUARDS_H

// appleseed.foundation headers.
#include "oiioheaderguards.h"

#if defined _MSC_VER

    // C4290: C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
    #define BEGIN_OSL_INCLUDES              \
        BEGIN_OIIO_INCLUDES                 \
        __pragma(warning(push))             \
        __pragma(warning(disable: 4290))

    #define END_OSL_INCLUDES                \
        __pragma(warning(pop))              \
        END_OIIO_INCLUDES

#else

    #define BEGIN_OSL_INCLUDES
    #define END_OSL_INCLUDES

#endif

#endif  // !APPLESEED_FOUNDATION_PLATFORM_OSLHEADERGUARDS_H
