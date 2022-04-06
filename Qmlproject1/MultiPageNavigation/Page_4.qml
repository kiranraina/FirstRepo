import QtQuick 2.0
import QtQuick.Controls 2.0
BasePage{
    color: "orange"
    Button{
    anchors.centerIn: parent
    onClicked: {
        console.log("Page_4.qml clicked")
        myclick("BEL_Page_4.qml")
    }
    text:"Page_4.qml"
    }
    Component.onCompleted: {
    console.log("Page_4.qml created")
    }
    Component.onDestruction:  {
    console.log("Page_4.qml ondestructor")
    }
}
