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
            color: "red"
        }
        Label{
            text:bolster
            color: "red"
        }
        Label{
            text:position
            color: "red"
        }
        Label{
            text:shoulder
            color: "red"
        }

    }
}
