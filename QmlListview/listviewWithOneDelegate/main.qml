import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Image {
        anchors.fill: parent
        id: img1
        source: "backgroundImg.jpg"
    }
    ListView{
        id:listCity
        width: _root.width
        height: 100
        spacing: 2
        model:cityObj
        snapMode: ListView.StrictlyEnforceRange
        orientation:ListView.Horizontal;
        delegate:CityDelegate{
            property var custom_object
        }
    }


}

