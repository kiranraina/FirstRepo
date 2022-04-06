import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
    id:r1
    width:100
    height: 100
    color: "yellow"
    }
    Rectangle{
    id:r2
    width:100
    height: 100
    color: "red"
    anchors.top:r1.bottom
    anchors.left: r1.right
    }
    Rectangle{
    id:r3
    width:100
    height: 100
    color: "blue"
    anchors.top:r2.bottom
    anchors.left: r2.right
    }
}
