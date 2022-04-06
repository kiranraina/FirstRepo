import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Window {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    StackView {
        id: stack
        initialItem: mainView
        anchors.fill: parent
    }

    Component {
        id: mainView

        Row {
            spacing: 10

            Button {
                text: "Push"
                onClicked: stack.push(mainView)
            }
            Button {
                text: "Pop"
                enabled: stack.depth > 1
                onClicked: stack.pop()

            }
            Text {
                text: stack.depth
            }
        }
    }
}
