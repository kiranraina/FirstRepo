import QtQuick 2.0
import QtQuick.Controls 2.0
Label {
    id:l1
    signal clicked()
    signal pressed()
    background: Rectangle{
        width:l1.width;
        height: l1.height;
        border.width: 2;
        border.color: "green"
    }
    MouseArea{
        anchors.fill:parent
        onClicked:{
            console.log("Mouse area clicked");
            l1.clicked()
        }
        onPressAndHold: sendMe(10)

    }
}
