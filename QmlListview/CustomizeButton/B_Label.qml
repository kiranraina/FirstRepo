import QtQuick 2.0
import QtQuick.Controls 2.0
Label {
    id:l1
    signal clicked()
    signal pressed()
    signal sendMe(int x)
    background: Rectangle{
        //    implicitWidth: 200;
        //    implicitHeight: 50;
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
        onPressed: l1.pressed()
        onPressAndHold: sendMe(10)

    }
}
