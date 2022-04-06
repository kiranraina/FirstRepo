import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

//Window {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Hello World")
//    Text{
//        id:t1
//        text:belComp.uname;
//        font.pixelSize: 30
//        color: "blue"
//        visible: false;
//    }
//    function displayCPPData(){
//        console.log("a=",a);
//        console.log("name=",myname);
//        console.log("BelCompany=",belComp);
//        belComp.printMe();
//        var retVal= belComp.verify("hello","world");
//        console.log("ret Value"+retVal);
//        belComp.uname="Ashish";
//        //        belComp.name();
//        //        belComp.setName();
//        //        console.log("belCompany=",belComp.m_name);
//    }

//    function loginSuccess(){
//        console.log("Success");
//    }
//    function loginFail(){
//        console.log("Fails");
//    }
//    function recvData(company,val){
//        console.log("data="+company);
//        console.log("value="+val);
//    }
//    Connections{
//        target: belComp
//        onSuccess:{
//            loginSuccess();

//        }
//        onFail:{
//            loginFail();
//        }
//        onSend:{
//            //            console.log("data="+data);
//            //            console.log("value="+value);
//            recvData(data,value);
//        }
//    }
//    Button{
//        height: 30
//        width: 60
//        anchors.centerIn: parent
//        Text{
//            text:"click"
//            anchors.centerIn: parent
//            color: "red"
//        }
//        MouseArea{
//            anchors.fill: parent
//            onClicked: {
//                displayCPPData();
//                t1.visible=true;
//            }
//        }

//    }
//}
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    ListModel{
        id:lm
        ListElement{myname:"ashish";phone:"98765"}
        ListElement{myname:"mani";phone:"56787"}
        ListElement{myname:"sachin";phone:"34567"}

    }
    Item{
        id:it1
        anchors.fill:parent
        function add_data()
        {
            console.log("Add Data"+lm.count)
        }
        function printdata()
        {
            console.log("print Data")
            for(var i=0;i<lm.count;i++){
                var obj=lm.get(i)
                console.log(obj.myname)
            }
        }
        function insertdata()
        {
            console.log("insert Data"+lm.count)
        }
        Component{
            id:comp
            Rectangle{
                width: parent.width
                height: 50
                color: "blue"
                Text{
                    id:t1
                    anchors.centerIn: parent

                    text:belComp.get(index).Name
                    font.pixelSize: 30
                }
            }
        }

        ListView{
            spacing: 5
            id:lw
            width: parent.width
            height: parent.height-100
            model:belComp.count()
            delegate: comp
        }

        Row{
            id:rw
            spacing:10
            anchors.bottom: parent.bottom
            Button{
                text: "Add"
                onClicked: {
                    it1.add_data()
                }
            }
            Button{
                text: "print"
                onClicked: {
                    it1.printdata()
                }
            }
            Button{
                text: "Insert"
                onClicked: {
                    it1.insertdata()
                }
            }

        }
    }
}
