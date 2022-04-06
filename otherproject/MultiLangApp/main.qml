import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Controls 2.0


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Column{
//        anchors.fill: parent
        spacing: 10
        Button{
            text: qsTr("Welcome")
        }Button{
            text: qsTr("Edit")
        }Button{
            text: qsTr("Design")
        }Button{
            text: qsTr("Debug")
        }Button{
            text: qsTr("Projects")
        }Button{
            text: qsTr("Help")
        }
    }
}

//Internalization
//qsTr(" ") for text
//How many langs ? Hindi , Kannada, Telugu
//Update Pro file with above
//lupdate command - Collects all string
//Linguist tool helps in translations
//lrelease command - converts
