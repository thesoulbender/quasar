// $Id: integer_valcon.h,v 1.6 2005/02/24 02:48:49 bpepers Exp $
//
// Copyright (C) 1998-2004 Linux Canada Inc.  All rights reserved.
//
// This file is part of Quasar Accounting
//
// This file may be distributed and/or modified under the terms of the
// GNU General Public License version 2 as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL included in the
// packaging of this file.
//
// Licensees holding a valid Quasar Commercial License may use this file
// in accordance with the Quasar Commercial License Agreement provided
// with the Software in the LICENSE.COMMERCIAL file.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// See http://www.linuxcanada.com or email sales@linuxcanada.com for
// information about Quasar Accounting support and maintenance options.
//
// Contact sales@linuxcanada.com if any conditions of this licensing are
// not clear to you.

#ifndef INTEGER_VALCON_H
#define INTEGER_VALCON_H

#include "number_valcon.h"

class IntegerValcon: public NumberValcon {
public:
    IntegerValcon();
    ~IntegerValcon();

    bool parse(const QString& text);
    QString format();
    QString format(Variant value)	{ return NumberValcon::format(value); }
    QString format(fixed value)		{ return NumberValcon::format(value); }

    // Group digits in the output?
    bool groupingUsed;
};

#endif // INTEGER_VALCON_H