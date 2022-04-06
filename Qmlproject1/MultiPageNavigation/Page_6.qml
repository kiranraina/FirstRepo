import QtQuick 2.0
import QtQuick.Controls 2.0
BasePage{
    color: "brown"
    Button{
    anchors.centerIn: parent
    onClicked: {
        console.log("Page_6.qml clicked")
        myclick("BEL_Page_6.qml")
    }
    text:"Page_6.qml"
    }
    Component.onCompleted: {
    console.log("Page_6.qml created")
    }
    Component.onDestruction:  {
    console.log("Page_6.qml ondestructor")
    }
}
