import QtQuick 2.5
import QtQuick.Window 2.0

Window {
    id:_root
    visible: true
    width: 640
    height: 480
    Rectangle{
        id:r1
        width:100
        height: 100
        color: "blue"
         anchors.leftMargin: 10
    }
    Rectangle{
        id:r2
        width:100
        height: 100
        color: "yellow"
        anchors.left: r1.right
        anchors.leftMargin: 10
        anchors.right: r3.left
        anchors.rightMargin: 10
        anchors.bottom: parent.bottom
        anchors.top: parent.top
    }
    Rectangle{
        id:r3
        width:100
        height: 100
        color: "green"
        anchors.right:parent.right
        anchors.leftMargin: 10

    }
}
