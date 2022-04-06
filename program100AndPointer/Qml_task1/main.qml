import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Column{
        width:400
        height:80
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter


    Grid{
        width: parent.width
        height: parent.height
        spacing: 10


    Rectangle{
        width:100
        height:50
        color: "white";
        MouseArea{
            width:parent.width
            height:parent.width
            onClicked: {
              chat_text.color="red"
                console.log("chat button clicked")
            }
        }
        Image {
            id: chat
            source: "chat_1.png";
            width:25
            height: 25
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            id: chat_text
            text: qsTr("Chats")
            anchors.top:chat.bottom
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    Rectangle{
        width:100
        height:50
        color: "white";
        MouseArea{
            width:parent.width
            height:parent.width
            onClicked: {
              call_text.color="red"
                console.log("call button clicked")
            }
        }
        Image {
            id: call
            source: "call_1.png";
            width:25
            height: 25
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            id: call_text
            text: qsTr("Calls")
            anchors.top:call.bottom
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    Rectangle{
        width:100
        height:50
        color: "white";
        MouseArea{
            width:parent.width
            height:parent.width
            onClicked: {
              contact_text.color="red"
                console.log("contact button clicked")
            }
        }
        Image {
            id: contact
            source: "contact_1.png";
            width:25
            height: 25
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            id: contact_text
            text: qsTr("Contacts")
            anchors.top:contact.bottom
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    Rectangle{
        width:100
        height:50
        color: "white";
        MouseArea{
            width:parent.width
            height:parent.width
            onClicked: {
              notification_text.color="red"
                console.log("notification button clicked")
            }
        }
        Image {
            id: notification
            source: "notification_1.png";
            width:25
            height: 25
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            id: notification_text
            text: qsTr("Notification")
            anchors.top:notification.bottom
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    }
    }
}
