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
    Component{
        id:com
        Rectangle{
            id:c1
            width: 100;height: 50;color: "white"
            Text{
                text:index;
            }
            Component.onCompleted: {
                console.log("Creating"+index)
            }
           Component.onDestruction: {
            console.log("destroyed"+index);
            }
        }
    }
    ListView{
        id:l1
        spacing: 2
        width: parent.width
        height: 150;
        model:106
//        delegate: com
        delegate: NewStensil{}
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
    }
    function printMe(){
        console.log("print");
    }
    function appendMe(){
        console.log("appendMe");
    }
    function deleteMe(){
        console.log("deleteMe");
    }
}
