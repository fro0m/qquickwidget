#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QObject>
#include "QStandardItemModel"

class DataModel : public QStandardItemModel
{
public:
    DataModel();
    //QHash<int, QByteArray> roleNames() const;
};

#endif // DATAMODEL_H
