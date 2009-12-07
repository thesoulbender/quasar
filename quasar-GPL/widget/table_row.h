// $Id: table_row.h,v 1.9 2004/02/03 00:56:03 arandell Exp $
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

#ifndef TABLE_ROW_H
#define TABLE_ROW_H

#include "variant.h"
#include <qvaluevector.h>

class TableRow {
public:
    TableRow();
    virtual ~TableRow();

    virtual Variant value(int col) = 0;
    virtual void setValue(int col, Variant value) = 0;

    // Convenience methods
    QString getString(int col)	{ return value(col).toString(); }
    bool getBoolean(int col)	{ return value(col).toBool(); }
    fixed getFixed(int col)	{ return value(col).toFixed(); }
    int getInt(int col)		{ return value(col).toFixed().toInt(); }
};

class VectorRow: public TableRow {
public:
    VectorRow(int columns);
    virtual ~VectorRow();

    virtual Variant value(int col);
    virtual void setValue(int col, Variant value);

protected:
    QValueVector<Variant> _columnData;
};

#endif
