// $Id: query_data_source.h,v 1.2 2004/08/09 23:46:08 bpepers Exp $
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

#ifndef QUERY_DATA_SOURCE_H
#define QUERY_DATA_SOURCE_H

#include "data_source.h"

class Statement;
class Connection;

class QueryDataSource: public DataSource {
public:
    QueryDataSource();
    ~QueryDataSource();

    // Type name
    QString type() const { return "query"; }

    // Create a clone
    QueryDataSource* clone() const;

    // Initialize the data source
    bool initialize(ReportInterp* interp);

    // Move to next row
    bool next(ReportInterp* interp);

    // Get the value of a column in the current row
    QVariant get(ReportInterp* interp, int column);

    // Convert from/to XML element
    bool fromXML(QDomElement e);
    bool toXML(QDomElement& e) const;

    // Static text, expression, or code for query
    QString query;
    QString queryExpr;
    QString queryCode;

    // Current statement
    Statement* stmt;

    // Current quasar client
    static Connection* connection;
};

// Create a query data source
DataSource* createQueryDataSource();

#endif // QUERY_DATA_SOURCE_H
