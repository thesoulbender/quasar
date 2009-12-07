// $Id: expense.h,v 1.7 2004/12/30 00:07:58 bpepers Exp $
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

#ifndef EXPENSE_H
#define EXPENSE_H

#include "data_object.h"

class Expense: public DataObject {
public:
    // Constructors and Destructor
    Expense();
    ~Expense();

    // Get methods
    const QString& name()		const { return _name; }
    const QString& number()		const { return _number; }
    Id taxId()				const { return _tax_id; }
    Id accountId()			const { return _account_id; }

    // Set methods
    void setName(const QString& name)		{ _name = name; }
    void setNumber(const QString& number)	{ _number = number; }
    void setTaxId(Id tax_id)			{ _tax_id = tax_id; }
    void setAccountId(Id account_id)		{ _account_id = account_id; }

    // Operations
    bool operator==(const Expense& rhs) const;
    bool operator!=(const Expense& rhs) const;

protected:
    QString _name;		// Name of expense
    QString _number;		// Unique expense number
    Id _tax_id;			// Tax to charge
    Id _account_id;		// GL account
};

#endif // EXPENSE_H
