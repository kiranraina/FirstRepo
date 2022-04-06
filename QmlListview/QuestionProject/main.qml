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
    // signal sendOption(string text);

    RowLayout{
        ListView{
            id:list
            height:_root.height
            spacing: 2
            width:_root.width/3.8
            model:QModel
            delegate: QuestionDelegate{id:del
            }
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
                           console.log("******************");
//                                    function onSendIndex(val){
//                                        console.log("Inside the signal handler :"+val);
//                                    }
//                            console.log("getValue :"+rect1.mytext)
                            console.log("Button submit clicked"+_id.text);
                            if(radio1.checked==true){
                                console.log("Button submit clicked"+radio1.text);
                                console.log("Button submit clicked"+radio1.text);
                                QModel.setUserSelect(radio1.text,_id.text);
                                radio1.checked=false;
                            }
                            else if(radio2.checked==true){
                                console.log("Button submit clicked"+radio2.text);
                                QModel.setUserSelect(radio2.text,_id.text);
                                radio2.checked=false;
                            }
                            else if(radio3.checked==true){
                                console.log("Button submit clicked"+radio3.text);
                                QModel.setUserSelect(radio3.text,_id.text);
                                radio3.checked=false;
                            }
                            else if(radio4.checked==true){
                                console.log("Button submit clicked"+radio4.text);
                                QModel.setUserSelect(radio4.text,_id.text);
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
                            QModel.summaryData();
                            popup.open()
                            text2.text= QModel.correctAns;
                            text4.text=QModel.wrongAns;
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
                        text:QModel.getCount()
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
        target: _root
        function onSendIndex(val){
            console.log("Inside the signal handler :"+val);
        }
    }
}
