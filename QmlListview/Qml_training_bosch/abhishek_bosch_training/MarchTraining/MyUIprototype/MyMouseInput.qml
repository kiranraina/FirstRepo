import QtQuick 2.0

Rectangle{
    width: 400
    height: 500
    color:"#334455"
    Rectangle{
        width: 100
        height: 100
        color:"#778899"
        anchors.centerIn: parent
            MouseArea
            {
               anchors.fill: parent
                onClicked: {
                    console.log("mouse clicked"+mouse.x+"  "+mouse.y)
                    handleClick();
                }
                onPressed: {
                    console.log("mouse pressed")
                    handlePress();
                }
                onReleased:  {
                    console.log("mouse released")
                    handleRelease();
                }
        }

    }
    function  handleClick()
    {
         console.log("fun clicked")
    }
    function  handlePress()
    {
         console.log("fun press")
    }
    function  handleRelease()
    {
         console.log("fun release")
    }
}
