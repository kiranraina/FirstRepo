import QtQuick 2.6
import QtQuick.Window 2.2
import MyPerson 1.0

Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Component.onCompleted:{
        console.log("hello windeo")
        MyObj.test();
        MyObj.getData(0);
    }
    ListView{
        anchors.fill: parent
        spacing: 2
        model:MyObj.getIndex()
        delegate:PersonDelegate{}
    }
}
