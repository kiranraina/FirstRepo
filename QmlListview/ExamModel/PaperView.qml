import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
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
