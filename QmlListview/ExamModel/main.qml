import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
import MyQuestion 1.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Timer{
    interval: 10000
    running: true
    onTriggered: {
        list1.enabled=true
    }
    }
    Rectangle{
        id:inst
        anchors.right: parent.right
        anchors.rightMargin: 40
        anchors.top: parent.top
        anchors.topMargin: 40
        height:250;
        width:250;
        color:"gray"
        ColumnLayout{
            spacing: 10
            anchors.centerIn: parent
            Text{
                text:"Exam Instruction"
                color: "white"
                font.pixelSize: 20
            }
            Text{
                text:"1.Dont copy in exam"
                color: "white"
                font.pixelSize: 15
            }
            Text{
                text:"2.Exam duration is 2 hr"
                color: "white"
                font.pixelSize: 15
            }
            Text{
                text:"3Exam will start in 5min"
                color: "white"
                font.pixelSize: 15
            }

        }
    }
    RowLayout{
        ListView{
            id:list
            height:_root.height
            spacing: 2
            width:_root.width/5
            model:sub
            delegate: SubjectDelegate{
                onSendObject:{
                    console.log("value"+value);
                    list1.model=sub.getObjectSubject(value);
                }
                onSendSubname:{
                    console.log("name"+name);
                    list1.sname=name;
                }
            }

        }
        ListView{
            id:list1
            height:_root.height
            spacing: 2
            width:_root.width/5
            property string sname
            enabled: false
            delegate: QuestionDelegate{}
        }

        Rectangle{
            id:rect2
            width: _root.width/1.38
            height: _root.height
            visible: false
            ColumnLayout{
                anchors.centerIn: parent
                Label{
                    id:_id
                    visible: false
                }
                Label{
                    id:ques
                    text:"question"
                    font.pixelSize: 25

                }
                RadioButton{
                    id:radio1
                    text:"option1"

                }
                RadioButton{
                    id:radio2
                    text:"option2"
                }
                RadioButton{
                    id:radio3
                    text:"option3"
                }
                RadioButton{
                    id:radio4
                    text:"option5"
                }
                Button{
                    id:submitBtn
                    text:"submit"
                    MouseArea{
                        anchors.fill: parent
                        onClicked: {
                            console.log("Button submit clicked"+_id.text);
                            //                             console.log("index list"+idx);
                            if(radio1.checked==true){
                                console.log("Button submit clicked"+radio1.text);
                                console.log("Button submit clicked"+radio1.text);
                                list1.model.setUserSelect(radio1.text,_id.text);
                                radio1.checked=false;
                            }
                            else if(radio2.checked==true){
                                console.log("Button submit clicked"+radio2.text);
                                list1.model.setUserSelect(radio2.text,_id.text);
                                radio2.checked=false;
                            }
                            else if(radio3.checked==true){
                                console.log("Button submit clicked"+radio3.text);
                                list1.model.setUserSelect(radio3.text,_id.text);
                                radio3.checked=false;
                            }
                            else if(radio4.checked==true){
                                console.log("Button submit clicked"+radio4.text);
                                list1.model.setUserSelect(radio4.text,_id.text);
                                radio4.checked=false;
                            }
                        }
                    }
                }
                Button{
                    id:closed
                    text:"close"
                    visible: false;
                    MouseArea{
                        anchors.fill: parent
                        onClicked: {
                            console.log("Button close clicked");
                            list1.model.summaryData();
                            popup.open()
                            text5.text=list1.model.getCount();
                            text2.text= list1.model.correctAns;
                            text4.text=list1.model.wrongAns;
                            //                            _root.visible=false;
                        }
                    }
                }
            }
        }
    }
    Popup {
        id: popup
        x: 100
        y: 100
        width: 400
        height: 350
        modal: true
        focus: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent
        Rectangle{
            anchors.fill:parent
            color: "blue"
            ColumnLayout{
                anchors.fill:parent
                Text{
                    text:"Summary"
                    font.pixelSize: 30
                    color: "white"
                }
                RowLayout{
                    Text{
                        text:"Total="
                        font.pixelSize: 25
                        color: "white"
                    }
                    Text{
                        id:text5
                        font.pixelSize: 25
                        color: "white"
                    }
                }
                RowLayout{
                    Text{
                        id:text1
                        text:"CorrectAns="
                        color: "white"
                        font.pixelSize: 20
                    }
                    Text{
                        id:text2
                        font.pixelSize: 20
                        color: "white"
                    }
                    Text{
                        id:text3
                        text:"WrongAns="
                        font.pixelSize: 20
                        color: "white"
                    }
                    Text{
                        id:text4
                        font.pixelSize: 20
                        color: "white"
                    }
                }
            }
        }

        Text{
            text:"X"
            anchors.right: parent.right;
            color:"white"
            font.pixelSize: 25
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    popup.close();
                }
            }
        }

    }
    Text{
        text:" X"
        anchors.right: parent.right;
        font.pixelSize: 20
        color: "red"
        MouseArea{
            anchors.fill: parent
            onClicked: {
                _root.close();
            }
        }
    }
    Connections{
        function  onsendIndex(val){
            console.log( "val"+val);
        }
    }
}
