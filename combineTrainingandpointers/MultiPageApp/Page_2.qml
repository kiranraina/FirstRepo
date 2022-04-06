import QtQuick 2.0

Rectangle{
width:400;height: 400;color: "green"
signal myclick2();

MouseArea{
anchors.fill: parent
    onClicked: {
        console.log("Sending the signal 2")
    myclick2();
    }
}
Component.onCompleted: {
console.log("Object created-2")
}
Component.onDestruction: {
console.log("Object destroyed-2")
}
}
