import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    color: "gray"
    title: qsTr("Hello World")
    Item {
        id:it1
        anchors.fill: parent
        state:"stop_light"
        Column{
            anchors.centerIn: parent
            Rectangle{id:go;width:100;height:100;color:"yellow";radius: 50}
            Rectangle{id:ready;width:100;height:100;color:"yellow";radius: 50}
            Rectangle{id:stop;width:100;height:100;color:"yellow";radius: 50}
        }
        states:[
            State{
                name:"stop_light"
                PropertyChanges {target: go;color:"black"}
                PropertyChanges {target: ready;color:"black"}
                PropertyChanges {target: stop;color:"red"}
            },
            State{
                name:"ready_light"
                PropertyChanges {target: go;color:"black"}
                PropertyChanges {target: ready;color:"orange"}
                PropertyChanges {target: stop;color:"black"}
            },
            State{
                name:"go_light"
                PropertyChanges {target: go;color:"green"}
                PropertyChanges {target: ready;color:"black"}
                PropertyChanges {target: stop;color:"black"}
            }
        ]//list of states
    }

    //    MouseArea{
    //    anchors.fill: parent
    //    onClicked: {
    //    if(it1.state=="stop_light"){
    //       it1.state="go_light"
    //    }
    //    else
    //    {
    //        it1.state="stop_light"
    //    }

    //    }
    //    }
//    Timer{
//        id:t1
//        interval: 5000;running: true;repeat:true
//        onTriggered: {
//            console.log("1-Timer Expired")
//            t1.stop();
//            it1.state="stop_light"
//            t2.start();

//        }
//    }
//    Timer{
//        id:t2
//        interval: 5000;running: false;repeat:true
//        onTriggered: {
//            console.log("2-Timer Expired")
//            t2.stop();
//            it1.state="ready_light"
//            t3.start()
//        }
//    }
//    Timer{
//        id:t3
//        interval: 5000;running: false;repeat:true
//        onTriggered: {
//            console.log("3-Timer Expired")
//            t3.stop();
//            it1.state="go_light"
//            t1.start();
//        }
//    }
    Timer{
    id:t4
    interval:5000;running:true;repeat:true
    onTriggered: {
        console.log("before enter if")
        if(it1.state=="stop_light"){
             console.log(" enter 1if")
            it1.state="ready_light"
//            t4.start();
        }
        else if(it1.state=="ready_light"){
            it1.state="go_light"
//            t4.start();
        }
        else if(it1.state=="go_light"){
            it1.state="stop_light"
//            t4.start();
        }
    }
    }
}
