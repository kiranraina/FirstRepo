import QtQuick 2.0
import QtQuick.Controls 2.0

BasePage{
    width: 100;height:500;border.color: "red";border.width: 1
    color: "blue"
    Button{
        anchors.centerIn: parent
        onClicked: {
            console.log("Page_1.qml clicked")
            myclick("BEL_Page_1.qml")
        }
        text:"Page_1.qml"
    }
    Component.onCompleted: {
        console.log("Page_1.qml created")
    }
    Component.onDestruction:  {
        console.log("Page_1.qml ondestructor")
    }
}
