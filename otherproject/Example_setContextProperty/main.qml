import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MouseArea {
        anchors.fill: parent

        onClicked: {
            console.log("ScreenProperties.width = "+screen.myWidth)
             console.log("getwidth"+screen.display())
//            screen.width()
            console.error("ScreenProperties.height = "+screen.myHeight)
        }
    }
}
