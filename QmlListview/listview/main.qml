import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Image {
        anchors.fill: parent
        id: img1
        source: "backgroundImg.jpg"
    }
    Column{
        id:col1
        anchors.fill: parent
        ListView{
            id:listCity
            width: _root.width
            height: 100
            spacing: 2
            model:cityObj
            orientation:ListView.Horizontal;
            delegate:CityDelegate{
                property var custom_object
                onClicked: {
                    console.log("objects values before");
                   custom_object=cityObj.getYou(index);
                      console.log("object"+custom_object);
                     listWeather.model=custom_object;
                    currentRect.visible=true;
                    listWeather.visible=true;
                    console.log("kirab"+new Date().getHours());
                    var Myobj=custom_object.getTemp(new Date().getHours());
                    console.log("myweather"+Myobj.temp);
                    currentRect.wtemp=(Myobj.temp)+"℃";
                    currentRect.wimage=Myobj.cimage;


                }

            }
        }
        CurrentWeather{
            property string wtemp;
            property string wimage;
            id:currentRect;

        }
        ListView{
            id:listWeather
            width: _root.width
            height: 100
            spacing: 2
            visible: false
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

    }
}
