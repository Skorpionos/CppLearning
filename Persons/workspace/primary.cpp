#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

void Primary()
{
    size_t i = 0;

    while (i < 1000000000) i++;

    clock_t time1 = clock();

    cout  <<"time1=" << time1 << endl;

    while (i < 10000000000) i++;
    cout << "i=" << i << endl;

    clock_t time2 = clock();
    cout  <<"time2=" << time2 << endl;

    clock_t dtime = time2 - time1;
    cout  <<"dtime=" << dtime << endl;

    cout << "CLOCKS_PER_SEC=" << CLOCKS_PER_SEC << endl;
    cout << "time=" <<(double)dtime / CLOCKS_PER_SEC << " s" << endl;
}
