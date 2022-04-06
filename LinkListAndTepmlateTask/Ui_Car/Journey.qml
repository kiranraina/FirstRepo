import QtQuick 2.0
import QtGraphicalEffects 1.0
//import QtQuick.Controls 1.4
  import QtQuick.Controls 2.1

Rectangle {
    id:journey_rect
    height:row_rect2.height/1.91
    width:row_rect2.width/1.007
    radius: row_rect2.height/180
    color: "#454545"
    Text{
        id:journey_name
        text:"Journey"
        font.pixelSize: (journey_rect.height+journey_rect.width)/45;
        color: "white";
        anchors.top: parent.top
        anchors.topMargin:journey_rect.height/20
        anchors.left: parent.left
        font.bold: true
        anchors.leftMargin:journey_rect.width/30
    }
    Row{
        id:car_row
        spacing:journey_rect.width/10
//        anchors.centerIn: parent
        anchors.top:parent.top
        anchors.topMargin: journey_rect.height/5
        anchors.horizontalCenter: parent.horizontalCenter
        Column{
            Row{
                spacing: journey_rect.width/15
                anchors.left:parent.left
                anchors.leftMargin: journey_rect.width/10
                Text{
                    id:user_name
                    text:"Sasa"
                    font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                    anchors.verticalCenter: parent.verticalCenter
                    color: "#CCCCCC"
                }
                Rectangle{id:user;width:journey_rect.width/15;height:journey_rect.width/15;radius: journey_rect.width/10;
                    color: "transparent";border.width: journey_rect.width/10;border.color: "#B6B6B4"
                    Image{
                        id:person
                        source: "qrc:/Image/person.jpeg"
                        width:user.width;
                        height:user.height
                        anchors.fill: parent
                        smooth: true
                        visible: false
                    }
                    Image{
                        id:mask
                        source: "qrc:/Image/personbg.png"
                        width:user.width;
                        height:user.height
                        smooth: true
                        visible: false
                    }
                    OpacityMask {
                        anchors.fill: person
                        source: person
                        maskSource: mask
                    }
                }
            }
            Text{
                id:car_name
                text:"Tesla Model S"
                font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                color: "#CCCCCC"
            }
            Image {
                id: car_img
                source: "qrc:/Image/car.png"
                width: journey_rect.width/2
                height:journey_rect.height/3
            }
        }
        Rectangle{
            id:speed_rect1
            width: journey_rect.width/4.8
            height:journey_rect.width/4.8
            radius:journey_rect.width/6
            color:"skyblue"
            Rectangle{
                id:speed_rect12
                width: journey_rect.width/5.6
                height:journey_rect.width/5.6
                radius:journey_rect.height/4
                anchors.centerIn: parent
                color: "#454545"
                Column{
                    spacing: journey_rect.height/50
                    anchors.centerIn: parent
                    Text{
                        text:"83"
                        font.pixelSize:(journey_rect.height+journey_rect.width)/30;
                        font.bold: true
                        color: "white"
                    }
                    Text{
                        text:"km/h"
                        font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                        color: "#CCCCCC"
                    }
                    Row{
                        spacing: journey_rect.width/90
                        Text{
                            text:"P"
                            font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                            color: "#CCCCCC"
                        }
                        Text{
                            text:"R"
                            font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                            color: "#CCCCCC"
                        }
                        Text{
                            text:"N"
                            font.pixelSize:(journey_rect.height+journey_rect.width)/60;
                            color: "#CCCCCC"
                        }
                        Text{
                            text:"D"
                            font.pixelSize:(journey_rect.height+journey_rect.width)/60
                            ;
                            font.bold: true
                            color: "yellow"
                        }
                    }
                }
            }
        }

    }
    Row{
        id:travel_row
        spacing: -7;
        anchors.top:car_row.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        Rectangle{width:journey_rect.width/22;height: journey_rect.width/22;radius: journey_rect.width/44;color:"#1E90FF"
            Image{source: "qrc:/Image/flag.png";width:journey_rect.width/40;height: journey_rect.width/40;anchors.centerIn: parent}}

//        Slider{
//        value: 0.5;
//         width: journey_rect.width/1.2;
//         anchors.verticalCenter: parent.verticalCenter
//        }
        Slider {
                   id: control
                   value: 0.5
                   width: journey_rect.width/1.2;
                   anchors.verticalCenter: parent.verticalCenter

                   background: Rectangle {
                       x: control.leftPadding
                       y: control.topPadding + control.availableHeight / 2 - height / 2
                       implicitWidth: 200
                       implicitHeight: journey_rect.height/50
                       width: control.availableWidth
                       height: implicitHeight
                       radius: implicitHeight/2
                       color: "#595555"

                       Rectangle {
                           width: control.visualPosition * parent.width
                           height: parent.height
                           color: "skyblue"
                           radius: 2
                       }
                   }

                   handle: Rectangle {
                       x: control.leftPadding + control.visualPosition * (control.availableWidth - width)
                       y: control.topPadding + control.availableHeight / 2 - height / 2
                       implicitWidth: journey_rect.width/40
                       implicitHeight: journey_rect.width/40
                       radius: implicitWidth/2
                       color: "white"
                       border.color: "#4066B2"
                   }
               }
        Rectangle{width:journey_rect.width/22;height: journey_rect.width/22;radius: journey_rect.width/44;color:"#1E90FF"
            Image{source: "qrc:/Image/flag.png";width:journey_rect.width/40;height: journey_rect.width/40;anchors.centerIn: parent}}
    }
    Row{
        id:tarvel_place
        spacing: journey_rect.width/3
        anchors.bottom:journey_rect.bottom
        anchors.bottomMargin: journey_rect.height/45
        anchors.horizontalCenter: parent.horizontalCenter
        Column{
            Text{text:"Zagreb";font.pixelSize:(journey_rect.height+journey_rect.width)/70;color: "white"}
            Text{text:"0km";font.pixelSize:(journey_rect.height+journey_rect.width)/80;color: "#B6B6B4"}
        }
        Column{
            Text{text:"Honningsvag";font.pixelSize:(journey_rect.height+journey_rect.width)/70;color: "white"}
            Text{text:"5708km";font.pixelSize:(journey_rect.height+journey_rect.width)/80;color: "#B6B6B4"}
        }
        Column{
            Text{text:"Zagreb";font.pixelSize:(journey_rect.height+journey_rect.width)/70;color: "white"}
            Text{text:"10378km";font.pixelSize:(journey_rect.height+journey_rect.width)/80;color: "#B6B6B4"}
        }
    }

}
