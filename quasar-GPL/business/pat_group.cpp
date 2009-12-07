// $Id: pat_group.cpp,v 1.6 2004/12/30 00:07:58 bpepers Exp $
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

#include "pat_group.h"

PatGroup::PatGroup()
    : _name(""), _number("")
{
    _data_type = PAT_GROUP;
}

PatGroup::~PatGroup()
{
}

bool
PatGroup::operator==(const PatGroup& rhs) const
{
    if ((const DataObject&)rhs != *this) return false;
    if (rhs._name != _name) return false;
    if (rhs._number != _number) return false;
    if (rhs._equity_id != _equity_id) return false;
    if (rhs._credit_id != _credit_id) return false;
    if (rhs._card_ids != _card_ids) return false;
    return true;
}

bool
PatGroup::operator!=(const PatGroup& rhs) const
{
    return !(*this == rhs);
}
