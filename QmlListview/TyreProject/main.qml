import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0

Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Component{
        id:comp
        Rectangle{
            width: _root.width
            height:_root.height
            color: "orange"
            ColumnLayout{

                height: 300
                width:300
                anchors.centerIn: parent
                Rectangle{
                     anchors.fill: parent
                    Image {
                        source:image
                        anchors.fill: parent

                    }
                }

                Text{
                    text:"number:-  "+number
                    color: "white"
                }
                Text{
                    text:"presure:-  "+pressure
                     color: "white"
                }
                Text{
                    text:"width:-   "+width
                    color: "white"
                }
                Text{
                    text:"radius:-  "+radius
                    color: "white"
                }
            }
            //            }
        }
    }
    ListView{
        anchors.fill: parent
        model:Tyres{}
        delegate: comp
        orientation:ListView.Horizontal
    }
}
