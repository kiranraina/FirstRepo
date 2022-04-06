import QtQuick 2.0

Rectangle {id:battery_rect
    height:row_rect2.height/2.15
    width:row_rect2.width/2.4
    radius: row_rect2.height/180
    color: "#454545"
    Text{
        id:battery_name
        text:"Battery"
        font.pixelSize: (battery_rect.height+battery_rect.width)/35;
        color: "white";
        font.bold: true
        anchors.top: parent.top
        anchors.topMargin:battery_rect.height/15
        anchors.left: parent.left
        anchors.leftMargin:battery_rect.width/15
    }
    Row{
        id:battery_row
        anchors.bottom: parent.bottom
        anchors.bottomMargin: battery_rect.height/10
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: battery_rect.width/10
        Column{
            id:battery_pic_col
            Rectangle{
                id:small_rect
                width:battery_rect.width/10
                height: battery_rect.height/23
                color: "#DCDCDC"
                radius:  battery_rect.height/150
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Rectangle{
                id:big_rect
                width:battery_rect.width/4
                height: battery_rect.height/1.8
                radius:  battery_rect.height/150
                color: "#DCDCDC"
                gradient: Gradient {
                    GradientStop { position:0.5; color: "#1E90FF" }
                    GradientStop { position:0.5; color: "#DCDCDC" }
                }
            }
        }
        Column{
            spacing:battery_rect.height/12
            anchors.verticalCenter: parent.verticalCenter
            Column{
                Text{
                    id:speed_value
                    text:"142 km"
                    color: "#FFFFFF"
                    font.bold: true
                    font.pixelSize: (battery_rect.height+battery_rect.width)/35
                }
                Text{
                    id:direction
                    text:"left"
                    color: "#CCCCCC"
                    font.pixelSize: (battery_rect.height+battery_rect.width)/55
                }
            }
            Column{
                Text{
                    id:charge_cycle_value
                    text:"22"
                    color: "#FFFFFF"
                    font.bold: true
                    font.pixelSize: (battery_rect.height+battery_rect.width)/35
                }
                Text{
                    id:cahrge_cycle_txt
                    text:"charge cycle"
                    color: "#CCCCCC"
                    font.pixelSize: (battery_rect.height+battery_rect.width)/55
                }
            }
            Column{
                Text{
                    id:total_speed
                    text:"4758 km"
                    color: "#FFFFFF"
                    font.bold: true
                    font.pixelSize: (battery_rect.height+battery_rect.width)/35
                }
                Text{
                    id:speed_detail
                    text:"distance traveled"
                    color: "#CCCCCC"
                    font.pixelSize: (battery_rect.height+battery_rect.width)/55
                }
            }
        }
    }
}
