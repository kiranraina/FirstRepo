import QtQuick 2.0

Rectangle{
width:400;height: 400;color: "yellow"
signal myclick3();

MouseArea{
anchors.fill: parent
    onClicked: {
        console.log("Sending the signal 3")
    myclick3();
    }
}
Component.onCompleted: {
console.log("Object created-3")
}
Component.onDestruction: {
console.log("Object destroyed-3")
}
}
