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
        width: parent.width
        height: 300
        onTitleClicked: {
            if (height > 60) {
                height = 60
            } else {
                height = 300
            }
        }
    }



}
