import QtQuick 2.0

Rectangle{
width:400;height: 400;color: "blue"
signal myclick1();

MouseArea{
anchors.fill: parent
    onClicked: {
        console.log("Sending the signal 1")
    myclick1();
    }
}
Component.onCompleted: {
console.log("Object created-1")
}
Component.onDestruction: {
console.log("Object destroyed-1")
}
}
