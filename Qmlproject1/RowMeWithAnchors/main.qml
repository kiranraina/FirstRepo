
import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle{
        id:r1
    width:100;height:100;color: "red";
   }
    Rectangle{
        id:r2
        anchors.left: r1.right;
        anchors.right: parent.right;
    width:100;height: 100;color: "green"
    }
}
