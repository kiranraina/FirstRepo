import QtQuick 2.6
import QtQuick.Window 2.2
//how do we add new qml file
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    //adding own property
    property color colors: "yellow"
    property int size: 25
    property string name: "kiran"
    function printMe(m){
    console.log("Welcome to method");
        t1.visible=!t1.visible
        t1.x =m.x
        t1.y= m.y
    }
    function showOrHide(){
     if(t1.visible==true){
     t1.visible=false
     }else
     {
      t1.visible=true
     }
    }
    MYButton{}
   Rectangle{
       anchors.fill: parent
       color: m1.containsMouse?colors:"green"
       Text{
           id:t1
           text:"Show-HideMe"
           font.pixelSize: size
           color: m1.pressed?"white":"blue"
       }
    MouseArea {
        id:m1
        anchors.fill: parent
        hoverEnabled: true
        onClicked: {

            printMe(mouse);

        }
        onPressed: {
        console.log("On on Press ")
        }
        onReleased: {
        console.log("On on Released ")
        }
        onEntered: {
        console.log("On on onEntered ")
        }
        onExited: {
        console.log("On on onExited ")
        }
    }
   }


}
