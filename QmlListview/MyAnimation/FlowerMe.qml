import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

Rectangle{
    id:p2
    width:100;
    height: 100;
    color:"yellow"
    anchors.centerIn: parent
    MouseArea{
        anchors.fill: parent
        onClicked: {
            p1.start()
        }
    }
    PropertyAnimation{
        id:p1;
        target: p2;
        properties: "width,height"
        from:0
        to:400;
        duration: 5000
        running: true;
        easing.type: Easing.InBounce
    }
}
}

