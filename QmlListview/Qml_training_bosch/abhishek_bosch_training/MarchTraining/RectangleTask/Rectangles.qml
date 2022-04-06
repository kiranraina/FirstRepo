import QtQuick 2.0

Rectangle{
    property string txt
    id:r1
    width: 70
    height:30
    Text {
        text:r1.txt
        color: "white"
        anchors.centerIn: parent
    }
}






