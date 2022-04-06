import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Rectangle{
    id:rect
    width: 300;
    height:parent.height;
    color:"yellow"

    signal selectedVal(string val);

    property int idx:index

    property string qn:"No Question"
    property string opt1:"No Question"
    property string opt2:"No Question"
    property string opt3:"No Question"
    property string opt4:"No Question"

    property string checkedString :r1.checked ==true ?r1.text:r2.checked ==true?
                                                           r2.text:r3.checked==true?r3.text:
                                                                                     r4.checked == true?r4.text:"TINA";
    ColumnLayout{
        anchors.fill:parent
        //        anchors.centerIn: parent
        Label{
            id:_qtn
            text:qn
        }
        RadioButton{id:r1;text:opt1}
        RadioButton{id:r2;text:opt2}
        RadioButton{id:r3;text:opt3}
        RadioButton{id:r4;text:opt4}
        Button{
            text:"Submit"
            onClicked:{
                qmodel.save(myindex,checkedString);
                if(checkedString == "TINA"){
                   console.log("INCORRECT ANSWER");
                }else{

                    clickMe(checkedString)
                }
            }
        }

    }
}
