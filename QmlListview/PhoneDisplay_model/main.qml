import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "blue"
    ListModel{
    id:md
    ListElement{colr:"green";name:"kiran"}
    ListElement{colr:"white";name:"kumar"}
    ListElement{colr:"yellow";name:"raj"}
    ListElement{colr:"red";name:"ram"}
    ListElement{colr:"orange";name:"manu"}
    ListElement{colr:"skyblue";name:"chandu"}
    }
    Component{
        id:com
        Rectangle{
            id:c1
            width: parent.width;height: 100;color:colr
            ColumnLayout
            {
                anchors.fill: parent
                spacing: 10
                Button{text:index}
                RadioButton{text:name}
            }
            Component.onCompleted: {
                console.log("Creating"+index)
            }
           Component.onDestruction: {
            console.log("destroyed"+index);
            }
        }
    }
    Component{
        id:c2
        Rectangle{
            id:c1
            width: parent.width;height: 50;color:colr
            RowLayout{
                anchors.fill: parent
                spacing: 10
                Text{text:index}
                Text{text:name}
            }
            Component.onCompleted: {
                console.log("Creating"+index)
            }
           Component.onDestruction: {
            console.log("destroyed"+index);
            }
        }
    }
    property bool whom: true
    ListView{
        id:l1
        spacing: 2
        width: parent.width
        height: 300;
        model:md
        delegate: whom?com:c2
        clip:true
    }
    RowLayout{
        id:_row
        anchors.bottom: parent.bottom
        Button{text:"Print";onClicked: printMe()}
        Button{text:"Insert";onClicked: insertMe()}
        Button{text:"Append";onClicked: appendMe()}
        Button{text:"Delete";onClicked: deleteMe()}
    }
    function insertMe(){
        console.log("insert");
        whom=!whom;
    }

    function printMe(){
        var elcount=md.count
        console.log("print"+elcount);
        for(var i=0;i<elcount;i++){
            var obj=md.get(i);
            console.log("value="+obj.colr+"name"+obj.name)
        }
    }
    function appendMe(){
        console.log("appendMe");
    }
    function deleteMe(){
        console.log("deleteMe");
    }
}
