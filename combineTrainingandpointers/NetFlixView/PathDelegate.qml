import QtQuick 2.0
Rectangle{
    width:200;height: 200;
    color: "yellow"
    radius: 5
    border.color:"red"
    border.width: 2
    scale: PathView.scale
    z:PathView.z
    opacity: PathView.op
    Text {text: index}
}
