import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    width: 400
    height: 500
    visible: true
    title: qsTr("Hello World")
    color:"grey"
    Rectangle
    {
        id:mainRec
        width: parent.width
        height: parent.height-150
        anchors.bottom: parent.bottom
    Grid{
        anchors.fill: parent
        spacing: 5
        columns: 4
        Rectangle{
            id:r1
            width: 75
            height: 75
            color:"yellow"
    }
        Rectangle{
            id:r2
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r3
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r4
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r5
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r6
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r7
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r8
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r9
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r10
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r11
            width: 75
            height:75
            color:"yellow"
    }
        Rectangle{
            id:r12
            width: 75
            height:75
            color:"yellow"
    }
    }
    }
}

