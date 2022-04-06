import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    objectName: "kiran";
    color: "blue"
    Rectangle{
        width: 100;height: 100;
        color: "pink";
        objectName: "kumar";
        Item {
            Component{
                Text{
                    text:"hello"
                }
            }
            id: item1
            Text{
                id:t1
                text:"hello"
                objectName: "pinktext"
            }
        }
        Row{
            id:row1
            height:800
            width:600
            Rectangle{
                width: 100;height: 100;
                color: "yellow";
                objectName: "john";}
            Rectangle{
                width: 100;height: 100;
                color: "green";
                objectName: "dharsan";}
            Rectangle{
                width: 100;height: 100;
                color: "red";
                objectName: "vino";}
        }
    }
    Column{
        Rectangle{
            width: 100;height: 100;
            color: "pink";
            objectName: "sri";
        }
        Rectangle{
            width: 100;height: 100;
            color: "pink";
            objectName: "king";
        }

    }
    Button{
        id:btn1
        objectName: "btn";
        width:200
        height:300
    }
    Grid{
        id:grid1

    }
    Image {
        id: img
        source: "file"
    }
    Rectangle {
        width: 100; height: 100; color: "green"
        RotationAnimation on rotation {
            loops: Animation.Infinite
            from: 0
            to: 360
        }
    }

}
