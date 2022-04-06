import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color:"black"
    Rectangle{
        width:parent.width;
        height: 80;
        color: "black";
        Image {
            id: img1
            source: "internet.jpg"
            width:50
            height:50
          }
        Text{
            text :"No Internet Connnection"
            color:"white";
        }
    }
}
