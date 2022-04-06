import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    id:main
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    x:200
    y:200
    Rectangle{
        id:rect
        color: "orange"
        height: main.x
        width:main.y
        radius: 70;border.color: "blue";border.width: 2;
        x:200
        y:200
        Text{
            id:t2
            text:"kirankumaragshgdfashgsaf"
            y:50
            elide: Text.ElideMiddle
            height: 20
        }
    }
    Rectangle{
        id:rect1
        color: "blue"
        height: 250
        width: 150
        radius: 40;border.color: "red";border.width: 2;
        x:0
        y:200
        Text{
            id:t3
            text:"hello world"
            y:50
            clip: true
        }
    }
    Image {
        id: img
        source: "rocket.png"
        width:200
        height: 200
    }
    Rectangle{
        id:rect2
        width: 200;height: 20;border.color: "blue";border.width: 2;
        x:200
        TextInput{
            id:ti3
             width: 200;height: 20;
            text:"Enter some Value"
        }
    }

}
