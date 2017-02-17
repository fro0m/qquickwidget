#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QObject>
#include "QStandardItemModel"

enum Rls {
    QuestionIndex = Qt::UserRole,
    Result = Qt::UserRole + 1,
    ListenResults = Qt::UserRole + 2,
    ThinkOverResults = Qt::UserRole + 3,
    AnswerResults = Qt::UserRole +4
};

class DataModel : public QStandardItemModel
{
public:
    DataModel();
    //void setRoleNames(const QHash<int, QByteArray> & roleNames);
     QHash<int, QByteArray> roleNames() const;
};

#endif // DATAMODEL_H
