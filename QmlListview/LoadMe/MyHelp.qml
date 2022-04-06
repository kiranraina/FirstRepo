import QtQuick 2.0

Rectangle {
width: 200;height: 200;color: "red"
y:100;
Component.onCompleted: {
   console.log("I am  rectangle creating..")
}
Component.onDestruction:  {
   console.log("I am rectangle deleting..")
}
}
