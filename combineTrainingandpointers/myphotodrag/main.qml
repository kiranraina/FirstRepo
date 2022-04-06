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
        anchors.fill: parent
        width: 100
        height: 100
        source: "Test_TimestampInterval.png"
        }
        Connections{
        target: im1
        onXChanged:{
        console.log("X="+im1.x)
        }
        onYChanged:{
        console.log("Y="+im1.y)
        }
        }
        MouseArea{
        id:ms
        anchors.fill:parent
        drag.target: im1
        drag.minimumX: 0
        drag.minimumY: 0
        drag.maximumX: 640-im1.width
        drag.maximumY: 480-im1.width

        }

      }
    Component.onCompleted: {
            im1.anchors.centerIn=undefine;
            }
    }
