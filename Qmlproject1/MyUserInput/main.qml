import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 440
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle{
    width:200;height: 50;color: "gray"
    border.width: 2;border.color: "blue"
    TextInput{
    width:200;height: 50;
    horizontalAlignment: TextInput.AlignRight
    verticalAlignment: TextInput.AlignVCenter
    font.pixelSize: 20
    font.bold: true
    }
    }
}
