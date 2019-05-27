#include "forloops.h"

ForLoops::ForLoops()
{
}

int ForLoops::sumInForLoop(int num) const
{
    int returnValue = 0;
    int current = 0;
    for( int loop = 0 ; loop < num ; ++loop ) {
        current++;
        returnValue = returnValue + current;
    }
    return returnValue;
}

int ForLoops::sumInCompressedForloop(int num) const
{
    int returnValue = 0;
    for( int loop = 0 ; loop < num ; returnValue += ++loop);
    return returnValue;
}

int ForLoops::sumInDoWhileLoop(int num) const
{
    int returnValue = 0;
    int loop = 0;
    do {
        loop++;
        returnValue += loop;
    } while (loop < num);
    return returnValue;
}

int ForLoops::sumInWhileLoop(int num) const
{
    int returnValue = 0;
    int loop = 0;
    while (loop < num) {
        loop++;
        returnValue += loop;
    }
    return returnValue;
}

int ForLoops::sumIteratively(int num, int loop) const
{
    return ++loop < num ? sumIteratively(num, loop) + loop : loop;
}
