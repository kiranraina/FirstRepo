import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Window {
    id:_win
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Component{
        id:c1
        Rectangle{width:400;height: 80;color: "orange"
            RowLayout{
                anchors.fill:parent
                Text{
                    text:index
                    Layout.minimumWidth: 100
                }
                Text{
                    text:movieName
                    Layout.minimumWidth: 100
                }
                Text{
                    text:rating
                    Layout.minimumWidth: 100
                }
            }
        }
    }
    Component{
        id:c2
        Rectangle{width:400;height: 80;color: "pink"

              ColumnLayout{
                Text{
                    text:index
                    Layout.minimumWidth: 100
                }

                RowLayout{
                    spacing: 30
                Text{
                    text:movieName
                    Layout.minimumWidth: 100
                }
                Text{
                    text:rating
                    Layout.minimumWidth: 100
                }
            }
            }
        }
    }
    ListModel{
        id:mymodel
        ListElement{
            movieName:"james"
            rating:3
        }
        ListElement{
            movieName:"pushpa"
            rating:4
        }
        ListElement{
            movieName:"Beast"
            rating:4.5
        }
        ListElement{
            movieName:"kashmir file"
            rating:2
        }
        ListElement{
            movieName:"paramathma"
            rating:2.5
        }
        ListElement{
            movieName:"kgf"
            rating:4.5
        }
        ListElement{
            movieName:"kgf2"
            rating:3.5
        }
    }
    ColumnLayout{
        id:col1
        anchors.fill:parent
        ListView{
            spacing: 2
            id:list1
            width: parent.width
            height: parent.height-100;
            model:mymodel
            delegate: c1
        }
        RowLayout{
            id:row1
            anchors.bottom:parent.bottom;
            anchors.bottomMargin: 10
            anchors.topMargin: 10
            Button{id:btn1; text:"Insert";onClicked: insertData()}
            Button{id:btn2; text:"print";onClicked: printData()}
            Button{id:btn3; text:"Delete";onClicked: deleteData()}
            Button{id:btn4; text:"Append";onClicked: appendData()}
            Button{id:btn5; text:"Row";onClicked: rowData()}
            Button{id:btn6; text:"Column";onClicked: columnData()}
        }
    }
    function rowData(){
        console.log("rowData");
       list1.delegate=c1;
    }
    function columnData(){
        console.log("columnData");
       list1.delegate=c2;
    }

    function insertData(){
        console.log("insertData");
        var el={movieName:"Maran",rating:1.4}
        mymodel.insert(2,el);

    }
    function printData(){
        console.log("printData");
        for(var i=0;i<mymodel.count;i++){
            var listE=mymodel.get(i);
            console.log("Movie name"+listE.movieName+"-> "+"Ratings="+listE.rating);
        }
    }
    function deleteData(){
        console.log("deleteData");
        mymodel.remove(3,2);
    }
    function appendData(){
        console.log("appendData");
        var el={movieName:"valimai",rating:1.8}
        mymodel.append(el);
    }
}
