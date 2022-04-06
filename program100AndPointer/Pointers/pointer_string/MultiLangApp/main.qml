import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Column{
        anchors.fill: parent
        spacing: 10
        Button{
            width:100
            height: 75
            text:qsTr("Welcome")
        }
        Button{
            width:100
            height: 75
            text:qsTr("Edit")
        }
        Button{
            width:100
            height: 75
            text:qsTr("Design")
        }
        Button{
            width:100
            height: 75
            text:qsTr("Debug")
        }
        Button{
            width:100
            height: 75
            text:qsTr("Projects")
        }
        Button{
            width:100
            height: 75
            text:qsTr("Help")
        }
    }
}
//Internatinalization
//qstr(...) for text
//How many langs?HN,KN
//Update PRO file with above
//lupdate command on Pro file-Collect all string
//Linquist tool helps in translation
//lrelease command-Convert string to binary
//add .qm file to resource file
//use QTranslator toload.qm
//installTranlator in app i
// main file add QTranslator in include and QTranslator trans;
//trans.load(":/FR.qm");
//app.installTranslator(&trans);


