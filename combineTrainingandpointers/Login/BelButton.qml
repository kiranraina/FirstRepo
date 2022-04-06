import QtQuick 2.0

Rectangle
{
    id:r1
    width: 100
    height: 50
    color: "green"
    property string value
    signal sendValue(string value)
      Text {
        id: t1
        text: parent.value
        anchors.centerIn: parent
        font.pixelSize: 25
      }
      MouseArea{
         anchors.fill: parent
            onClicked: {
            console.log("Button Clicked="+t1.text)
//                ti.text=ti.text+t1.text;
                sendValue(t1.text);
            }
       }
}
