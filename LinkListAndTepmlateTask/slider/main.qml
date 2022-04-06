import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{id:speed_rect1;height:200;width:200;radius:100;
        border.width:3; color:"#2B3856";border.color:"#2C3539";
        gradient: Gradient {
            GradientStop { position: 0.1; color: "#2B3856" }
            GradientStop { position: 0.1; color: "#1E90FF" }

        }
        Rectangle{id:speed_rect2;height:170;width:170;radius:85;
            border.width:3; color:"#2B3856";border.color:"#2C3539";
            anchors.centerIn: parent; gradient: Gradient {
                GradientStop { position: 0.25; color: "#2B3856" }
                GradientStop { position: 0.20; color: "#1E90FF" }
            }
            Rectangle{id:speed_rect3;height:140;width:140;radius:70;
                border.width:3; color:"#454545";border.color:"#2C3539";
                anchors.centerIn: parent
                Column{
                    spacing: 5
                    id:speed_data_col
                    anchors.centerIn: parent
                    Text{text:"83";font.pixelSize: 25;color: "white";font.bold: true}
                    Text{ text:"km/h";font.pixelSize: 18;color: "#B6B6B4"}
                    Row{
                        id:gear_row
                        spacing: 3
                     Text{ text:"P";font.pixelSize: 10;color: "#B6B6B4"}
                    Text{ text:"R";font.pixelSize: 10;color: "#B6B6B4"}
                    Text{ text:"N";font.pixelSize: 10;color: "#B6B6B4"}
                    Text{ text:"D";font.pixelSize: 10;color: "yellow"}}
                }
            }
        }
    }
    ProgressBar {
        value: 0.5
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
    }
}
