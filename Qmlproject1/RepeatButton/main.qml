import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property var buttonNames: ["Monitor","Edit","Help","Debug","Design","Project"]
    //6 Rectangle
    Column{
        anchors.fill: parent
        spacing: 10
    Repeater{
        id:_rp;
    model:6
     Button{id:btn;text:buttonNames[index]}
    }
    }
    function callme(){
    console.log("Button Clicked");
    }
    function connectAll(){
        for(var i=0;i<_rp.count;i++){
         var obj =_rp.itemAt(i);
            console.log("Button="+obj.text)
            //id.singal.coonect(slot)
            obj.clicked.connect(callme);
        }
    }
    //how do we access all the button now?
//    MouseArea{
//    anchors.fill: parent
//    onClicked: {
//        console.log("mouse click is");

//    }
//    }
    Component.onCompleted:{
    connectAll();
    }
}
//Rectangle{
//  width: 100;height: 30;color: "blue"
//  Text{text:index;color: "white";anchors.centerIn: parent}
//  }

