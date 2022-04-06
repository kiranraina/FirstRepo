import QtQuick 2.6
import QtQuick.Window 2.2


Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    ListView{
        anchors.fill: parent
        spacing: 2
        model: person
         delegate:Mydelegate{}
//         orientation: ListView.Horizontal
    }
}
