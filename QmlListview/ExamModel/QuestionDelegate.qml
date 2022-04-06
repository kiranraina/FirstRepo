import QtQuick 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
import MyQuestion 1.0
Rectangle{
    id:rect1
    height:_root.height/3
    width:_root.width/5
    color: "orange"
    property int myIndex

//    property string text: question.text
    signal sendIndex(int val)
    ColumnLayout{
        anchors.fill: parent
        Label{
            id:question
            anchors.fill: parent
            text:list1.sname+"_Q"+(index+1);
            color: "white"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    inst.visible=false;
                    rect2.visible=true;
                    sendIndex(index);
                    console.log("list clicked")
                    var obj =list1.model.getObjectQuestion(index);
                    ques.text= obj.question();
                    _id.text=obj.id();
                    radio1.text=obj.option1();
                    radio2.text=obj.option2();
                    radio3.text=obj.option3();
                    radio4.text=obj.option4();
                    radio1.checked=false;
                    radio2.checked=false;
                    radio3.checked=false;
                    radio4.checked=false;
                    console.log(index);
                    console.log(list1.model.getCount());
                    if(index==(list1.model.getCount()-1)){
                        closed.visible=true;
                    }
                }
            }
        }
    }
}
