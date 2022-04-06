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
            model:weather1
            orientation:ListView.Horizontal;
            delegate:CityDelegate{
                property var custom_object
                onClicked: {
                    console.log("objects values before");
                   custom_object=weather1.getYou(index);
                      console.log("object"+custom_object);
                     listWeather.model=custom_object
                    currentRect.visible=true
                    listWeather.visible=true;
                    console.log("kirab"+new Date().getHours());
//                    custom_object.sum(new Date().getHours());
                    custom_object.currentTemp=new Date().getHours();

                }

            }
        }
        CurrentWeather{
            property string wtime:"";
            property string wtemp:"";
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
            currentRect.wtime=times;
              currentRect.wtemp=heat;
            }
            }
        }

    }
}
