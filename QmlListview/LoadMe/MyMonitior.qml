import QtQuick 2.0
import QtQuick.Controls 2.0
Text {
    signal catchMe();
    function callMe(){
      console.log("Go to call")
    }
    Button{
        y:100;
        x:200
        text:"sendSignal"
        onClicked: {
        catchMe();
        }
    }
    x:300
    width:200;height: 100;
    color: "blue"
    font.pixelSize: 30
    text:"Monitor"
    Component.onCompleted: {
       console.log("I am creating..")
    }
    Component.onDestruction:  {
       console.log("I am deleting..")
    }
}
