import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle {
    width: 100;height: 40;color: "blue"
    Button{
        text:"Dynamic"
    }
    Component.onCompleted: {
    console.log("monitor created");
    }
}
//Maps Qml Elements to C++ object
