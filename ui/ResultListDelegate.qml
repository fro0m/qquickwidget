import QtQuick 2.7
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.4

ColumnLayout {
    id: rootComponent
    implicitWidth: 200
    implicitHeight: 300
    clip: true
    signal titleClicked();
    Rectangle {
        id: title
        Layout.minimumHeight: 60
        Layout.preferredHeight: parent.height * 0.2
        Layout.fillWidth: true
        border.width: 1
        border.color: "black"
        Text {
            anchors.centerIn: parent
            text: qsTr("Вопрос ") + questionIndex
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                rootComponent.titleClicked();
            }
        }
    }
    TableView {
        id: table
        Layout.fillHeight: true
        Layout.minimumHeight: 0
        Layout.fillWidth: true
        TableViewColumn {
            role: "state"
            title: qsTr("Состояние")
            width: table.width - vfColumn.width - pnColumn.width - prneColumn.width - rvColumn.width - 20
        }
        TableViewColumn {
            id: vfColumn
            role: "vf"
            title: qsTr("В/Ф")
            width: 100
        }
        TableViewColumn {
            id: pnColumn
            role: "pn"
            title: qsTr("П/Н")
            width: 100
        }
        TableViewColumn {
            id: prneColumn
            role: "prne"
            title: qsTr("Пр/Не")
            width: 100
        }
        TableViewColumn {
            id: rvColumn
            role: "rv"
            title: qsTr("Р/В")
            width: 100
        }
        model: ListModel {
            Component.onCompleted: {
                append({"state": "Слушает",
                           "vf": listenResults[0],
                           "pn": listenResults[1],
                           "prne" : listenResults[2],
                           "rv": listenResults[3]});
                append({"state": "Обдумывает",
                           "vf": thinkOverResults[0],
                           "pn": thinkOverResults[1],
                           "prne" : thinkOverResults[2],
                           "rv": thinkOverResults[3]});
                append({"state": "Отвечает",
                           "vf": answerResults[0],
                           "pn": answerResults[1],
                           "prne" : answerResults[2],
                           "rv": answerResults[3]});
            }
        }
    }

    Row {
        id: resultPanel
        Layout.minimumHeight: parent.height * 0.2
        Layout.fillWidth: true
        Rectangle {
            width: parent.width * 0.7;
            height: parent.height
            Text {
                anchors.centerIn: parent
                text: "Результат"
            }
        }
        Item {
            width: parent.width * 0.3;
            height: parent.height
            Rectangle {
                anchors.centerIn: parent
                height: parent.height / 2
                width: height
                radius: height / 2
                color: result ? "green" : "red"
            }
        }
    }

}
