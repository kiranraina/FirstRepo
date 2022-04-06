import QtQuick 2.0
import QtQuick.Controls 2.0
BasePage{
    color: "skyblue"
    Button{
    anchors.centerIn: parent
    onClicked: {
        console.log("Page_5.qml clicked")
        myclick("BEL_Page_5.qml")
    }
    text:"Page_5.qml"
    }
    Component.onCompleted: {
    console.log("Page_5.qml created")
    }
    Component.onDestruction:  {
    console.log("Page_5.qml ondestructor")
    }
}
