import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property string col: "lightyellow"
    property string col1: "gray"
    property string col2: "blue"
    Text {
        id: t1
        text: qsTr("Service Menu")
        font.pixelSize: 25
        anchors.horizontalCenter: parent.horizontalCenter
    }
    Column{
        anchors.left: parent.left
        anchors.leftMargin: 50
        anchors.top: parent.top
        anchors.topMargin: 50

    Row{
        id:rw1
        spacing: 20
        Rect2{
            id:r1
            color: col
            Text {
                id: t2
                text: qsTr("Select Astra Mode")
                color: col2
                anchors.centerIn:parent
            }
        }
        Rect2{
           id:r2
           color: col1
        }
    }
    Row{
        id:rw2
        spacing: 20
        anchors.top: rw1.bottom
        anchors.topMargin: 10
        Rect2{
            id:r3
            color: col
            Text {
                id: t4
                text: qsTr("Download Service Log")
                color: col
                anchors.centerIn:parent
            }
        }
        Rect{
           id:r4
           color: col1
        }
    }
    Row{
        id:rw3
        spacing: 20
        anchors.top: rw2.bottom
        anchors.topMargin: 10
        Rect{
            id:r5
            color: col
            Text {
                id: t6
                text: qsTr("Enable/Disable HLD")
                color: col
                anchors.centerIn:parent
            }
        }
        Rect{
           id:r6
           color: col1
        }
    }
    Row{
        id:rw4
        spacing: 20
        anchors.top: rw3.bottom
        anchors.topMargin: 10
        Rect{
            id:r7
            color: col
            Text {
                id: t8
                text: qsTr("Upgrade Firmware")
                color: col
                anchors.centerIn:parent
            }

        }
        Rect{
           id:r8
           color: col1
        }
    }
    Row{
        id:rw5
        spacing: 20
        anchors.top: rw4.bottom
        anchors.topMargin: 10
        Rect2{
            id:r9
            color: col
            Text {
                id: t10
                text: qsTr("Bypass WILD Cycle")
                color: col
                anchors.centerIn:parent
            }
        }
        Rect{
           id:r10
           color: col1
        }
    }
    Row{
        id:rw6
        spacing: 20
        anchors.top: rw5.bottom
        anchors.topMargin: 10
        Rect2{
            id:r11
            color: col
            Text {
                id: t12
                text: qsTr("Excerise Mode")
                color: col
                anchors.centerIn:parent
            }
        }
        Rect{
           id:r12
           color: col1
        }
    }
    Row{
        id:rw7
        spacing: 20
        anchors.top: rw6.bottom
        anchors.topMargin: 10
        Rect2{
            id:r13
        }
        Rect{
           id:r14
           color: col1
        }
    }
    Row{
        id:rw8
        spacing: 20
        anchors.top: rw7.bottom
        anchors.topMargin: 10
        Rect{
            id:r15
        }
        Rect{
           id:r16
           color: col1
        }
    }

    }


}

