import QtQuick 2.6
import QtQuick.Controls 2.2
import QtQuick.Window 2.3

ApplicationWindow {

    id: applicationWindow

    visible: true
    width: 600
    height: 400
    title: qsTr("My App")

    Text {
        id : i

        Component.onCompleted: {
        console.log("name===="+classObj.mystr.name1)

        //EDIT added more code to explain the use case.
        classObj.myStr.name1 = "abc"  //Calls setter
        classObj.mystr.name2 = "ans" // Calls setter
        }
    }

    Connections {
        target: myclass

        onMyStructChanged: {
            i.text = classObj.strObj.val
        }
    }

}
