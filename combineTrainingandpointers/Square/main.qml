import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 940
    height: 680
    color: "black"
    title: qsTr("Hello World")
    property int count: 0
    Rectangle{id:r1;width:200;height: 200;color: "yellow";visible: false}
    Rectangle{id:r2;width:200;height: 200;color: "red";visible: false}
    Rectangle{id:r3;width:200;height: 200;color: "blue";visible: false}
    Rectangle{id:r4;width:200;height: 200;color: "orange";visible: false}
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("mouse clicked")
            console.log("X"+mouse.x)
            console.log("Y"+mouse.y)
            if(count==0){
            r1.visible=true
            r1.x=mouse.x
            r1.y=mouse.y
            }
            if(count==1){
            r2.visible=true
            r2.x=mouse.x
            r2.y=mouse.y
            }
            if(count==2){
            r3.visible=true
            r3.x=mouse.x
            r3.y=mouse.y
            }
            if(count==3){
            r4.visible=true
            r4.x=mouse.x
            r4.y=mouse.y
            }
            count++
        }
    }
}
