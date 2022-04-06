import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "green"
    property var comp;
    Item{
        id:c1
        Grid{
            spacing: 2
            id:g1
            anchors.fill:parent
        }
        Button{
            id:b1
            text:"AddMe"
            anchors.top:g1.bottom
            onClicked: {
                c1.loadMonitor();
            }
        }
        function loadMonitor(){
            console.log("Monitor loaded")
            var obj = comp.createObject(g1);
        }
        Component.onCompleted: {
            comp =Qt.createComponent("Monitor.qml");
            //            c1.loadMonitor();
        }
    }
}
//function loadMonitor(){
//    console.log("Monitor loaded")
//    var comp =Qt.createComponent("Monitor.qml");
//    var obj = comp.createObject(c1);
//}
