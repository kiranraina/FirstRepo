import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import MyPerson 1.0

    ColumnLayout{
        width: _root.width
        height:_root.height
        Label{
            text:index
            color: "red"
        }
        Label{
            text:MyObj.getData(index).Name
            color: "red"
        }
        Label{
            text:MyObj.getData(index).Age
            color: "red"
        }
        Label{
            text:MyObj.getData(index).Gender
            color: "red"
        }
        Label{
            text:MyObj.getData(index).Phone
            color: "red"
        }

    }

