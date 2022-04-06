import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "blue"
    Text{
    id:t1
    text: "Display Logged in User"
    font.pixelSize: 25
    color: "white"
    anchors.horizontalCenter: parent.horizontalCenter
    }
    Text {
        id: t2
        text: qsTr("User")
        anchors.top:t1.bottom
        anchors.left: parent.left
        anchors.leftMargin: 90
        anchors.topMargin: 30

    }
    Rectangle{
    id:rec1
    width: 300
    height: 50
    anchors.top:t1.bottom
    anchors.topMargin: 30
    anchors.left: t2.right
    anchors.leftMargin: 80
    border.width: 1;border.color: "black"
    TextInput{
    width: parent.width
    height: parent.height
    }
    }
    Text {
        id: t3
        text: qsTr("Password")
        anchors.top:t2.bottom
        anchors.left: parent.left
        anchors.leftMargin: 90
        anchors.topMargin: 80

    }
    Rectangle{
    id:rec2
    width: 300
    height: 50
    anchors.top:t2.bottom
    anchors.topMargin: 80
    anchors.left: t2.right
    anchors.leftMargin: 80
    border.width: 1;border.color: "black"
    TextInput{
    width: parent.width
    height: parent.height
    }
    }

    Rectangle{
    id:rec4
    width: 100
    height: 50
    color: "green"
    anchors.top: t3.bottom
    anchors.topMargin: 80
    anchors.left: parent.left
    anchors.leftMargin: 190
    Text {
        id: t4
        text: qsTr("OK")
        color: "white"
        font.pixelSize: 20
        anchors.centerIn: parent
    }
    }
    Rectangle{
    id:rec5
    width: 100
    height: 50
    color: "green"
    anchors.top: t3.bottom
    anchors.topMargin: 80
    anchors.left: rec4.right
    anchors.leftMargin: 5
    Text {
        id: t5
        text: qsTr("Cancel")
        color: "white"
        font.pixelSize: 20
        anchors.centerIn: parent
    }
    }
    Rectangle{
    id:rec6
    width: 100
    height: 50
    color: "green"
    anchors.top: t3.bottom
    anchors.topMargin: 80
    anchors.left: rec5.right
    anchors.leftMargin: 5
    Text {
        id: t6
        text: qsTr("Clear")
        color: "white"
        font.pixelSize: 20
        anchors.centerIn: parent
    }
    }

}
