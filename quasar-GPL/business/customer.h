// $Id: customer.h,v 1.21 2004/12/30 00:07:58 bpepers Exp $
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

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "card.h"
#include "customer_type.h"

class Customer: public Card {
public:
    // Constructors and Destructor
    Customer();
    ~Customer();

    // Get methods
    Id typeId() const				{ return _type_id; }
    Id accountId() const			{ return _account_id; }
    Id termsId() const				{ return _term_id; }
    Id taxExemptId() const			{ return _tax_exempt_id; }
    fixed creditLimit() const			{ return _credit_limit; }
    bool canCharge() const			{ return _can_charge; }
    bool canWithdraw() const			{ return _can_withdraw; }
    bool canPayment() const			{ return _can_payment; }
    fixed serviceCharge() const			{ return _sc_rate; }
    bool checkWithdrawBalance() const		{ return _check_wd_bal; }
    bool printStatements() const		{ return _print_stmts; }
    bool creditHold() const			{ return _credit_hold; }
    bool secondReceipt() const			{ return _second_rcpt; }

    // Set methods
    void setTypeId(Id type_id)			{ _type_id = type_id; }
    void setAccountId(Id account_id)		{ _account_id = account_id; }
    void setTermsId(Id term_id)			{ _term_id = term_id; }
    void setTaxExemptId(Id tax_id)		{ _tax_exempt_id = tax_id; }
    void setCreditLimit(fixed limit)		{ _credit_limit = limit; }
    void setCanCharge(bool flag)		{ _can_charge = flag; }
    void setCanWithdraw(bool flag)		{ _can_withdraw = flag; }
    void setCanPayment(bool flag)		{ _can_payment = flag; }
    void setServiceCharge(fixed rate)		{ _sc_rate = rate; }
    void setCheckWithdrawBalance(bool flag)	{ _check_wd_bal = flag; }
    void setPrintStatements(bool flag)		{ _print_stmts = flag; }
    void setCreditHold(bool flag)		{ _credit_hold = flag; }
    void setSecondReceipt(bool flag)		{ _second_rcpt = flag; }

    // References
    const vector<QString>& references() const	{ return _refs; }
    vector<QString>& references()		{ return _refs; }

    // Set item info from a customer type
    void setFromType(const CustomerType& type);

    // Operations
    bool operator==(const Customer& rhs) const;
    bool operator!=(const Customer& rhs) const;

protected:
    Id _type_id;		// Customer type
    Id _account_id;		// AR account for invoices
    Id _term_id;		// Terms (Net 30, ...)
    Id _tax_exempt_id;		// Tax exemption
    fixed _credit_limit;	// Maximum amount they can have as balance
    bool _can_charge;		// Can charge on invoices?
    bool _can_withdraw;		// Can withdraw from account?
    bool _can_payment;		// Can make payments?
    fixed _sc_rate;		// Service charge rate
    bool _check_wd_bal;		// Check balance when doing withdraw
    bool _print_stmts;		// Print statements?
    bool _credit_hold;		// Customer is on credit hold
    bool _second_rcpt;		// Print second receipt at POS?
    vector<QString> _refs;	// References (for invoices)
};

#endif // CUSTOMER_H
