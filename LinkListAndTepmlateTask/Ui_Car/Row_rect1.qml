import QtQuick 2.0

Rectangle {
    id:row_rect1
    height: parent.height/1
    width: parent.width/4
    color: "#3D3C3A";
    radius: parent.width/200
    Column{
        id:row_col3
        anchors.centerIn: parent
        Rectangle{
            id:overview_rect
            height: row_rect1.height/3.04
            width: row_rect1.width
            color: "#3D3C3A"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("overviw clicked");
                    overview_rect.color="#3D3C3A"
                    speed_identy1.color="skyblue"
                    battery_rect.color="#454545"
                    speed_identy2.color="#B6B6B4"
                    map_rect.color="#454545"
                    speed_identy3.color="#B6B6B4"
                    speed_txt.color="#B6B6B4"
                    map_txt.color="#B6B6B4";

                }
                Column{
                    id:overview_col
                    spacing: parent.height/18
                    anchors.centerIn: parent
                    Image{
                        id:speed_img
                        source:"qrc:/Image/speed.png"
                        width: row_rect1.width/3
                        height:row_rect1.height/8
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    Text{
                        text:"Overview"
                        id:speed_txt
                        anchors.horizontalCenter: parent.horizontalCenter
                        font.pixelSize:
                            (row_rect1.width   +row_rect1.height)/50
                        color: "white"
                        font.bold: true
                    }
                    Rectangle{
                        id:speed_identy1
                        width: row_rect1.width/8
                        height:row_rect1.height/100
                        anchors.horizontalCenter: parent.horizontalCenter
                        radius: row_rect1.height/300
                        color:"skyblue"
                    }
                }
            }
        }
        Rectangle{
            id:battery_rect
            height: row_rect1.height/3.04
            width: row_rect1.width
            color: "#454545"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("battery clicked");
                    battery_rect.color="#3D3C3A"
                    speed_identy2.color="skyblue"
                    map_rect.color="#454545"
                    speed_identy3.color="#B6B6B4"
                    overview_rect.color="#454545"
                    speed_identy1.color="#B6B6B4"
                    battery_txt.color="white"
                    speed_txt.color="#B6B6B4"
                    map_txt.color="#B6B6B4";
                }
                Column{
                    id:battery_col
                    spacing: parent.height/18
                    anchors.centerIn: parent
                    Image{
                        id:battery_img
                        source:"qrc:/Image/battery.png"
                        width: row_rect1.width/3
                        height:row_rect1.height/8
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    Text{
                        text:"Battery"
                        id:battery_txt
                        anchors.horizontalCenter: parent.horizontalCenter
                        font.pixelSize:
                            (row_rect1.width   +row_rect1.height)/50
                        color: "#B6B6B4"
                        font.bold: true
                    }
                    Rectangle{
                        id: speed_identy2
                        width: row_rect1.width/8
                        height:row_rect1.height/100
                        anchors.horizontalCenter: parent.horizontalCenter
                        radius: row_rect1.height/300
                        color:"#B6B6B4"
                    }
                }
            }
        }
        Rectangle{
            id:map_rect
            height: row_rect1.height/3.04
            width: row_rect1.width
            color: "#454545"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("map clicked");
                    map_rect.color="#3D3C3A"
                    speed_identy3.color="skyblue"
                    battery_rect.color="#454545"
                    speed_identy2.color="#B6B6B4"
                    overview_rect.color="#454545"
                    speed_identy1.color="#B6B6B4"
                    battery_txt.color="#B6B6B4"
                    speed_txt.color="#B6B6B4"
                    map_txt.color="white";
                }
                Column{
                    id:map_col
                    spacing: parent.height/18
                    anchors.centerIn: parent
                    Image{
                        id:map_img
                        source:"qrc:/Image/gps.png"
                        width: row_rect1.width/3
                        height:row_rect1.height/8
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    Text{
                        text:"Map"
                        id:map_txt
                        anchors.horizontalCenter: parent.horizontalCenter
                        font.pixelSize:
                            (row_rect1.width   +row_rect1.height)/50
                        color: "#B6B6B4"
                        font.bold: true
                    }
                    Rectangle{
                        id:speed_identy3
                        width: row_rect1.width/8
                        height:row_rect1.height/100
                        radius: row_rect1.height/300
                        anchors.horizontalCenter: parent.horizontalCenter
                        color:"#B6B6B4"
                    }
                }
            }
        }
    }
}
