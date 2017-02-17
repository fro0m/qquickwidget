#include "datamodel.h"

DataModel::DataModel()
    : QStandardItemModel()
{

    QStandardItem * item1 = new QStandardItem();
    item1->setData(1, Qt::DisplayRole);
    appendRow(item1);
    item1 = new QStandardItem();
    item1->setData(2, Qt::DisplayRole);
    appendRow(item1);
    item1 = new QStandardItem();
    item1->setData(3, Qt::DisplayRole);
    appendRow(item1);

}

//QHash<int, QByteArray> DataModel::roleNames() const
//{
//    QHash<int, QByteArray> roles;
//    roles[role1] = "one";
//    roles[role2] = "two";
//    roles[role3] = "three";

//    return roles;
//}
