import QtQuick 2.5
import QtQuick.Window 2.0


Window {
    width: 440
    height: 480
    visible: true
    title: qsTr("Hello World")

    x:500;
    y:500
    property int myRadius: 5
   Rectangle
    {
        id:r1
        width: 140
        height:70
        x:00;
        y:250
        color:"yellow"
        radius: 5
        border.width: 2
        border.color: "blue"
        Text {

            text: "dheerendra@pthinks.com"
            //x:20;
            y:30
            clip: true
        }
    }
    Rectangle
    {
        id:abhi
        width: r1.width
        height:70
        x:180;
        y:250
        color:"red"
        Text {

            text: "save"
            //x:20;
            y:30
            clip: true
        }
    }
    Image {
        id: i1
        source: "Monkey.jfif"
    }
    Rectangle
    {
        id:_r3
        width: r1.width
        height:r1.height
        border.width: 2
        border.color: "blue"
    TextInput{
        text: "Enter some value"
        width: parent.width
        height:parent.height
        font.pixelSize: 20
    }
}
}
