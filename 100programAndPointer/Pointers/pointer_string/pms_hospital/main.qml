import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "orange"
    title: qsTr("Hello World")
    Column{
        id:_itemRoot
        spacing: 15
        anchors.centerIn: parent
        Text {
            id: _header
            text: qsTr("Display Hospital Details")
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
                id: h_name;
                text: "Hospital Name"
            }
            Rectangle{
                id:r1ok
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_h_name
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row2
            spacing: 55
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: h_phone;
                text: "Phone No"
            }
            Rectangle{
                id:r2
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_h_phone
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row3
            spacing: 60
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: h_address;
                text: "Address"
            }
            Rectangle{
                id:r3
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_h_addres
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row4
            spacing: 70
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _wards;
                text: "Wards"
            }
            Rectangle{
                id:r4
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_wards
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row5
            spacing: 60
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _patient;
                text: "Patients"
            }
            Rectangle{
                id:r5
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_patients
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row6
            spacing: 75
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                id: _doctor;
                text: "Doctor"
            }
            Rectangle{
                id:r6
                width: 200;height: 30
                color: "white"
                border.color: "red"
                TextInput{
                    id:ti_doctor
                    anchors.fill: parent
                }
            }
        }
        Row {
            id:row7
            spacing: 10
            anchors.horizontalCenter: parent.horizontalCenter

            function okButton()
            {
                console.log("ok Button clicked")
                console.log("ok Button is clicked name="+ti_h_name.text)
                console.log("ok Button is clicked age="+ti_h_phone.text)
                console.log("ok Button is clicked address="+ti_h_addres.text)
                console.log("ok Button is clicked mobile="+ti_wards.text)
                console.log("ok Button is clicked gender="+ti_patients.text)
                console.log("ok Button is clicked dob="+ti_doctor.text)
            }
            function clearButton()
            {
                console.log("clear Button clicked")
                ti_h_name.clear();
                ti_h_phone.clear();
                ti_h_addres.clear();
                ti_wards.clear();
                ti_patients.clear();
                ti_doctor.clear();

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
