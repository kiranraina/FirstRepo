import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "black"
    function loadNewPage(newpage){
        console.log("Load the page"+newpage);
        ld.source =newpage;
    }
    Loader{
        id:ld
        anchors.left: r1.right
        anchors.right: parent.right
    }
    function catchMe(val){
        console.log("signal Caught"+val);
    }
    Connections{
        target:ld.item
        onMyclick:{
            catchMe(value);
        }

    }
    Rectangle{
        id:r1
        width: 100;height: parent.height;border.color: "red";border.width: 1
        color: "gray"
        Column{
            anchors.fill: parent
            spacing: 10
            Button{ text:"Welcome"
                onClicked: {
                    loadNewPage("Page_1.qml")
                }
            }
            Button{ text:"Edit"
                onClicked: {
                    loadNewPage("Page_2.qml")
                }}
            Button{ text:"Design"
                onClicked: {
                    loadNewPage("Page_3.qml")
                }}
            Button{ text:"Debug"
                onClicked: {
                    loadNewPage("Page_4.qml")
                }
            }
            Button{ text:"Projects"
                onClicked: {
                    loadNewPage("Page_5.qml")
                }
            }
            Button{ text:"Help"

                onClicked: {
                    loadNewPage("Page_6.qml")
                }
            }
        }
    }
}
