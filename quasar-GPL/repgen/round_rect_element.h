// $Id: round_rect_element.h,v 1.1 2004/08/04 00:11:32 bpepers Exp $
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

#ifndef ROUND_RECT_ELEMENT_H
#define ROUND_RECT_ELEMENT_H

#include "report_element.h"

class RoundRectElement: public ReportElement {
public:
    RoundRectElement();
    ~RoundRectElement();

    // Element type
    QString type() const { return "round_rect"; }

    // Create a clone of the element
    RoundRectElement* clone() const;

    // Clear all data to defaults
    void clear();

    // Generate page elements
    void generate(ReportInterp* interp, int offsetX, int offsetY,
		  QValueVector<PageElement>& elements);

    // Data
    int roundX;			// Roundness from 0-99
    int roundY;			// Roundness from 0-99

    // Convert to XML
    bool toXML(QDomElement& e) const;

protected:
    // Handle round rectangle attributes
    bool processAttribute(const QString& name, const QString& value);
};

#endif // ROUND_RECT_ELEMENT_H
