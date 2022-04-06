import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Loader{
        id:_ld
    }
    RowLayout{
        Button{
            text:"loadMe"
            onClicked: {
                _ld.source="MyMonitior.qml"
                _ld.item.callMe()
//                _ld.active=false;
            }
        }
        Button{
            text:"Helpme"
            onClicked: {
                _ld.source="MyHelp.qml"
            }
        }
    }
    Connections{
        target: _ld.item
        ignoreUnknownSignals: true
        onCatchMe:{
            console.log("catch the signal")
        }
    }
}
