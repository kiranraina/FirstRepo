import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 840
    height: 380
    title: qsTr("Hello World")
    color: "black"
    Item {
        anchors.fill: parent
        PathView{
        width:parent.width
        height: 300
        anchors.centerIn: parent
        delegate: PathDelegate{}
        model:10
        path:Path{
            startX:0;startY: 200
            PathAttribute{name:"scale";value:0.5}
            PathAttribute{name:"z";value:1}
            PathAttribute{name:"op";value:0.5}
            PathLine{x:400;y:200;}
            PathAttribute{name:"scale";value:1.0}
            PathAttribute{name:"z";value:5}
            PathAttribute{name:"op";value:1}
            PathLine{x:600;y:200;}
            PathAttribute{name:"scale";value:0.5}
            PathAttribute{name:"z";value:1}
            PathAttribute{name:"op";value:0.5}
            PathLine{x:800;y:200;}
        }
        }
    }
}
