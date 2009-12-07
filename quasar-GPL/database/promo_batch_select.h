// $Id: promo_batch_select.h,v 1.1 2004/10/08 08:33:39 bpepers Exp $
//
// Copyright (C) 1998-2004 Linux Canada Inc.  All rights reserved.
//
// This file is part of Quasar Acpromobatching
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
// information about Quasar Acpromobatching support and maintenance options.
//
// Contact sales@linuxcanada.com if any conditions of this licensing are
// not clear to you.

#ifndef PROMO_BATCH_SELECT_H
#define PROMO_BATCH_SELECT_H

#include "select.h"
class PromoBatch;

struct PromoBatchSelect: public Select {
    PromoBatchSelect();
    virtual ~PromoBatchSelect();

    // Selection criteria
    QString number;

    virtual QString where() const;
};

#endif // PROMO_BATCH_SELECT_H
