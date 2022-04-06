import QtQuick 2.8
import QtQuick.Window 2.2


Window {
    width: 600
    height: 800
    visible: true
    title: qsTr("Hello World")

//    Rectangle{
//        height: parent.height/4
//        width: parent.width/4
//        color: "blue"
//        anchors.centerIn: parent
//    }
    Rectangle {
        id: circle
        width:500
        height: 500
        anchors.centerIn: parent
        radius: width/2
        gradient: Gradient {
            GradientStop { position: 1; color: "#4066B2" }
            GradientStop { position: 1; color: "#00A3DA" }

        }

        Rectangle {
            id: circle2
            width:parent.width
            height: parent.height
            radius: width/2
            color: "transparent"
            z:1
            Image {
                id: imagePhoto
                width: parent.width
                height: parent.height-40
                x:-173;y:20
                source: "qrc:/curveimage.png"
                fillMode:Image.PreserveAspectFit;
            }
            NumberAnimation on rotation { from: 1; to: 360; duration: 4000; loops: Animation.Infinite; }
        }
    }
}
