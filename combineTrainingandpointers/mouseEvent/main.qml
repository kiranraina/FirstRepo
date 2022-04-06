import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        width: 200
        height: 200
        anchors.centerIn: parent
        color: "yellow"
        MouseArea{
            id:ms
            anchors.fill:parent
            hoverEnabled: true
            acceptedButtons: Qt.LeftButton |Qt.RightButton
            //            onClicked{
            //            console.log("onclicked")
            //            }
                        onPressed: {
                        console.log("onpressed")
                        }
                        onReleased:{
                        console.log("onrelessed")}
                        onEntered:{
                        console.log("onenetered")
                        }
                        onExited:{
                        console.log("onexited")
                        }
                        onPositionChanged: {
                            console.log("x="+mouse.x+"y="+mouse.y)
                        }
        }
//        Connections{
//            target: ms
////            onClicked{
////            console.log("onclicked")
////            }
//            onPressed{
//            console.log("onpressed")
//            }
//            onReleased{
//            console.log("onrelessed")}
//            onEntered{
//            console.log("onenetered")
//            }
//            onExited{
//            console.log("onexited")
//            }



//        }
    }
}
