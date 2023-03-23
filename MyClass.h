#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>
using namespace std;

struct MyStruct {
Q_GADGET
int m_val;
QString m_name1;
QString m_name2;
QString m_name3;
QString m_name4;
Q_PROPERTY(int val MEMBER m_val)
Q_PROPERTY(QString name1 MEMBER m_name1)
Q_PROPERTY(QString name2 MEMBER m_name2)
Q_PROPERTY(QString name3 MEMBER m_name3)
Q_PROPERTY(QString name4 MEMBER m_name4)
};

Q_DECLARE_METATYPE(MyStruct)

class MyClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(MyStruct mystr READ getMyStruct
                WRITE setMyStruct NOTIFY myStructChanged)

public:
    explicit MyClass(QObject *parent = Q_NULLPTR);
    MyStruct strObj;

    // Edit: changed get function
    MyStruct getMyStruct() const
    {
        return strObj;
    }

    // Edit: Added set function
    void setMyStruct(MyStruct val)
    {
        strObj = val;
        emit myStructChanged();
    }

signals:
    void myStructChanged();

};

#endif // MYCLASS_H
