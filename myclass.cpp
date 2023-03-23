#include "myclass.h"

MyClass::MyClass(QObject * parent) : QObject(parent)
{

}

MyStruct MyClass::getMyStruct()
{
    return strObj;
}

void MyClass::setMyStruct(MyStruct val)
{
    for(int i = 0; i < 5; i++)
    {
        strObj.m_val = i;
        strObj.m_name1 = "Hello";
        strObj.m_name2 = "World";
        strObj.m_name3 = "From";
        strObj.m_name4 = "Canada";
        emit myStructChanged();
    }

//    strObj = val;
//    emit myStructChanged();
}
