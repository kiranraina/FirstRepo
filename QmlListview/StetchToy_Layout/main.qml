import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    RowLayout{
        width: parent.width
        height: 100
        Button{
        text:"New"
        Layout.fillWidth: true
        Layout.minimumWidth: 100
        Layout.maximumWidth: 150
        }
        Button{
        text:"Save"
        Layout.fillWidth: true
        Layout.minimumWidth: 100
        Layout.maximumWidth: 250
        }
        Button{
        text:"Save"
        Layout.fillWidth: true
        Layout.minimumWidth: 100
        Layout.maximumWidth: 250
        }
    }
}
