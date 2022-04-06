import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Button {
    signal sendObject(var val);
    id:cityBtn
     text:city
     font.pixelSize: 20
     background: Rectangle{
         color:"transparent"
     }
}


