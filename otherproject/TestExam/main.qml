import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    id:win
    width: 640
    height: 480
    visible: true
    title: qsTr("Summary =")+qmodel.right+" "+qmodel.wrong;
    Component{
        id: c1
        Button{id: b1;width:150; height: 100; text:index; onClicked:sendVal(index)
            signal sendVal(int val);
            Connections{
                target: b1
                onSendVal:{
                    var qnobj = qmodel.getQn(index);
    //                qn1.idx =myindex
                    console.log("Index"+index)
                    qn1.qn = qnobj.qn
                    qn1.opt1 = qnobj.opt1
                    qn1.opt2 = qnobj.opt2
                    qn1.opt3 = qnobj.opt3
                    qn1.opt4 = qnobj.opt4
                }
            }
        }
    }
//    function func(){
//        myindex = idx;
//    }

property int myindex

    RowLayout{
        anchors.fill:parent
        ListView{
            id:list
            spacing: 2
            model:qmodel
            delegate:c1
            Layout.fillWidth: true
            Layout.preferredWidth: 100
            Layout.fillHeight: true
        }
        MyQunDelegateModel{
            id:qn1
            Layout.fillWidth: true
            Layout.preferredWidth: 100
            Layout.fillHeight: true
        }



        Connections{
            target:qn1
            onClickMe:{
                myindex = idx
                console.log("selected ans ="+val)
                qmodel.save(val)
                qmodel.summary();
            }
        }

    }
}
