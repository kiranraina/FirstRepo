import QtQuick 2.0

Rectangle {
    id:row_rect2
    height: parent.height
    width: parent.width/1.34
    color: "black";
    radius: parent.width/200
    Column{
        id:row_rect2_col1
        anchors.centerIn: parent
        spacing: (row_rect2.width+row_rect2.height)/250
        Journey{}
        Row{
            spacing: (row_rect2.width+row_rect2.height)/250
            id:row_rect2_col2
            Battery{}
            Weather{}
        }
    }
}

