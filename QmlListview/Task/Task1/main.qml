import QtQuick 2.6
import QtQuick.Window 2.2
Window {
    property int myradius: 2
    id:main
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Image {
        id: imag
        source: "Car_image.jpeg"
        width: parent.width
        height: parent.height
    }
    Rectangle{
        id:newRect
        width:imag.width/12
        height:imag.width/17
        radius: myradius
        color: "green"
        Text{
            text:"NEW"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:saveRect
        width:imag.width/12
        height:imag.width/17
        radius: myradius
        x:60
        color: "green"
        Text{
            text:"SAVE"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:undoRect
        width:imag.width/12
        height:imag.width/17
        radius: myradius
        x:120
        color: "red"
        Text{
            text:"UNDO"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:eraseRect
        width:imag.width/12
        height:imag.width/17
        radius: myradius
        x:180
        color: "red"
        Text{
            text:"ERASE"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:sizeRect
        width:imag.width/12
        height:imag.width/17
        radius: myradius
        x:240
        color: "red"
        Text{
            text:"SIZE"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:vibrateRect
        width:imag.width/10
        height:imag.width/17
        radius: myradius
        x:300
        color: "red"
        Text{
            text:"VIBRATE"
            color: "white"
            anchors.centerIn: parent
        }
    }
    Rectangle{
        id:valRect
        width:imag.width/10
        height:imag.width/17
        radius: myradius
        x:370
        color: "red"
        Text{
            text:"VALUE"
            color: "white"
            anchors.centerIn: parent
        }
    }
}
