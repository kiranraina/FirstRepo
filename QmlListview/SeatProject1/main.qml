import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    ListModel{
        id:list
        ListElement{
            index:1
            bolster:23
            position:1
            image:"qrc:/seat1.png"
            shoulder:3
        }
        ListElement{
            index:2
            bolster:36
            position:2
            image:"qrc:/seat2.png"
            shoulder:3
        }
        ListElement{
            index:3
            bolster:28
            position:3
            image:"qrc:/seat3.png"
            shoulder:3
        }
        ListElement{
            index:4
            bolster:43
            position:4
            image:"qrc:/seat4.png"
            shoulder:3
        }
    }
    Component{
    id:comp
    Image{
        width: _root.width
        height:_root.height
        source:image
        ColumnLayout{
            anchors.centerIn: parent
            Label{
                text:index
                color: "blue"
            }
            Label{
                text:bolster
                color: "blue"
            }
            Label{
                text:position
                color: "blue"
            }
            Label{
                text:shoulder
                color: "blue"
            }

        }
    }
    }
    ListView{
        anchors.fill: parent
        spacing: 2
//        model:list
        model:ListSeats{}
        delegate:comp
        orientation: ListView.Horizontal
    }

}
