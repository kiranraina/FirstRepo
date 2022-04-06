import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 420
    height: 480
    title: qsTr("Hello World")
    property int w: 100
    property int h: 100
    property color col: "gray"
    function calculate(value){
       console.log("calculate -value"+value)
        ti.text+=value;
    }

    Column{
        Rectangle{
        width:parent.width
        height: 50
        color: "blue"
            TextInput{
            id:ti
            text: "Enter values"
            anchors.fill: parent
            }
        }
    Grid{
        id:g1
        rows: 5
        columns: 4
        spacing: 3
        BelButton{
            id:b1
            value: "1"
//            onSendValue: {
//            console.log("Value="+val)
//            calculate(val);
//            }

        }
        BelButton{
            id:b2
            value: "2"
//            onSendValue: {
//            console.log("Value="+val)
//            calculate(val);
//            }
        }
        BelButton{
            id:b3
            value: "3"
//            onSendValue: {
//            console.log("Value="+val)
//            calculate(val);
//            }
        }
        BelButton{
            id:b4
            value: "4"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b5
            value: "5"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b6
            value: "6"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b7
            value: "7"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b8
            value: "8"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b9
            value: "9"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b10
            value: "0"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }

        }
        BelButton{
            id:b11
            value: "+"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b12
            value: "-"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b13
            value: "="
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);

//            }
        }
        BelButton{
            id:b14
            value: "/"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b15
            value: "*"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }
        BelButton{
            id:b16
            value: "C"
//            onSendValue: {
//            console.log("Value="+val)
//                calculate(val);
//            }
        }

    }
    function connectAllChilds(){
    var childcount = g1.children.length;
        console.log("number of childs"+childcount);
        //fetch object
        for(var i=0; i<childcount;i++){
        var bObj =g1.children[i];
         bObj.sendValue.connect(calculate)
        }
    }
    Component.onCompleted: {
        connectAllChilds();
//    b1.sendValue.connect(calculate)
//    b2.sendValue.connect(calculate)
//    b3.sendValue.connect(calculate)
//    b4.sendValue.connect(calculate)
//    b5.sendValue.connect(calculate)
//    b6.sendValue.connect(calculate)
//    b7.sendValue.connect(calculate)
//    b8.sendValue.connect(calculate)
//    b9.sendValue.connect(calculate)
//    b10.sendValue.connect(calculate)
//    b11.sendValue.connect(calculate)
//    b12.sendValue.connect(calculate)
//    b13.sendValue.connect(calculate)
//    b14.sendValue.connect(calculate)
//    b15.sendValue.connect(calculate)
//    b16.sendValue.connect(calculate)

    }
    }
}

