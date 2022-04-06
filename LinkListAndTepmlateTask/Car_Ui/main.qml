import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtGraphicalEffects 1.0
import QtQuick.Controls.Styles 1.4

Window {
    visible: true
//    width: 1200
//    height: 880
    width: Screen.width
    height: Screen.height
    title: qsTr("Hello World")
//    Row{
//        id:main_row
//        anchors.centerIn: parent
//        spacing:10
//        Rectangle{width:250;height:700;radius:5;color: "#3D3C3A";
//            Column{
//                id:col1
//                anchors.centerIn: parent
//                Rectangle{
//                    id:col1_speed;height: 230;width: 240;color: "#3D3C3A"
//                    Column{
//                        spacing: 10
//                        id:sub_col1_speed
//                        anchors.centerIn: col1_speed
//                        Image{
//                            anchors.horizontalCenter: sub_col1_speed.horizontalCenter
//                            id:speed_img
//                            height: 80
//                            width: 80
//                            source: "speed.png"
//                        }
//                        Text{text:"Overview";color: "white";font.pixelSize: 25}
//                        Rectangle{height:5;width: 30;color: "skyblue";radius: 2;           anchors.horizontalCenter:sub_col1_speed.horizontalCenter }
//                    }
//                }
//                Rectangle{
//                    id:col2_battery;height: 230;width: 240;color: "#454545"
//                    Column{
//                        spacing: 10
//                        id:sub_col2_battery
//                        anchors.centerIn: col2_battery
//                        Image{
//                            anchors.horizontalCenter: sub_col2_battery.horizontalCenter
//                            id:battery_img
//                            height: 80
//                            width: 80
//                            source: "battery.png"
//                        }
//                        Text{text:"Battery";color: "#B6B6B4";font.pixelSize: 25}
//                        Rectangle{height:5;width: 30;color: "#B6B6B4";radius: 2;           anchors.horizontalCenter:sub_col2_battery.horizontalCenter }
//                    }
//                }
//                Rectangle{
//                    id:col3_map;height: 230;width: 240;color: "#454545"
//                    Column{
//                        spacing: 10
//                        id:sub_col3_map
//                        anchors.centerIn: col3_map
//                        Image{
//                            anchors.horizontalCenter: sub_col3_map.horizontalCenter
//                            id:map_img
//                            height: 80
//                            width: 80
//                            source: "gps.png"
//                        }
//                        Text{text:"Map";color: "#B6B6B4";font.pixelSize: 25;anchors.horizontalCenter: sub_col3_map.horizontalCenter}
//                        Rectangle{height:5;width: 30;color: "#B6B6B4";radius: 2;           anchors.horizontalCenter:sub_col3_map.horizontalCenter }
//                    }
//                }
//            }
//        }
//        Column{
//            id:journey_col
//            spacing: 10
//            Rectangle{
//                id:journey_rect;height: 390;width: 850;color: "#454545";radius: 5
//                Text{ id:journey_txt;text:"Journey";font.pixelSize: 25;color: "white"
//                    anchors.top: journey_rect.top;anchors.topMargin: 20
//                    anchors.left:journey_rect.left;anchors.leftMargin: 20
//                }
//                Row{
//                    id:car_rows
//                    anchors.top:journey_txt.bottom
//                    anchors.topMargin: 30
//                    anchors.horizontalCenter: journey_rect.horizontalCenter
//                    spacing: 100
//                    Row{
//                        id:user_car
//                        Column{
//                            Row{
//                                id:user_detail_row
//                                spacing: 50
//                                anchors.left: parent.left;
//                                anchors.leftMargin: 60
//                                Text{
//                                    text:"Sasa"
//                                    color: "#B6B6B4"
//                                    anchors.verticalCenter: parent.verticalCenter
//                                }
//                                Rectangle{id:user;width: 60;height: 60;radius: 50;
//                                    color: "transparent";border.width: 2;border.color: "#B6B6B4"
//                                    Image{
//                                        id:person
//                                        source: "person.jpeg"
//                                        width:user.width;
//                                        height:user.height
//                                        anchors.fill: parent
//                                        smooth: true
//                                        visible: false
//                                    }
//                                    Image{
//                                        id:mask
//                                        source: "personbg.png"
//                                        width:user.width;
//                                        height:user.height
//                                        smooth: true
//                                        visible: false
//                                    }
//                                    OpacityMask {
//                                        anchors.fill: person
//                                        source: person
//                                        maskSource: mask
//                                    }
//                                }

//                            }
//                            Text{
//                                text:"Tesla Model S"
//                                color: "#B6B6B4"
//                            }
//                            Image{
//                                id:car;source:"car.png";height:100;width: 300;
//                                anchors.horizontalCenter: parent.horizontalCenter
//                            }

//                        }
//                    }
//                    Rectangle{id:speed_rect1;height:200;width:200;radius:100;
//                        border.width:3; color:"#2B3856";border.color:"#2C3539";
//                        gradient: Gradient {
//                            GradientStop { position: 0.09; color: "#2B3856" }
//                            GradientStop { position: 0.09; color: "#1E90FF" }

//                        }
//                        Rectangle{id:speed_rect2;height:170;width:170;radius:85;
//                            border.width:3; color:"#2B3856";border.color:"#2C3539";
//                            anchors.centerIn: parent; gradient: Gradient {
//                                GradientStop { position: 0.25; color: "#2B3856" }
//                                GradientStop { position: 0.20; color: "#1E90FF" }
//                                GradientStop { position: 1.00; color: "#2B3856" }
//                            }
//                            Rectangle{id:speed_rect3;height:140;width:140;radius:70;
//                                border.width:3; color:"#454545";border.color:"#2C3539";
//                                anchors.centerIn: parent
//                                z:1
//                                Column{
//                                    spacing: 5
//                                    id:speed_data_col
//                                    anchors.centerIn: parent
//                                    Text{text:"83";font.pixelSize: 25;color: "white";font.bold: true}
//                                    Text{ text:"km/h";font.pixelSize: 18;color: "#B6B6B4"}
//                                    Row{
//                                        id:gear_row
//                                        spacing: 3
//                                        Text{ text:"P";font.pixelSize: 10;color: "#B6B6B4"}
//                                        Text{ text:"R";font.pixelSize: 10;color: "#B6B6B4"}
//                                        Text{ text:"N";font.pixelSize: 10;color: "#B6B6B4"}
//                                        Text{ text:"D";font.pixelSize: 10;color: "yellow"}}
//                                }
//                            }
//                        }
//                    }

//                }
//                Row{
//                    id:travel_row
//                    anchors.top:car_rows.bottom
//                    anchors.horizontalCenter: parent.horizontalCenter
//                    anchors.topMargin: 10;
//                    spacing: -7;
//                    Rectangle{width:30;height: 30;radius: 15;color:"#1E90FF"
//                        Image{source: "flag.png";width:20;height: 20;anchors.centerIn: parent}}
//                    Slider {
//                        id: control
//                        from: 1
//                        value:5;
//                        stepSize: 1;
//                        to:10;
//                        width: 600;
//                        anchors.top: parent.top
//                        anchors.topMargin: 3

//                        background: Rectangle {
//                            x: control.leftPadding
//                            y: control.topPadding + control.availableHeight / 2 - height / 2
//                            implicitWidth: 200
//                            implicitHeight: 5
//                            width: control.availableWidth
//                            height: implicitHeight
//                            radius: implicitHeight/2
//                            color: "#595555"

//                            Rectangle {
//                                width: control.visualPosition * parent.width
//                                height: parent.height
//                                color: "skyblue"
//                                radius: 2
//                            }
//                        }

//                        handle: Rectangle {
//                            x: control.leftPadding + control.visualPosition * (control.availableWidth - width)
//                            y: control.topPadding + control.availableHeight / 2 - height / 2
//                            implicitWidth: 10
//                            implicitHeight: 10
//                            radius: implicitWidth/2
//                            color: "skyblue"
//                            border.color: "#4066B2"
//                        }
//                    }
//                    Rectangle{width:30;height: 30;radius: 15;color:"#6D6968"
//                        Image{source: "flag.png";width:20;height: 20;anchors.centerIn: parent}}
//                }
//                Row{
//                    id:tarvel_place
//                    spacing: 220
//                    anchors.top: travel_row.bottom
//                    anchors.horizontalCenter: parent.horizontalCenter
//                    Column{
//                        Text{text:"Zagreb";font.pixelSize: 20;color: "white"}
//                        Text{text:"0km";font.pixelSize: 15;color: "#B6B6B4"}
//                    }
//                    Column{
//                        Text{text:"Honningsvag";font.pixelSize: 20;color: "white"}
//                        Text{text:"5708km";font.pixelSize: 15;color: "#B6B6B4"}
//                    }
//                    Column{
//                        Text{text:"Zagreb";font.pixelSize: 20;color: "white"}
//                        Text{text:"10378km";font.pixelSize: 15;color: "#B6B6B4"}
//                    }
//                }

//            }
//            Row{
//                id:row1
//                spacing: 10
//                Rectangle{
//                    id:row1_battery;height: 300;width: 360;color: "#454545";radius: 5
//                    Text{ id:battery_txt;text:"Battery";font.pixelSize: 25;color: "white"
//                        anchors.top: row1_battery.top;anchors.topMargin: 20
//                        anchors.left: row1_battery.left;anchors.leftMargin: 20
//                    }
//                    Row{
//                        id:row1_battery_rects
//                        spacing: 35
//                        anchors.top:battery_txt.bottom
//                        anchors.topMargin: 40
//                        anchors.horizontalCenter: row1_battery.horizontalCenter
//                        Column{
//                            id:col_battery_rects
//                            Rectangle{height: 10;width: 20;color: "#DCDCDC";radius:1
//                                anchors.horizontalCenter: col_battery_rects.horizontalCenter}
//                            Rectangle{height: 150;width: 60;/*color: "#DCDCDC";*/radius: 2
//                                gradient: Gradient {
//                                    GradientStop { position: 0.65; color: "#1E90FF" }
//                                    GradientStop { position: 0.65; color: "#DCDCDC" }
//                                }
//                            }
//                        }
//                        Column{
//                            spacing: 10;
//                            Column{
//                                Text{
//                                    text:"142 km"
//                                    font.pixelSize: 25
//                                    color: "white"
//                                }
//                                Text{
//                                    text:"left"
//                                    font.pixelSize: 15
//                                    color: "#B6B6B4"
//                                }
//                            }
//                            Column{
//                                Text{
//                                    text:"22"
//                                    font.pixelSize: 25
//                                    color: "white"
//                                }
//                                Text{
//                                    text:"charge cycles"
//                                    font.pixelSize: 15
//                                    color: "#B6B6B4"
//                                }
//                            }
//                            Column{
//                                Text{
//                                    text:"4758 km"
//                                    font.pixelSize: 25
//                                    color: "white"
//                                }
//                                Text{
//                                    text:"distance traveled"
//                                    font.pixelSize: 15
//                                    color: "#B6B6B4"
//                                }
//                            }


//                        }
//                    }
//                }
//                Rectangle{
//                    id:row1_weather;height: 300;width: 480;color: "#454545";radius: 5
//                    Text{ id:weather_txt;text:"Weather";font.pixelSize: 25;color: "white"
//                        anchors.top: row1_weather.top;anchors.topMargin: 20
//                        anchors.left: row1_weather.left;anchors.leftMargin: 20
//                    }
//                    Row{
//                        id:row_weather_img
//                        spacing: 100
//                        anchors.top: weather_txt.bottom
//                        anchors.topMargin: 20
//                        anchors.left: row1_weather.left
//                        anchors.leftMargin: 50
//                        Image{
//                            source: "sunny.png";
//                            id:sunny_img
//                            height: 60
//                            width: 60
//                        }
//                        Image{
//                            source: "temperature.png"
//                            id:temperature_img
//                            height: 60
//                            width: 60
//                        }
//                        Image{
//                            source: "rain.png"
//                            id:rain_img
//                            height: 60
//                            width: 60
//                        }
//                    }
//                    Column{
//                        id:weather_details
//                        spacing: 30
//                        anchors.top: row_weather_img.bottom
//                        anchors.horizontalCenter: row1_weather.horizontalCenter
//                        anchors.topMargin: 20

//                        Row{

//                            id:row_weather_Txt1
//                            anchors.horizontalCenter: weather_details.horizontalCenter
//                            spacing: 100
//                            Column{
//                                Text{
//                                    text:"Clouds"
//                                    color: "white";
//                                    font.pixelSize: 20
//                                }
//                                Text{
//                                    text:"weather"
//                                    color: "#B6B6B4";
//                                    font.pixelSize: 15
//                                }
//                            }
//                            Column{
//                                Row{
//                                    Text{
//                                        text:"22 "
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                    Text{
//                                        text:"o"
//                                        color: "white";
//                                        font.pixelSize: 10
//                                    }
//                                    Text{
//                                        text:"C"
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                }
//                                Text{
//                                    text:"inside car"
//                                    color: "#B6B6B4";
//                                    font.pixelSize: 15
//                                }
//                            }
//                            Column{
//                                Text{
//                                    text:"93%"
//                                    color: "white";
//                                    font.pixelSize: 20
//                                }
//                                Text{
//                                    text:"humidity"
//                                    color: "#B6B6B4";
//                                    font.pixelSize: 15
//                                }
//                            }
//                        }
//                        Row{
//                            id:row_weather_Txt2
//                            spacing: 108

//                            Column{
//                                Row{
//                                    Text{
//                                        text:"5.1"
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                    Text{
//                                        text:"km/h"
//                                        color: "white";
//                                        anchors.bottom: parent.bottom
//                                        anchors.bottomMargin: 3
//                                        font.pixelSize: 10
//                                    }
//                                }
//                                Text{
//                                    text:"wind"
//                                    color: "#B6B6B4";
//                                    font.pixelSize: 15
//                                }
//                            }
//                            Column{
//                                Row{
//                                    Text{
//                                        text:"15.5 "
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                    Text{
//                                        text:"o"
//                                        color: "white";
//                                        font.pixelSize: 10
//                                    }
//                                    Text{
//                                        text:"C"
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                }
//                                Text{
//                                    text:"outside"
//                                    color: "#B6B6B4";
//                                    font.pixelSize: 15
//                                }
//                            }
//                            Column{
//                                Row{
//                                    Text{
//                                        text:"1015"
//                                        color: "white";
//                                        font.pixelSize: 20
//                                    }
//                                    Text{
//                                        text:"hpa"
//                                        color: "white";
//                                        anchors.bottom: parent.bottom
//                                        anchors.bottomMargin: 3
//                                        font.pixelSize:10
//                                    }
//                                }

//                                Text{
//                                    text:"pressure"
//                                    color: "#B6B6B4";
//                                    font.pixelSize:15
//                                }

//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }

ProgressBar {
    value: slider.value
    style: ProgressBarStyle {
        background: Rectangle {
            radius: 2
            color: "lightgray"
            border.color: "gray"
            border.width: 1
            implicitWidth: 200
            implicitHeight: 24
        }
        progress: Rectangle {
            color: "lightsteelblue"
            border.color: "steelblue"
        }
    }
}
}
