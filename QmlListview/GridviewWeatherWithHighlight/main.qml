import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    color: "Wheat"
    title: qsTr("Hello World")
    GridView{
        id:listCity
        width: _root.width/1.8
        height:_root.height
        model:cityObj
        delegate:CityDelegate{
            property var custom_object
            onClicked: {
                popup.open();
                console.log("objects values before");
                custom_object=cityObj.getYou(index);
                console.log("object"+custom_object);
                listWeather.model=custom_object;
                console.log("kirab"+new Date().getHours());
                var Myobj=custom_object.getTemp(new Date().getHours());
                listCity2.currentIndex=index;
                console.log("myweather"+Myobj.temp);
                currentRect.wtemp=(Myobj.temp)+"℃";
                currentRect.wimage=Myobj.cimage;

            }

        }
    }
    Popup {
        id: popup
        width: _root.width
        height:_root.width
        modal: true
        focus: true
        Image {
            anchors.fill: parent
            id: img2
            source: "backgroundImg.jpg"
        }
        Text{
            text:"X"
            font.pixelSize: 30
            color: "red"
            anchors.right: popup.right
            x:(popup.width-width-30);
            MouseArea{
                anchors.fill: parent
                onClicked: popup.close();
            }
        }
        Column{
            CurrentWeather{
                property string wtemp;
                property string wimage;
                id:currentRect;

            }
            Text{
            text:"...................................24 hours..................................."
            color: "white"
            anchors.horizontalCenter: parent.horizontalCenter
            }
            ListView{
                id:listWeather
                width: _root.width
                height: 200
                spacing: 2
                orientation:ListView.Horizontal;
                delegate: WeatherDelegate{
                    onSendWeather: {
                        console.log("cated the send weather"+limage+heat);
                        currentRect.wimage=limage;
                        currentRect.wtemp=heat;
                        console.log("after cated the send weather"+currentRect.wimage+currentRect.wtemp);
                    }
                }
            }
            ListView{
                id:listCity2
                width: _root.width
                height: 100
                spacing: 2
                model:cityObj
                orientation:ListView.Horizontal;
                onCurrentIndexChanged:{
               listWeather.model=cityObj.getYou(currentIndex);
                }
                delegate:CityDelegate{
                    property var custom_object
                   Component.onCompleted:  {
                        console.log("objects values before");
                        custom_object=cityObj.getYou(index);
                        console.log("object"+custom_object);
                        listWeather.model=custom_object;
                        console.log("kirab"+new Date().getHours());
                        var Myobj=custom_object.getTemp(new Date().getHours());
                        console.log("myweather"+Myobj.temp);
                        currentRect.wtemp=(Myobj.temp)+"℃";
                        currentRect.wimage=Myobj.cimage;

                    }

                }
                highlight: Rectangle{color: "blue";height: 30;width: 30}
                preferredHighlightBegin: 300
                preferredHighlightEnd: 300
                highlightRangeMode: ListView.StrictlyEnforceRange
            }

        }
    }
}

