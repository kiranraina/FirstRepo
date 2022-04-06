import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import BELComps 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        anchors.fill:parent
        color: SInstance.col
        Button{
        text:auth.name
//        onClicked: {
////           auth.display();
////            auth.verify("saro","hello")
//            console.log("Name="+auth.name);
//            auth.name="world";
//            var listObjs = auth.getUsers();
//            console.log("List of users="+listObjs.length)
//            for(var i=0;i<listObjs.length;i++){
//            var userObj = listObjs[i];
//            console.log("usn="+userObj.usn)
//            }

//        }
        onDoubleClicked: {
        console.log("Double Clicked")
            auth.getMyUser();
        }
        }

//        BUser{
//        }

        BELUser{
        id:auth
        name: "siva"
        password: "welcome123"
        objectName: "BELUserLogin"
        }
        BELUser{
        id:auth1
        name: "siva"
        password: "welcome123"
        objectName: "BELUserLogin"
        }

    }
}
