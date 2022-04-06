import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    function b1clicked(){
        console.log("Button clicked");
    }
    Row{
        spacing: 4
        anchors.fill:parent
        B_Labels{
            text:"New"
            font.pixelSize: 20
            onClicked:{
                console.log("new clicked called");
                b1clicked();
            }
            width: parent.width/3
        }
        B_Labels{
            text:"Save"
            font.pixelSize: 20
            onClicked:{
                console.log("save clicked called");b1clicked();
            }
            width: parent.width/3
        }
        B_Labels{
            text:"Edit"
            font.pixelSize: 20
            onClicked: {
                console.log("Edit clicked called");
                b1clicked();
            }

            width: parent.width/3
        }
    }
}
