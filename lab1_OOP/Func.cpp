#include "Func.h"
#include <iostream>
using namespace std;


money normalize(const money& a)
{
    money result = a;
    if (result.kop >= 100) {
        result.grn += result.kop / 100;
        result.kop = result.kop % 100;
    }
    return result;
}

money sum(const money& a, const money& b)
{
    money result;
    result.kop = a.kop + b.kop;
    result.grn = a.grn + b.grn;

    return normalize(result);
}

money mult(const money& a, int b)
{
    money result;
    result.kop = a.kop * b;
    result.grn = a.grn * b;

    return normalize(result);
}

money roundToNationalBank(const money& a)
{
    money result = a;
    if (a.kop % 10 >= 5) {
        result.kop = (a.kop / 10) * 10 + 10;
    } else {
        result.kop = (a.kop / 10) * 10;
    }

    return normalize(result);
}

void to_string(const money& a)
{
    cout << a.grn << " grn " << a.kop << " kop" << endl;
}
