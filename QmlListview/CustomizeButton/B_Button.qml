import QtQuick 2.0
import QtQuick.Controls 2.0
Button {
    id:b1
    width:500;
    background: Rectangle{
      //width:b1.width;height: b1.height
        implicitHeight: 50;
        implicitWidth: 200;
        color: "blue";
    }
    contentItem: Text{
        text:b1.text
        color: "white"
        font.pixelSize: 20
    }
}
