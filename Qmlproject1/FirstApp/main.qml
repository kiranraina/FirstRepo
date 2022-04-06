import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 440
    height: 480
    x:0 ;y:0;
    visible: true
    title: qsTr("Hello World")
    color: "blue"
  Rectangle{
  width:100;height:100;color: "red";
  z:10
  visible: true
  Text{
  text:"BEL"
  x:40;y:40;
  }

  }
  Rectangle{
  width:100;height: 100;color: "green"
  z:20
  visible: false
  }
}
