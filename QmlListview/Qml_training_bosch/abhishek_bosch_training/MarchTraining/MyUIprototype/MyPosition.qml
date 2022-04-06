import QtQuick 2.0

Rectangle{
    width: 600
    height: 500
    color:"red"

    function printMe()
    {
           console.log("In print me function")
        var myvalue=10;
        return myvalue;
    }

    property int myw: 75
    Row{
        spacing:5
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
        Rectangle{
            width: 100
            height: 100
            color:"yellow"
    }
}
    Component.onCompleted:  {
        console.log("Welcome to first script")
        var retVal = printMe();
        console.log("ret value ="+retVal)

    }
}
