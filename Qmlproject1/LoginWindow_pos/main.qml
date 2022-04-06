import QtQuick 2.0
import QtQuick.Window 2.0
Window {
    id:_root
    width: 440
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "gray"
    Column{
        id:_itemRoot
        spacing: 5
        anchors.fill: parent
        Text {
            id: _header
            text: qsTr("Display Logged in User")
            width: parent.width
            color: "white"
            font.pixelSize: 25
            horizontalAlignment: Text.AlignHCenter
        }
        Row {
            id:row1;width:300;height: 100
            spacing: 25
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: tuser;
                text: "User"
            }
            Rectangle{
                id:r1ok
                width: 200;height: 50
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tiuser
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row2;width:300;height: 100
            spacing: 4
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: tpass;
                text: "Password"
            }
            Rectangle{
                id:r2
                width: 200;height: 50
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tipass
                    anchors.fill: parent
                    echoMode: TextInput.Password
                }
            }
        }

        Row {
            id:row3;width:300;height: 100
            spacing: 5
            anchors.horizontalCenter: parent.horizontalCenter

            function okButton()
            {
                console.log("ok Button clicked")
                console.log("ok Button is clicked user="+_tiuser.text)
                console.log("ok Button is clicked password="+_tipass.text)
            }
            function cancelButton()
            {

            }
            function clearButton()
            {
                console.log("clear Button clicked")
                _tiuser.clear();
                _tipass.clear();

            }
            Connections{
                target: _ok
                onSendValues:row3.okButton();
            }
            Connections{
                target: _cancel
                onSendValues:row3.cancelButton();
            }
            Connections{
                target: _clear
                onSendValues:row3.clearButton();
            }
            MyButton{
                id:_ok
                value:"OK"
            }
            MyButton{
                id:_cancel
                value:"Cancel"
            }
            MyButton{
                id:_clear
                value:"Clear"
            }
        }
    }
}
