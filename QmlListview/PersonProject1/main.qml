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
            name:"ram"
            age:20
            gender:"male"
        }
        ListElement{
            index:2
            name:"raj"
            age:20
            gender:"male"
        }
        ListElement{
            index:3
            name:"rudra"
            age:20
            gender:"male"
        }
        ListElement{
            index:4
            name:"sanju"
            age:20
            gender:"male"
        }
        ListElement{
            index:5
            name:"sidda"
            age:20
            gender:"male"
        }
    }
    Component{
    id:comp

    ColumnLayout{
        width: _root.width
        height:_root.height
        Label{
            text:index
            color: "green"
        }
        Label{
            text:name
            color: "green"
        }
        Label{
            text:age
            color: "green"
        }
        Label{
            text:gender
            color: "green"
        }
}
    }
    ListView{
        anchors.fill: parent
        spacing: 2
        model: list
        delegate:comp
//         delegate:MyPersonList{}
        //         orientation: ListView.Horizontal
    }
}
