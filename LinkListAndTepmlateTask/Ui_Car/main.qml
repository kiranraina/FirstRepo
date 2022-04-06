import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1000
    height: 700
    title: qsTr("Hello World")
        Row{
            spacing: parent.width/200
            anchors.fill:parent
            anchors.margins:  parent.width/200
            Row_rect1{}
            Row_react2{}
            }
}
