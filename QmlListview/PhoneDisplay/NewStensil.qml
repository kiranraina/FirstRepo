import QtQuick 2.0

Rectangle{
    id:c1
    width: 100;height: 50;color: "red"
    Text{
        text:index;
    }
    Component.onCompleted: {
        console.log("Creating"+index)
    }
   Component.onDestruction: {
    console.log("destroyed"+index);
    }
}
