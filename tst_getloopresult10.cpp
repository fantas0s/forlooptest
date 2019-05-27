#include <QtTest>
#include "forloops.h"

class getLoopResult10 : public QObject
{
    Q_OBJECT

public:
    getLoopResult10();
    ~getLoopResult10();

private slots:
    void testAllTypes();

};

getLoopResult10::getLoopResult10()
{

}

getLoopResult10::~getLoopResult10()
{

}

void getLoopResult10::testAllTypes()
{
    const int sumUpTo5 = 1 + 2 + 3 + 4 + 5;
    const int sumUpTo10 = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
    ForLoops testObject;
    QCOMPARE(testObject.sumInForLoop(5), sumUpTo5);
    QCOMPARE(testObject.sumInForLoop(10), sumUpTo10);
    QCOMPARE(testObject.sumInCompressedForloop(5), sumUpTo5);
    QCOMPARE(testObject.sumInCompressedForloop(10), sumUpTo10);
    QCOMPARE(testObject.sumInDoWhileLoop(5), sumUpTo5);
    QCOMPARE(testObject.sumInDoWhileLoop(10), sumUpTo10);
    QCOMPARE(testObject.sumInWhileLoop(5), sumUpTo5);
    QCOMPARE(testObject.sumInWhileLoop(10), sumUpTo10);
    QCOMPARE(testObject.sumIteratively(5), sumUpTo5);
    QCOMPARE(testObject.sumIteratively(10), sumUpTo10);
}

QTEST_APPLESS_MAIN(getLoopResult10)

#include "tst_getloopresult10.moc"
