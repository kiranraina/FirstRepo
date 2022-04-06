import QtQuick 2.0
//Reusable Component
Rectangle {
    id:_root
    width:main.width/4;height: main.width/6;color: "white";border.color:"gray";border.width:main.width/210;
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
    Connections{
        target: ms
        onClicked:{

            console.log("click"+_root.txt)
            sendValue(_root.txt);
        }
    }

}
