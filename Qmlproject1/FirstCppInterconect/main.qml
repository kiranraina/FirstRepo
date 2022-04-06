import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    function displayCPPData(){
    console.log("a=",a);
        console.log("name=",myname);
        console.log("BelCompany=",belComp);
    }
    MouseArea{
    anchors.fill: parent
    onClicked: {
    displayCPPData();
    }
}
}
