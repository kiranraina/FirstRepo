import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Row{
        id :rowId
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.top:parent.top;
        anchors.topMargin: 50
        //  spacing: 30
        Rectangle{
            id:r1
            height:30
            width: 220
            border.width:1;border.color: "gray"
            Row{
                id :rowId2
                spacing: 5
                anchors.centerIn: parent
                Image{
                    source: "search.png"
                    height: 20
                    width:20

                }
                TextInput{
                    text:"People,groups & messages"
                    opacity: 0.5;
                    verticalAlignment: Text.AlignVCenter

                }
            }
        }
        Rectangle{
            id:r2
            height:30
            width: 50
            border.color: "gray"
            MouseArea{
                anchors.fill: parent
                onClicked: popup.open()
            }
            Image{
                source: "dial.png"
                height: 20
                width:20
                anchors.centerIn: parent

            }
        }
        Popup {
            id: popup
            x: 30
            y: 10
            width: 300
            height: 400
            modal: true
            focus: true
            closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent


            Row{
                id:header
                spacing:200;
                Rectangle{id:rect1; height:30;width:30;
                    MouseArea{
                        anchors.fill: parent
                        onClicked: {
                            popup.visible=false;
                        }
                        Text{
                            font.pixelSize: 20;
                            font.bold: true;
                            text:"X";anchors.centerIn: parent
                        }
                    }
                }

                Rectangle{ id:rect2;height:30;width:30;
                    Image{source: "setting.png";height:17;width:17;anchors.centerIn: parent
                    }
                }
            }
            Rectangle{ id:display;width: 285;height: 50;color: "skyblue";anchors.top:header.bottom
                TextInput{
                    text:"+91"
                    font.pixelSize: 28;
                    anchors.verticalCenter: parent.verticalCenter;
                    color: "white"
                }
            }

            Column{
                anchors.top:display.bottom
                spacing: 30;
                Row{
                    spacing: 90;
                Rectangle{ height:30;width:30;Text{text:"1";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"2";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"3";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}}
                Row{
                     spacing: 90;
                Rectangle{ height:30;width:30;Text{text:"4";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"5";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"6";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}}
                Row{
                     spacing: 90;
                Rectangle{ height:30;width:30;Text{text:"7";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"8";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"9";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}}
                Row{
                     spacing: 90;
                Rectangle{ height:30;width:30;Text{text:"*";font.pixelSize: 25;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"0";font.pixelSize: 25;font.bold:true;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Text{text:"#";font.pixelSize: 25;anchors.centerIn: parent}}}
                Row{
                     spacing: 90;
                Rectangle{ height:30;width:30;Text{text:"";anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;radius:50;Image{source: "calling.png";height:30;width:30;anchors.centerIn: parent}}
                Rectangle{ height:30;width:30;Image{source:"remove.png"; height:25;width:30;anchors.centerIn: parent}}}

            }
        }

    }
}
