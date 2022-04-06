import QtQuick 2.0
import QtQuick.Window 2.0
Window {
    width: 480
    height: 480
    visible: true
    title: qsTr("Hello World")
    color:"grey"
    Rectangle{
        id:r1
        width:parent.width
        height: parent.height
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.topMargin: 40
        anchors.leftMargin: 40
        anchors.rightMargin: 40
        anchors.bottomMargin: 40
        color: "blue"
        Rectangle{
            id:r3
            width:50
            height: 50
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.topMargin: 90
            anchors.leftMargin: 50
        }

        Rectangle{
            id:r2
            width: parent.width
            height:parent.height/2
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            color: "green"
            Rectangle{
                id:r4
                width:150
                height: 50
                anchors.right: parent.right
               anchors.bottom: parent.bottom
                anchors.bottomMargin: 70
                anchors.rightMargin: 30
                color: "burlywood"
            }

        }

    }
}
