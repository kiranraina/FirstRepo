import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
Window {
    id:_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
       property Component comp;
//    Loader{
//        id:load
//    }
    ColumnLayout{
        Button{id:btn1;text:"page1";onClicked:
            {
                console.log("button 1 clicked");navi.callMe()
            }
        }
        Button{text:"page2";onClicked:
            {
                console.log("button 2 clicked");navi.callMe()
            }
        }
        Button{text:"page3";onClicked:
            {
                console.log("button 3 clicked");navi.callMe()
            }
        }
        Button{text:"page4";onClicked:
            {
                console.log("button 4 clicked");navi.callMe()
            }
        }
    }
    Connections{
        target:navi
        onLoadNext:{
            console.log("catch the load next")
            comp=Qt.createComponent(url)
            if(comp.status===Component.Ready){
                console.log("file raedy")
            }
            var obj=comp.createObject(_root);
//            load.source=url
        }
    }
}
