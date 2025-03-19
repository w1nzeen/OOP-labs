#pragma once
#include <string>
using namespace std;

struct money {
    int grn;
    int kop;
};

void normalize(money& result);
void sum(money& a, const money& b);
void mult(money& a, int b);
void roundToNationalBank(money& a);
string to_string(const money& a);
