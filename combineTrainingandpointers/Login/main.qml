import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: _width
    height: _height
    color: _color
    title: qsTr("Hello World")
//    property int w: 100
//    property int h: 100
//    property color col: "green"
//    property color col1: "white"
    Column{
        anchors.fill: parent
        spacing: 10
        Text{id:userLog;text:dataFromcpp;color: "white";font.pixelSize: 30}
        Row{
            spacing: 50
            Text{text:"User";color: "white"}
            BelInput{id:userInput;value:""}
        }
        Row{
            spacing: 20
            Text{text:"Password";color: "white"}
            BelInput{id:passInput;value:""}
        }
        Row{
        spacing: 10
        BelButton{ id:b1;value:"OK"}
        BelButton{ id:b2;value:"Cancel"}
        BelButton{ id:b3;value:"Clear"}
        }
        Connections{
        target: b1
        onSendValue:{
        console.log("User ="+userInput.value)
        console.log("Password ="+passInput.value)
        }
        }
        Connections{
        target: b2
        onSendValue:{

        }
        }
        Connections{
        target: b3
        onSendValue:{
           userInput.clearValues();
           passInput.clearValues();
        }
        }
    }

}
