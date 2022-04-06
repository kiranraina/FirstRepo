import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    function showPage1(){
    console.log("show page1")
        myload.source ="Page_1.qml"
    }
    function showPage2(){
    console.log("show page2")
         myload.source ="Page_2.qml"
    }
    function showPage3(){
    console.log("show page3")
         myload.source ="Page_3.qml"
    }
    function showPage4(){
    console.log("show page4")
         myload.source ="Page_4.qml"
    }
    function showPage5(){
    console.log("show page5")
           myload.source ="Page_5.qml"
    }
    Loader{
    id:myload
    anchors.bottom: r1.top

    }
//    Component{
//        id:c1
//        Rectangle{
//         width:400;height: 400;color: "blue"
//        }
//       }
    Connections{
    target:myload.item
    onMyclick1:{
    console.log("Load next item 1")
    }
    onMyclick2:{
    console.log("Load next item2")
    }
    onMyclick3:{
    console.log("Load next item3")
    }
    onMyclick4:{
    console.log("Load next item4")
    }
    onMyclick5:{
    console.log("Load next item5")
    }
    }
    RowLayout{
    id:r1
    anchors.bottom: parent.bottom
    width:parent.width
    spacing: 5
    Button{
    text:"Page1"
    onClicked: showPage1();
     Layout.fillWidth: true
}
    Button{
    text:"Page2"
    onClicked: showPage2();
     Layout.fillWidth: true
}
    Button{
    text:"Page3"
    onClicked: showPage3();
    Layout.fillWidth: true
    }
    Button{
    text:"Page4"
    onClicked: showPage4();
    Layout.fillWidth: true
    }
    Button{
    text:"Page5"
    onClicked: showPage5();
    Layout.fillWidth: true
    }
  }
}
