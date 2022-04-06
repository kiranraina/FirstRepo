import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 420
    height: 480
    title: qsTr("Hello World")

    ListModel{
    id:lModel
    ListElement{name:"hello";phone:"56455677"}
    ListElement{name:"world";phone:"56455677"}
    ListElement{name:"india";phone:"56455677"}
    }

    function insertData(){
    console.log("Insert the Data")
        var obj={name:"name",phone:"97654543"}
        lModel.insert(3,obj);
    }
    function appendData(){
    console.log("append the Data")
        var obj={name:"ram",phone:"97654543"}
        lModel.append(obj);
    }
    function printData(){
    console.log("print the Data"+lModel.count)
        for(var i=0;i<lModel.count;i++){
        var obj = lModel.get(i);
            console.log("name",obj.name ,""+ "phone=",obj.phone);
        }
    }
    Component{
        id:c1
        Rectangle{
        width:parent.width
        height: 50;color: "blue"
        radius: 10
        Row{
        spacing: 10
        Text{text: index;font.pixelSize: 18;color: "white"}
        Text{text: name;font.pixelSize: 18;color: "white"}
        Text{text: phone;font.pixelSize: 18;color: "white"}
        }
        Component.onCompleted: {
        console.log("Object Delegate Created",index);
        }
        }
    }
    Item {
        id: it1
        anchors.fill: parent
        ListView{
        spacing: 2
        width: parent.width
        anchors.top: parent.top
        anchors.bottom: mMenu.bottom
        model:lModel
        delegate: c1
        }

        Row{
            id:mMenu
            width: parent.width
            height: 50
            anchors.bottom: parent.bottom
            spacing: 10

        Button{text:"insert";
        onClicked: insertData();
        }
        Button{text:"append";
        onClicked: appendData();
        }
        Button{text:"print";
        onClicked: printData();
        }
        }
    }

}
