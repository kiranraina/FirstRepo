import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 540
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "gray"
    Rectangle{
        id:rec1
        anchors.top: parent.top
        anchors.topMargin: 45
    width:350
    height: 200;
    color: "blue"
    anchors.horizontalCenter: parent.horizontalCenter
    Rectangle{
        id:rec2
        width:50
        height: 50;
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 60
        anchors.left: parent.left
        anchors.leftMargin: 60
    }
    }
    Rectangle{
        id:rec3
    width:350
    height: 200;
    color: "green"
    anchors.horizontalCenter: parent.horizontalCenter
    anchors.top: rec1.bottom
    Rectangle{
        id:rec4
        width:200
        height: 50;
        color: "orange"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 80
        anchors.right: parent.right
        anchors.rightMargin: 40
    }
    }
}
