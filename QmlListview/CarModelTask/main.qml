import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Component{
    id:c1
    Rectangle{width:100;height: 50;color: "blue"}
    }
    ListView{
    anchors.fill:parent
    model:10
    spacing: 10
    delegate: c1
    }

    Row{
      spacing: 10
      Text{
      text:Carobj.getFunction(0).carName
      }
      Text{
      text:Carobj.getFunction(0).carColor
      }
      Text{
      text:Carobj.getFunction(0).carNumber
      }
    }
    MouseArea{
    anchors.fill: parent
    onClicked: {
//      Carobj.carName="bmw"
//        Carobj.carColor="white"
//        Carobj.carNumber="bmw10"
       var yourCar= Carobj.getFunction(2);
    }
    }

}
