import QtQuick 2.0

Rectangle {
    id:_root
    width:100;height: 40
    color: "green"
    border.color: "red"
    border.width: 2
    property string value: "1"

    //how to declare our own signals
    //when defining the signal type is must
    //when defining mehod type is must
    signal sendValues(string val);
    Text{
        text:_root.value
        anchors.centerIn: parent
        font.pixelSize: 20
        color: "white"
    }
    MouseArea{
    anchors.fill: parent
    onClicked: {
    console.log("Clicked"+_root.value);
    sendValues(_root.value);}}
}
