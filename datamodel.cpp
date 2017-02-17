#include "datamodel.h"

DataModel::DataModel()
    : QStandardItemModel()
{

    QStandardItem * item1 = new QStandardItem();
    item1->setData(1, Rls::QuestionIndex);
    item1->setData(true, Rls::Result);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ListenResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ThinkOverResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), AnswerResults);

    appendRow(item1);
    item1 = new QStandardItem();
    item1->setData(2, Rls::QuestionIndex);
    item1->setData(false, Rls::Result);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ListenResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ThinkOverResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), AnswerResults);
    appendRow(item1);
    item1 = new QStandardItem();
    item1->setData(3, Rls::QuestionIndex);
    item1->setData(true, Rls::Result);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ListenResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), ThinkOverResults);
    item1->setData(QVariant(QList<QVariant>({1,0,0,1})), AnswerResults);
    appendRow(item1);

}

QHash<int, QByteArray> DataModel::roleNames() const
{
    QHash<int, QByteArray> roleNames;
    roleNames[QuestionIndex] = "questionIndex";
    roleNames[Result] = "result";
    roleNames[ListenResults] = "listenResults";
    roleNames[ThinkOverResults] = "thinkOverResults";
    roleNames[AnswerResults] = "answerResults";
    return roleNames;
}

//void DataModel::setRoleNames(const QHash<int, QByteArray> &roleNames)
//{
//    QHash<int, QByteArray> roleNames;
//    roleNames[QuestionIndex] = "questionIndex";
//    roleNames[Result] = "result";
//    roleNames[ListenResults] = "listenResults";
//    roleNames[ThinkOverResults] = "thinkOverResults";
//    roleNames[AnswerResults] = "answerResults";

//}

//QHash<int, QByteArray> DataModel::roleNames() const
//{
//    QHash<int, QByteArray> roles;
//    roles[role1] = "one";
//    roles[role2] = "two";
//    roles[role3] = "three";

//    return roles;
//}
