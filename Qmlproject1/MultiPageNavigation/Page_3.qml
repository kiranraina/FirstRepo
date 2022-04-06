import QtQuick 2.0
import QtQuick.Controls 2.0
BasePage{
    color: "yellow"
    Button{
    anchors.centerIn: parent
    onClicked: {
        console.log("Page_3.qml clicked")
        myclick("BEL_Page_3.qml")
    }
    text:"Page_3.qml"
    }
    Component.onCompleted: {
    console.log("Page_3.qml created")
    }
    Component.onDestruction:  {
    console.log("Page_3.qml ondestructor")
    }
}
