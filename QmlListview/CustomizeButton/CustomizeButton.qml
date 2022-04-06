import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    RowLayout{
        B_Button{
            text:"Customize"
            onClicked: {
                console.log("Button");
            }
        }
        B_Label{
            text:"Button"
            onClicked: {
                console.log("b_label clicked called");
            }
            onPressed:  {
                console.log("b_label pressed called");
            }
        }
    }
}
