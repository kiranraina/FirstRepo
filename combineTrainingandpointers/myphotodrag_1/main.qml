import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Item{
        anchors.fill:parent
        Image{
            id:im1
            source: "Test_TimestampInterval.png"
            width:100
            height: 100
//            anchors.centerIn: parent
        }
        focus: true
        Keys.onPressed:{
            console.log("key has been pressed")
            if(event.key===Qt.Key_Left){
                im1.rotation -=45
            }
            if(event.key===Qt.Key_Right){
                im1.rotation +=45

            }
            if(event.key===Qt.Key_Up){
                im1.y -=10
            }
            if(event.key===Qt.Key_Down){
                im1.y +=10
            }

        }

    Keys.onReleased: {
        console.log("key has been Releaseed")
    }
}
    Component.onCompleted: {
     im1.anchors.centerIn=undefined
    }

}
