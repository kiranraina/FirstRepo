import QtQuick 2.0

Rectangle{
width:300
height: 50
color: "white"
function clearValues(){
ti.clear();
}
property alias value:ti.text
    TextInput{
    id:ti
    text: ""
    anchors.fill: parent
    }
}
