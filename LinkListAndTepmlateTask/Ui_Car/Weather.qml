import QtQuick 2.0

Rectangle {id:weather_rect
    height:row_rect2.height/2.15
    width:row_rect2.width/1.76
    color: "#454545"
    radius: row_rect2.height/180
    Text{
        id:weather_name
        text:"Weather"
        font.pixelSize: (weather_rect.height+weather_rect.width)/35;
        color: "white";
        font.bold: true
        anchors.top: parent.top
        anchors.topMargin:weather_rect.height/15
        anchors.left: parent.left
        anchors.leftMargin:weather_rect.width/15
    }
    Grid{
        id:weather_details
        rows:3
        rowSpacing:(weather_rect.height+weather_rect.width)/19
        columns:3
        anchors.bottom: parent.bottom
        anchors.bottomMargin: weather_rect.height/10
        anchors.horizontalCenter: parent.horizontalCenter
        columnSpacing: (weather_rect.height+weather_rect.width)/17
        Image{
            id:sunny_img
            source:"qrc:/Image/sunny.png";
            height: weather_rect.height/7
            width:weather_rect.width/7
        }
        Image{
            id:temperature_img
            source:"qrc:/Image/temperature.png";
            height: weather_rect.height/7
            width:weather_rect.width/7
        }
        Image{
            id:rain_img
            source:"qrc:/Image/rain.png";
            height: weather_rect.height/7
            width:weather_rect.width/7
        }
        Column{
        Text{
            id:cloud_txt
            text:"Clouds"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            id:weather_txt
            text:"weather"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }
        Column{
        Text{
            id:tmp_value
            text:"22 °C"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            id:weather_place
            text:"inside car"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }
        Column{
        Text{
            id:humidity_value
            text:"93%"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            id:humidity_txt
            text:"humidity"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }
        Column{
            Row{
        Text{
            id:wind_value
            text:"5.1"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            text:" km/h"
            font.bold: true
            anchors.bottom: parent.bottom
            font.pixelSize: (weather_rect.height+weather_rect.width)/60;
            color:"white"
        }
            }
        Text{
            id:wind_txt
            text:"wind"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }
        Column{
        Text{
            id:temp_value_out
            text:"15.5 °C"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            id:outside_txt
            text:"outside"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }Column{
            Row{
        Text{
            id:pressure_value
            text:"1015"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/35;
            color:"white"
        }
        Text{
            text:" hpa"
            font.bold: true
            anchors.bottom: parent.bottom
            font.pixelSize: (weather_rect.height+weather_rect.width)/60;
            color:"white"
        }
            }
        Text{
            id:pressure_txt
            text:"pressure"
            font.bold: true
            font.pixelSize: (weather_rect.height+weather_rect.width)/55;
            color:"#CCCCCC"
        }
        }

    }
}
