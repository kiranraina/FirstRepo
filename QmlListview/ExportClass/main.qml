import QtQuick 2.6
import QtQuick.Window 2.2
import BossComps 1.0
import QtQuick.Layouts 1.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    BossAuth{
        id:asd
        username: "kiran"
        pass:"kiran@123"
    }
    BossAuth{
        id:b2
        username: "kirankumar"
        pass:"kirankumar@123"
    }
    ColumnLayout{
        RowLayout{
            Text{
                text:asd.username
                font.pixelSize: 20
                color: "orange"
            }
            Text{
                text:asd.pass
                font.pixelSize: 20
                color: "skyblue"
            }

        }
        RowLayout{
            Text{
                text:b2.username
                font.pixelSize: 20
                color: "orange"
            }
            Text{
                text:b2.pass
                font.pixelSize: 20
                color: "skyblue"
            }

        }
    }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("username"+asd.username);
            console.log("password"+asd.pass);
            console.log("username"+b2.username);
            console.log("password"+b2.pass);
        }
    }
}
