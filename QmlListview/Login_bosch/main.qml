import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.1

Window {
    id:root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "skyblue"

    function printMe()
    {
        console.log("In print me function")
        var myvalue=10;
        return myvalue;
    }
    Column{
        anchors.horizontalCenter: parent.horizontalCenter
        spacing:20
        Text {
            id: txt_title
            text: qsTr("Display Logged inUser")
            color: "white";font.pixelSize: 20
        }
        Row{
            spacing: 65
            Text{
                text:"User"
            }
            Rectangle{
                height:root.height/11
                width: root.width/4
                border.width: 2
                TextInput{
                    text:"name"
                }
            }
        }
        Row{
            spacing: 30
            Text{
                text:"Password"
            }
            Rectangle{
                height:root.height/11
                width: root.width/4
                border.width: 2
                TextInput{
                    text:"name"
                    echoMode: TextInput.Password
                }
            }
        }
        Row{
            spacing: 5
            NewButtons{id:b1;txt:"OK"}
            NewButtons{id:b2;txt:"Cancel"}
            NewButtons{id:b3;txt:"Clear"}
        }
    }
    function handleClick()
    {
        console.log("fun clicked");
    }
    function handlePress()
    {
        console.log("fun clicked");
    }
    Component.onCompleted:
    {
        console.log("welcome to first script")
        var retVal=printMe();
        console.log("ret value="+retVal)
    }
    Connections
    {
        target: b1
        onSendValue:
        {
            console.log("Data"+value);
        }
    }
    Connections
    {
        target: b2
        onSendValue:
        {
            console.log("Data"+value);
        }
    }
    Connections
    {
        target: b3
        onSendValue:
        {
            console.log("Data"+value);
        }
    }
}
