import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
   ListModel{
       id:_ld
       ListElement{myname:"Ashissh"}
       ListElement{myname:"abhishek"}
       ListElement{myname:"Amit"}
   }
   Item{
       id:_it1
       anchors.fill: parent
       function addData(){
       console.log("Add Data="+_ld.count)

       }
       function printData(){
       console.log("PrintData Data")
           for(var i=0;i<ld.count;i++){
           var obj=_ld.get(i);
               console.log(obj.myname)
           }
       }
       function insertData(){
       console.log("AddData name")
       }
       Component{
           id:comp1
       Rectangle{
       width: parent.width;height: 50;color: "blue"
       Text{text:myname;color: "white"}
       Component.onCompleted: {
       console.log("here...."+index)
       }
       }
       }
       ListView{
       id:_l1
       spacing: 5
       width: parent.width
       height: parent.height-100
       model:_ld
       delegate: comp1
       }
       Row{
           id:_row
           anchors.top:_l1.bottom
           spacing:10
           anchors.bottom: parent.bottom
       Button{
           text:"Add"
           onClicked: {
           _it1.addData();
           }
       }
       Button{
           text:"Print"
           onClicked: {
           _it1.printData();
           }
       }
       Button{
           text:"Insert"
           onClicked: {
           _it1.insertData();
           }
       }
       }
   }
}
