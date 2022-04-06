import QtQuick 2.0
import QtQuick.Layouts 1.0
Rectangle{
    id:rect
    height: _root.height/3
    width: _root.width
    color: "transparent"
    visible: false
    ColumnLayout{
        anchors.centerIn: parent
        Text{
            id:rectTxt2
            text:currentRect.wtemp
            color: "white"
            font.pixelSize: 25
        }
        Image{
            Layout.preferredHeight: 50
            Layout.preferredWidth: 50
            id:cimages
            source:currentRect.wimage

        }

    }
}
