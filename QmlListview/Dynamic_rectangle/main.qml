import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property int count: 0
    Text{
    text:"hello world"
    }
    Rectangle{
        id:rect1
        width: 100;
        height: 100;
        color: "red"
        visible: false
    }
    Rectangle{
        id:rect2
        width: 100;
        height: 100;
        color: "blue"
        visible: false
    }
    Rectangle{
        id:rect3
        width: 100;
        height: 100;
        color: "green"
        visible: false
    }
    Rectangle{
        id:rect4
        width: 100;
        height: 100;
        color: "orange"
        visible: false
    }
    MouseArea{
        anchors.fill: parent
    onClicked: {
        console.log("inside mouse area");
       count++;
        if(count==1){
        rect1.x=mouse.x;
        rect1.y=mouse.y
        rect1.visible=true;
        }
        if(count==2){
        rect2.x=mouse.x;
        rect2.y=mouse.y
        rect2.visible=true;
        }
        if(count==3){
        rect3.x=mouse.x;
        rect3.y=mouse.y
        rect3.visible=true;
        }
        if(count==4){
        rect4.x=mouse.x;
        rect4.y=mouse.y
        rect4.visible=true;
        }
    }
    }
}
