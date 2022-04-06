import QtQuick 2.0
//Reusable Component
Rectangle {
    id:_root
    width:100;height: 40;color: "green"
    property string txt
    signal sendValue(string value);
    Text {
        text:_root.txt
        anchors.centerIn: parent
    }
    MouseArea{
        id:ms
        anchors.fill: parent
    }
    Connections
    {
        target: ms
        onClicked:
        {
            console.log("click"+_root.txt)
            sendValue(_root.txt);
        }
    }

}
