import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id:_root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle{
    id:r1
    width:150;height:100;color: "red";
    z:10
    visible: true
    Text{
    text:"BEL"
    x:40;y:40;
    }

    }
    Rectangle{
    id:r2
    width:r1.width;height: r1.height;color: "green"
    x:200
    visible: true
    }
}
