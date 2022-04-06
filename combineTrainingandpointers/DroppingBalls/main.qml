import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 620
    height: 480
    title: qsTr("Hello World")
    color: "black"
    Item{
    anchors.fill: parent
    Rectangle{id:r1;width: 100;height: 100;color: "yellow";radius:50;x:50;visible: false}
    Rectangle{id:r2;width: 100;height: 100;color: "red";radius:50;x:250;visible: false}
    Rectangle{id:r3;width: 100;height: 100;color: "yellow";radius:0;x:150;y:120}

    MouseArea{
    anchors.fill: parent
    onClicked: {
//        r1.y=200;
//        r2.y=200;
        an1.start();
    console.log("mouse Clicked")
    }
    }
    SequentialAnimation{
        running: true
    PropertyAnimation{
        id:an1
        target: r3
        property: "scale"
        from:0
        to:2.5
        duration: 5000
//        running: true
//        onFinished: {
//        an2.start()
//        }
//        easing.type: Easing.InElastic
    }

    PauseAnimation {
        duration: 2000
    }
    ScriptAction{
    script:callme();
    }
    PropertyAction{
    targets: r3
    property: "color"
    value:"red"
    }
    PropertyAnimation{
        id:an2
        target: r3
        property: "rotation"
        from:0
        to:360
        duration: 5000
//        running: true
//       onFinished: {
//        an2.start()
//        }
//        easing.type: Easing.InOutBounce
    }
    }

//    PropertyAnimation{
//        id:an2
//        target: r2
//        property: "y"
//        to:200
//        duration: 5000
//        running: false
//        onFinished: {
//        an3.start()
//        }
//    }
//    PropertyAnimation{
//        id:an3
//        target: r3
//        property: "y"
//        to:200
//        duration: 5000
//        running: false
//    }
    function callme(){
    console.log("hello script")
    }
    }
}
