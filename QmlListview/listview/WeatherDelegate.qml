import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle{
    signal sendWeather(string limage,string heat);
    id:rectWeather
    width: 180
    height:200
    color: "transparent"
    border.width: 2
    border.color: "orange"
    ColumnLayout{
       anchors.centerIn: parent
        Text{
            id:text1
            text:time
            color: "white"
        }
        Text{
            id:text2
            text:temperature+"℃"
            color: "white"
        }
        Image{
            Layout.preferredHeight: 50
            Layout.preferredWidth: 50
            id:img
            source:image
        }
    }
    MouseArea{
        anchors.fill: rectWeather;
        onClicked: {
            sendWeather(img.source,text2.text);

        }
    }
}
//Button {
//    id:cityBtn
//     text:city
//}
