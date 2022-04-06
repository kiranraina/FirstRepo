import QtQuick 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
import MyQuestion 1.0
Rectangle{
    id:rect1
    height:_root.height/3
    width:_root.width/4
    color: "orange"
    signal sendIndex(int val);
    property string mytext: question.text

    ColumnLayout{
        anchors.fill: parent
        Label{
            id:question
            anchors.fill: parent
            text:index
            font.pixelSize: 20
            color: "white"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("list clicked")
                    sendIndex(question.text)
                    console.log("Signal emitted");
                    rect2.visible=true;
                    var obj =QModel.getObjectQuestion(index);
                    console.log(obj.question())
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
                    console.log(QModel.getCount());
                    if(index==(QModel.getCount()-1)){
                        closed.visible=true;
                    }
                }
            }
        }
    }

}
