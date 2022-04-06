import QtQuick 2.5
import QtQuick.Window 2.0
Window {
    id:w1
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangles{
         txt:"New"
         color:"Green"
    }
    Rectangles{
         txt:"Save"
         color:"Green"
         x:80
    }
    Rectangles{
         txt:"Undo"
         color:"red"
         x:160
    }
    Rectangles{
         txt:"Erase"
          color:"red"
         x:240
    }
    Rectangles{
         txt:"Size"
          color:"red"
         x:320
    }
    Rectangles{
         txt:"Vibration"
          color:"red"
         x:400
    }
    Rectangles{
         txt:"delete"
          color:"red"
         x:480
    }
}
