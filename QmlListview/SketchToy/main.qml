import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Controls 2.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "blue"
    NewButton{id:b1;txt:"new"}
    NewButton{id:b2;x:200;txt:"save"}
    Button{text:"hello"}
    Connections{
        target: b1
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b2
        onSendValue:{
            console.log("Data"+value);
        }
    }
}

