#include "Func.h"
#include <iostream>
using namespace std;

void normalize(money& result)
{
    if (result.kop >= 100) {
        result.grn += result.kop / 100;
        result.kop = result.kop % 100;
    }
}

void sum(money& a, const money& b)
{
    a.kop += b.kop;
    a.grn += b.grn;
    normalize(a);
}

void mult(money& a, int b)
{
    a.kop *= b;
    a.grn *= b;
    normalize(a);
}

void roundToNationalBank(money& a)
{
    if (a.kop % 10 >= 5) {
        a.kop = (a.kop / 10) * 10 + 10;
    } else {
        a.kop = (a.kop / 10) * 10;
    }
    normalize(a);
}

string to_string(const money& a)
{
    return to_string(a.grn) + " grn " + to_string(a.kop) + " kop";
}
