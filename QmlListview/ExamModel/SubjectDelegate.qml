import QtQuick 2.0
import QtQuick.Controls 2.0
Rectangle{
    id:subRect
    height: _root.height/3
    width:_root.width/5
    color: "red"
    signal sendObject(int value)
    signal sendSubname(string name)
    Label{
        id:l1
        text:subject
    }
    MouseArea{
        anchors.fill:parent
        onClicked: {
            sendObject(index);
            sendSubname(l1.text);
        }
    }
}
