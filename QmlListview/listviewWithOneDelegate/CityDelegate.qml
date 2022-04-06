import QtQuick 2.0
import QtQuick.Controls 2.0

Column{
    Button {
        signal sendObject(var val);
        id:cityBtn
        text:city
        Component.onCompleted: {
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
