import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Column{
        id:col1
        anchors.centerIn: parent
        Rectangle{
            id:rec1
            width: 90
            height: 90
            border.width: 2
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 50
            border.color: "red"
            Column{
                spacing: 5
                anchors.centerIn: parent
                id:col2
                Row{
                    id:row1
                    spacing: 8
                    Rectangle{
                        id:rec2
                        width:18
                        height: 18
                        radius: 50
                        border.width: 2
                        border.color: "red"
                    }
                    Rectangle{
                        id:rec3
                        width:18
                        height: 18
                        radius: 50
                        border.width: 2
                        border.color: "red"
                    }
                }
                Rectangle{
                    id:rec4
                    width:10
                    height: 20
                    border.width: 2
                    anchors.horizontalCenter: parent.horizontalCenter
                    border.color: "red"
                }
                Rectangle{
                    id:rec5
                    width:40
                    height: 10
                    radius: 50
                    border.width: 2
                    anchors.horizontalCenter: parent.horizontalCenter
                    border.color: "red"
                }
            }
        }
        Rectangle{
            id:rec6
            width:15
            height: 25
            radius: 5
            border.width: 2
            border.color: "red"
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Row{
            spacing: 11
            Rectangle{
                id:rec7
                width:20
                height: 70
                rotation: 140
                radius: 5
                border.width: 2
                border.color: "red"
            }
            Rectangle{
                id:rec8
                width:20
                height: 70
                rotation: 43
                radius: 5
                border.width: 2
//                anchors.horizontalCenter: parent.horizontalCenter
                border.color: "red"
            }
            Rectangle{
                id:rec9
                width:90
                height: 70
                radius: 5
                border.width: 3
                border.color: "red"
            }
            Rectangle{
                id:rec10
                width:20
                height: 70
                radius: 5
                 rotation: 135
                 z:-1
                border.width: 2
//                anchors.horizontalCenter: parent.horizontalCenter
                border.color: "red"
            }
            Rectangle{
                id:rec11
                width:20
                height: 70
                 rotation: 44
                radius: 5
                z:-2
                border.width: 2
                border.color: "red"
            }
        }
        Row{
            spacing: 30
            anchors.horizontalCenter: parent.horizontalCenter
            Rectangle{
                id:rec12
                width:20
                height: 80
                rotation: 20
                radius: 5
                border.width: 2
                border.color: "red"
        }
            Rectangle{
                id:rec13
                width:20
                height: 80
                rotation: 160
                radius: 5
                border.width: 2
                border.color: "red"
        }
        }
    }
}
