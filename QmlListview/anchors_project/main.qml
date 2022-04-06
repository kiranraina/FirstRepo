import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 440
    height: 480
    title: qsTr("Hello World")
    color: "silver"
    Rectangle{
        width:parent.width
        height: parent.height/2
        color: "skyblue";
        anchors.top: parent.top
        anchors.topMargin: 20
        anchors.left: parent.left
        anchors.leftMargin: 20
        anchors.right: parent.right
        anchors.rightMargin: 20
        Rectangle{
            width: parent.width/8
            height: parent.height/4
            color: "silver"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 80
            anchors.left: parent.left
            anchors.leftMargin: 60
        }
    }
    Rectangle{
        width:parent.width
        height: parent.height/2
        color: "green"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        anchors.left: parent.left
        anchors.leftMargin: 20
        anchors.right: parent.right
        anchors.rightMargin: 20
        Rectangle{
            width: parent.width/2.5
            height: parent.height/4
            color: "orange"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 100
            anchors.right: parent.right
            anchors.rightMargin: 30
        }
    }
}
