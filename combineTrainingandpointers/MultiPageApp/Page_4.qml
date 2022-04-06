import QtQuick 2.0

Rectangle{
width:400;height: 400;color: "red"
signal myclick4();

MouseArea{
anchors.fill: parent
    onClicked: {
        console.log("Sending the signal 4")
    myclick4();
    }
}
Component.onCompleted: {
console.log("Object created-4")
}
Component.onDestruction: {
console.log("Object destroyed-4")
}
}
