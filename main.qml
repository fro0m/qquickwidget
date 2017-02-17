import QtQuick 2.0
import vmix.datamodel 1.0
import "qrc:/ui/"

ListView {
    x: 0
    y: 0
    model: DataModel {
        id: model
    }
    delegate: ResultListDelegate {
        height: 40
    }



}
