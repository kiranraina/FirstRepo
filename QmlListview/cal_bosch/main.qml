import QtQuick 2.6
import QtQuick.Window 2.2
Window {
    id:main
    visible: true
    width: 300
    height: 480
    title: qsTr("Hello World")
    Column{
    Rectangle{
        id:display
        width:main.width
        height: parent.height/8
        color: "skyblue"
        Text{
            id:textdisplay
            text:"hello world"
            font.pixelSize: 25
            height: parent.height/10;
            width: parent.width
            color: "white"
            anchors.verticalCenter: parent.verticalCenter
        }
    }
    Grid{
        columns:4
        rows:5
        Square{id:b1;txt:"AC"}
        Square{id:b2;txt:"+/-"}
        Square{id:b3;txt:"%"}
        Square{id:b4;txt:"/"}
        Square{id:b5;txt:"7"}
        Square{id:b6;txt:"8"}
        Square{id:b7;txt:"9"}
        Square{id:b8;txt:"X"}
        Square{id:b9;txt:"4"}
        Square{id:b10;txt:"5"}
        Square{id:b11;txt:"6"}
        Square{id:b12;txt:"-"}
        Square{id:b13;txt:"1"}
        Square{id:b14;txt:"2"}
        Square{id:b15;txt:"3"}
        Square{id:b16;txt:"+"}
        Square{id:b17;txt:"0"}
        Square{id:b18;txt:"*"}
        Square{id:b19;txt:"."}
        Square{id:b20;txt:"="}

//        Rectangle { id:rect1;border.width:main.width/210;border.color:"gray" ;color:"white"; width:main.width/8.1; height: main.width/8.1;Text{id:t1;text:"AC";anchors.centerIn:parent}}

    }
    }
    Connections{
        target: b1
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b2
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b3
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b4
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b5
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b6
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b7
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b8
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b9
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b10
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b11
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b12
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b13
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b14
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b15
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b16
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b17
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b18
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b19
        onSendValue:{
            console.log("Data"+value);
        }
    }
    Connections{
        target: b20
        onSendValue:{
            console.log("Data"+value);
        }
    }
}
