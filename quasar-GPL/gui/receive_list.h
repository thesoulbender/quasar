// $Id: receive_list.h,v 1.9 2004/01/31 01:50:31 arandell Exp $
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

#ifndef RECEIVE_LIST_H
#define RECEIVE_LIST_H

#include "active_list.h"

class LookupEdit;

class ReceiveList: public ActiveList {
    Q_OBJECT
public:
    ReceiveList(MainWindow* main);
    ~ReceiveList();

protected slots:
    virtual void slotPaidChanged();

protected:
    virtual void performRefresh();
    virtual void performPrint();
    virtual void performNew();
    virtual void performEdit();

    virtual bool isActive(Id receive_id);
    virtual void setActive(Id receive_id, bool active);

    LookupEdit* _vendor;
    LookupEdit* _store;
    QCheckBox* _show_paid;
};

#endif // RECEIVE_LIST_H
