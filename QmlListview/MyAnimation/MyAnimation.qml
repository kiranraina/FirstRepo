import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        id:r1
        width:100;
        height: 100;
        color:"green"
        x:100
        y:100
    }
    Rectangle{
        id:r2
        width:100;
        height: 100;
        color:"yellow"
        radius: 50;
    }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            r1.x=500;
        }
    }
    SequentialAnimation{
           running: true;
    PropertyAnimation{
          targets: [r1,r2];
        property: "x"
        from:500
        to:200;
        duration: 5000

    }
    PauseAnimation{
    duration: 5000;
    }
    PropertyAnimation{
        targets: [r1,r2];
        property: "y"
        from:500
        to:200;
        duration: 5000
    }
    }
}
