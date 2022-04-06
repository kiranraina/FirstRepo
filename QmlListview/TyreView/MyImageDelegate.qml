import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Image{
    width: _root.width
    height:_root.height
    source:image
    ColumnLayout{
        anchors.centerIn: parent
        Label{
            text:index
            color: "Yellow"
        }
        Label{
            text:tyrename
            color: "Yellow"
        }
        Label{
            text:tireNumber
            color: "Yellow"
        }
        Label{
            text:radius
            color: "Yellow"
        }
        Label{
            text:width
            color: "Yellow"
        }
        Label{
            text:colo
            color: "Yellow"
        }
        Label{
            text:pressure
            color: "Yellow"
        }

    }
}
