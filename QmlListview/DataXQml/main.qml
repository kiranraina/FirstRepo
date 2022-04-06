import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.1
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    MouseArea{
        id:ms1
        anchors.fill:parent
        onClicked: {
            console.log("print"+valu);
            myauth.verify("kiran","kiran123");
            myauth.dispaly()
        }
    }
//     Rectangle{
//     implicitHeight: 100
//     implicitWidth: 100
//     color: "blue"
//     Text{
//     text:"hellojjwklcdnwkcniuhw8dkqw;ldxjWA[DLX,;WFDPEKC,D;LSM'OCJP'KPSDK]"
//     }
//     }
//    RowLayout{
//    Rectangle{implicitHeight: 100
//        implicitWidth: 100
//        color: "blue"
//        Text{
//        text:"hellojjwklcdnwkcniuhw8dkqw;ldxjWA[DLX,;WFDPEKC,D;LSM'OCJP'KPSDK]"
//        }}
//    Rectangle{implicitHeight: 100
//        implicitWidth: 100
//        color: "blue"
//        Text{
//        text:"hellojjwklcdnwkcniuhw8dkqw;ldxjWA[DLX,;WFDPEKC,D;LSM'OCJP'KPSDK]"
//        }}
//    Rectangle{implicitHeight: 100
//        implicitWidth: 100
//        color: "blue"
//        Text{
//        text:"hellojjwklcdnwkcniuhw8dkqw;ldxjWA[DLX,;WFDPEKC,D;LSM'OCJP'KPSDK]"
//        }}
//    }
    Connections{
        target: myauth
        onSuccess:logDone();
        onFail:logNotDone();
    }
    function logDone(){
    console.log("Qml-logDone")
    }
    function logNotDone(){
    console.log("Qml-logNotDone")
    }

}
