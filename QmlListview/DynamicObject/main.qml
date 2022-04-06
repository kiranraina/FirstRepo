import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property Component comp;
        function createMe(){
            console.log("create")
            comp=Qt.createComponent("MyMonitor.qml")
            if(comp.status===Component.Ready){
                console.log("file raedy")
            }
        }
    Component.onCompleted: {
        console.log("list")
        createMe();
    }
    Grid{
        id:g1
        spacing:10
        width: parent.width
        height: parent.height-50
        anchors.bottom: r1.top
    }
    RowLayout{
        id:r1
        anchors.bottom: parent.bottom
        Button{text:"loadMe"
            onClicked: {
                console.log("coming here")
                var obj=comp.createObject(g1);
            }
        }

        Button{text:"helpme"
            onClicked: {
                console.log("coming here")
            }
        }
    }
}

