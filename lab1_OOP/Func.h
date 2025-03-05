#ifndef FUNC_H
#define FUNC_H

struct Price {
    int hryvnia;
    int kopiykas;

    Price();
    Price(int h, int k);

    void normalize();
    Price operator+(const Price& other) const;
    Price operator*(double multiplier) const;
    Price roundToNationalBank() const;
};

#endif