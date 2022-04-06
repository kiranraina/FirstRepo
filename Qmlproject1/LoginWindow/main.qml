import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id:_root
    width: 440
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "gray"
    Item{
    id:_itemRoot
    anchors.fill: parent
    Text {
        id: _header
        text: qsTr("Display Logged in User")
        width: parent.width
        horizontalAlignment: Text.AlignHCenter
    }
    Item {
        id:row1;width:parent.width;height: 100
        anchors.top: _header.bottom
        anchors.topMargin: 50
        Text {
            id: tuser;
            text: "User"
        }
        Rectangle{
            id:r1ok
            width: 200;height: 50
            color: "white"
            border.color: "red"
            anchors.left: tuser.right
            anchors.leftMargin: 150
            TextInput{
//            width: parent.width
//            height: parent.height
                 anchors.fill: parent
            }
        }
    }
    Item {
        id:row2;width:parent.width;height: 100
        anchors.top: row1.bottom
        anchors.topMargin: 20
        Text {
            id: tpass;
            text: "Password"
        }
        Rectangle{
            id:r2
            width: 200;height: 50
            color: "white"
            border.color: "red"
            anchors.left: tpass.right
            anchors.leftMargin: 120
            TextInput{
//            width: parent.width
//            height: parent.height
                anchors.fill: parent
            }
        }
    }

    Item {
        id:row3;width:300;height: 100
        anchors.top:row2.bottom
        anchors.topMargin: 30
        anchors.horizontalCenter: parent.horizontalCenter
        Rectangle{ id:r1Ok;width:100;height: 50;color: 'green'

        Text{
          id:_ok
          text:"OK"
//          anchors.horizontalCenter: parent.horizontalCenter
//          anchors.verticalCenter:parent.verticalCenter
          anchors.centerIn: parent
        }
        }
        Rectangle{id:r2Cancel;width:100;height: 50;color: 'green'
            anchors.left: r1Ok.right
            anchors.leftMargin: 10
        Text{
          id:_cancel
          text:"Cancel"
//          anchors.horizontalCenter: parent.horizontalCenter
//          anchors.verticalCenter:parent.verticalCenter
          anchors.centerIn: parent
        }
        }
        Rectangle{
            id:r3Clear;width:100;height: 50;color: 'green'
            anchors.left: r2Cancel.right
            anchors.leftMargin: 10
        Text{
          id:_clear
          text:"Clear"
//          anchors.horizontalCenter: parent.horizontalCenter
//          anchors.verticalCenter:parent.verticalCenter
          anchors.centerIn: parent
        }
        }
    }
    }
}
