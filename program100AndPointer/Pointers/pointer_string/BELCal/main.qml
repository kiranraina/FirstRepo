import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    function calculate(){
    console.log("slot")
    }
    Text{
    id:t1
    text:"start here"
    }
    Grid{
        id:g1
        columns: 2
        anchors.top: t1.bottom
        spacing: 2

        MyButton{
            id:b1
            value:"1"
            onSendValues: {
            console.log("value="+val);
            t1.text+=val;
                calculate();
            }
        }
        MyButton{
            id:b2
            value:"2"
            onSendValues: {
            console.log("value="+val);
            t1.text+=val;
                calculate();
            }
        }
        MyButton{
            id:b3
            value:"3"
            onSendValues: {
            console.log("value="+val);
            t1.text+=val;
                calculate();
            }

        }
        MyButton{
            id:b4
            value:"4"
            onSendValues: {
            console.log("value="+val);
            t1.text+=val;
                calculate();
            }
        }
    }
    Connections{
        target: b4
        onSendValues: {
        console.log("value"+val);
        }
    }
    Connections{
        target: b3
        onSendValues: {
        console.log("value"+val);
        }
    }
    Connections{
        target: b2
        onSendValues: {
        console.log("value"+val);
        }
    }
    Connections{
        target: b1
        onSendValues: {
        console.log("value"+val);
        }
    }
    function callMe(val){
    console.log("->>>>>>>>>>>Value"+val);
    }
    function connectAll(){
    b1.sendValues.connect(callMe);
    b2.sendValues.connect(callMe);
    b3.sendValues.connect(callMe);
    b4.sendValues.connect(callMe);
    }
    Component.onCompleted: {
    console.log("started here")
        connectAll();
    }
}
