import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "gray"
    property int  rad: 50
    property int sz: 100
    property color col: "green"
    ColumnLayout{
        anchors.centerIn: parent
        Rectangle{id:r1;width:sz;height: sz;radius: rad;color: "black"}
        Rectangle{id:r2;width:sz;height: sz;radius: rad;color: "black"}
        state: "stop"
        states: [
            State{name:"go";
                PropertyChanges{target: r1;color:"green"}
                PropertyChanges{target: r2;color:"black"}
            },
            State{name:"stop";
                PropertyChanges{target: r1;color:"black"}
                PropertyChanges{target: r2;color:"red"}
            }
        ]
        Timer{
            id:t1
            interval:10000
            repeat: true;
            running: true;
            onTriggered: {
                if(parent.state=="stop") {
                    console.log("change to Go")
                    parent.state="go"
                    stop();
                    interval=5000;
                    start();
                }else{
                    console.log("change to stop")
                    parent.state="stop"
                    stop();
                    interval=10000;
                    start();
                }
            }
        }
    }
}
