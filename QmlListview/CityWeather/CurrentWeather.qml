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
            id:rectTxt1
            text:currentRect.wtime
             color: "white"
        }
        Text{
            id:rectTxt2
            text:currentRect.wtemp
             color: "white"
        }
    }
}
