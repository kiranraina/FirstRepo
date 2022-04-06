import QtQuick 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
Rectangle{
    id:rect1
    height:_root.height/3
    width:_root.width/4
    color: "orange"
    ColumnLayout{
        anchors.fill: parent
        Label{
            text:carModel
        }
        Label{
            text:index
        }
        Rectangle{
            height:100
            width:100
            Image{
                anchors.fill: parent
                source:image
            }
        }

    }
    MouseArea{
        anchors.fill: rect1
        onClicked: {
            console.log("list clicked")
            rect2.visible=true;
            console.log(index);
            img1.source=car.getImage(index);
        }
    }
}


