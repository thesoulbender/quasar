// $Id: choice_param_type.h,v 1.2 2004/10/12 05:46:26 bpepers Exp $
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

#ifndef CHOICE_PARAM_TYPE_H
#define CHOICE_PARAM_TYPE_H

#include "report_param_type.h"

class ChoiceParamType: public ReportParamType {
public:
    ChoiceParamType();
    ~ChoiceParamType();

    // Type name
    QString type() const { return "choice"; }

    // Create a clone
    ChoiceParamType* clone() const;

    // Get the widget for data entry
    QWidget* getWidget(QWidget* parent);

    // Get/set the value from the widget (internal values)
    QVariant getValue(QWidget* widget);
    void setValue(QWidget* widget, const QVariant& value);

    // Validate the current widget contents
    bool validate(QWidget* widget);
};

#endif // CHOICE_PARAM_TYPE_H
