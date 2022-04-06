import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Rectangle{
    width: parent.width
    height: 200;
    color: "blue"
    ColumnLayout{
        anchors.fill: parent
        Label{
            text:index
            color: "white"
        }
        Label{
            text:tyrename
            color: "white"
        }
        Label{
            text:tireNumber
            color: "white"
        }
        Label{
            text:radius
            color: "white"
        }
        Label{
            text:width
            color: "white"
        }
        Label{
            text:colo
            color: "white"
        }
        Label{
            text:pressure
            color: "white"
        }
        Image{
           source:image
        }

    }
}
