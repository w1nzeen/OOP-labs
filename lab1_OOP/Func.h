#ifndef FUNC_H
#define FUNC_H

struct Price {
    int hryvnia;
    short kopiykas;
};

void normalize(Price& price);

void addPrices(Price& result, const Price& a, const Price& b);

void multiplyPrices(Price& result, const Price& price, int multiplier);

int roundToNationalBank(Price& price);
#endif