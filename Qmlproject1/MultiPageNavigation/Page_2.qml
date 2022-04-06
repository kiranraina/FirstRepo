import QtQuick 2.0
import QtQuick.Controls 2.0

BasePage{
    color: "green"
    Button{
    anchors.centerIn: parent
    onClicked: {
        console.log("Page_2.qml clicked")
        myclick("BEL_Page_2.qml")
    }
    text:"Page_2.qml"
    }
    Component.onCompleted: {
    console.log("Page_2.qml created")
    }
    Component.onDestruction:  {
    console.log("Page_2.qml ondestructor")
    }
}
