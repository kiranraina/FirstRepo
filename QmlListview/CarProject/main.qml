import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    RowLayout{
        ListView{
            height:_root.height
            spacing: 2
            width:_root.width/3.8
            model:car
            delegate: CarDelegate{}
        }
        Rectangle{
            id:rect2
            width: _root.width/1.5
            height: _root.height
            visible: false
            color: "red"
            Image{
                id:img1
                anchors.fill: parent
            }
        }
    }
}
