import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 840
    height: 480
    title: qsTr("Hello World")
    Item {
        anchors.fill: parent
        PathView{
        width:parent.width
        height: 300
        anchors.centerIn: parent
        delegate: InstaDelegate{}
        model:4
        path:Path{
            startX: 400;startY: 150
            PathAttribute{name:"scale";value:0.5}
            PathQuad{x:50;y:250;controlX: 200;controlY: 50}
            PathAttribute{name:"scale";value:0.75}
            PathQuad{x:400;y:450;controlX: 50;controlY: 350}
            PathAttribute{name:"scale";value:1.0}
            PathQuad{x:800;y:250;controlX: 650;controlY: 350}
            PathAttribute{name:"scale";value:0.75}
            PathQuad{x:400;y:150;controlX: 650;controlY: 50}
            PathAttribute{name:"scale";value:0.5}

        }
        }
    }
}
