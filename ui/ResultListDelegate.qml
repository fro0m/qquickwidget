import QtQuick 2.5
import QtQuick.Layouts 1.1

Rectangle {
    id: questionNumber
    implicitWidth: 200
    implicitHeight: 50
    border.width: 2
    border.color: "black"
    Text {
        anchors.centerIn: parent
        text: qsTr("Вопрос ") + display + "  "+ parent.width
    }
}
