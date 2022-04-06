import QtQuick 2.0
import QtQuick.Window 2.0

Window{
    visible: true
    width:640
    height: 600
    Rectangle{
        width: 640
        height: 600


        focus: true
        color: "green"
        Image {
            id:im1
            source: "rocket.png"
            width: 200
            height: 200
            x:100
            y:100
        }

    Keys.onPressed: {
        console.log("pressed")
        if(event.key==Qt.Key_Left){
            console.log("leftkey has been pressed")
        }
        if(event.key==Qt.Key_Right)
        {
            console.log("right key is pressed");
        }
    }
    Keys.onLeftPressed: {
        console.log("specific left-key has been pressed")
        im1.rotation-=10
    }
//    Keys.onRightPressed: {
//        console.log("specific right-key has been pressed")
//        im1.rotation+=10
//    }

    Keys.onDownPressed:
    {
        console.log("specific down-key has been pressed")
        im1.y+=10

    }
    Keys.onUpPressed:
    {
        console.log("specific up-key has been pressed")
        im1.y-=10

    }


//    Keys.onReleased: {
//        console.log("key has been released");
//    }
}
}
