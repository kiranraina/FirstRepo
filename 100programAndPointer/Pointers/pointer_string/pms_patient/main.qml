import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "skyblue"
    title: qsTr("Hello World")
    Column{
        id:_itemRoot
        spacing: 15
        anchors.fill: parent
        Text {
            id: _header
            text: qsTr("Display Logged in Patient")
            width: parent.width
            color: "white"
            font.pixelSize: 25
            horizontalAlignment: Text.AlignHCenter
        }
        Row {
            id:row1;
            spacing: 25
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _name;
                text: "Patient Name"
            }
            Rectangle{
                id:r1ok
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tiname
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row2
            spacing: 85
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _age;
                text: "Age"
            }
            Rectangle{
                id:r2
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tiage
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row3
            spacing: 60
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _address;
                text: "Address"
            }
            Rectangle{
                id:r3
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tiaddres
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row4
            spacing: 60
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _mobile;
                text: "Mobile"
            }
            Rectangle{
                id:r4
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_timobile
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row5
            spacing: 60
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _gender;
                text: "Gender"
            }
            Rectangle{
                id:r5
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tigender
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row6
            spacing: 75
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _dob;
                text: "DOB"
            }
            Rectangle{
                id:r6
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:_tidob
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row7
            spacing: 5
            anchors.horizontalCenter: parent.horizontalCenter

            function okButton()
            {
                console.log("ok Button clicked")
                console.log("ok Button is clicked name="+_tiname.text)
                console.log("ok Button is clicked age="+_tiage.text)
                console.log("ok Button is clicked address="+_tiaddres.text)
                console.log("ok Button is clicked mobile="+_timobile.text)
                console.log("ok Button is clicked gender="+_tigender.text)
                console.log("ok Button is clicked dob="+_tidob.text)
            }
            function clearButton()
            {
                console.log("clear Button clicked")
                _tiname.clear();
                _tiage.clear();
                _tiaddres.clear();
                _timobile.clear();
                _tigender.clear();
                 _tidob.clear();

            }
            Connections{
                target: _ok
                onSendValues:row7.okButton();
            }
            Connections{
                target: _clear
                onSendValues:row7.clearButton();
            }
            MyButton{
                id:_ok
                value:"OK"
            }
            MyButton{
                id:_clear
                value:"Clear"
            }
        }
    }
}
