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
    color: "blue"
    ColumnLayout{
        RowLayout{
            spacing: 60
            Text{text:"Name"}
            Rectangle{
                id:rect1;width: 120;height: 40;border.width: 2;border.color: "black"
                TextInput{id:text1;text:"";anchors.fill: parent}
            }
        }
        RowLayout{
            Text{text:"Phonenumber"}
            Rectangle{
                id:rect2;width: 120;height: 40;border.width: 2;border.color: "black"
                TextInput{id:text2;text:"";anchors.fill: parent}
            }
        }
        RowLayout{
            spacing: 60
            Text{text:"Email"}
            Rectangle{
                id:rect3;width: 120;height: 40;border.width: 2;border.color: "black"
                TextInput{id:text3;text:"";anchors.fill: parent}
            }
        }
        Button{text:"ok";onClicked: {
            console.log()
            }
        }

    }
    //    Component{
    //        id:com
    //        Rectangle{
    //            id:c1
    //            anchors.right: parent.right
    //            width: 100;height: 100;color:"red"
    //            RowLayout{
    //                anchors.fill: parent
    //                spacing: 10
    //                Text{text:index}
    //                Text{text:"name"}
    //            }
    //            Component.onCompleted: {
    //                console.log("Creating"+index)
    //            }
    //           Component.onDestruction: {
    //            console.log("destroyed"+index);
    //            }
    //        }
    //    }
    //    ListView{
    //        id:l1
    //        spacing: 2
    //        anchors.right: _root.right
    //        width:200
    //        height: 300;
    //        model:1
    //        delegate:com
    //        clip:true
    //    }
    //        Button{text:"ok";onClicked: _ok()}
    function _ok(){
        console.log("_ok");
    }
}
