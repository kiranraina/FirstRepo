import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Text{
        text:Car.carname
    }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("myinteger"+myint);
            console.log("mystring"+myString);
            console.log("myobject"+Car);
            Car.print();
            Car.carname="Nothing";
        }
    }

}
