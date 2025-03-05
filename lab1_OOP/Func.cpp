#include "Func.h"

#include <cmath>

Price::Price() : hryvnia(0), kopiykas(0) {}

Price::Price(int h, int k) : hryvnia(h), kopiykas(k) {
    normalize();
}

void Price::normalize() {
    if (kopiykas >= 100) {
        hryvnia += kopiykas / 100;
        kopiykas %= 100;
    }
}

Price Price::operator+(const Price& other) const {
    Price result(hryvnia + other.hryvnia, kopiykas + other.kopiykas);
    result.normalize();
    return result;
}

Price Price::operator*(double multiplier) const {
    double totalKop = (hryvnia * 100 + kopiykas) * multiplier;
    int roundedTotal = static_cast<int>(round(totalKop));
    return Price(roundedTotal / 100, roundedTotal % 100);
}

Price Price::roundToNationalBank() const {
    Price newPrice(hryvnia, kopiykas);
    int remainder = newPrice.kopiykas % 10;
    if (remainder < 5)
        newPrice.kopiykas -= remainder;
    else
        newPrice.kopiykas += (10 - remainder);

    if (newPrice.kopiykas >= 100) {
        newPrice.hryvnia += newPrice.kopiykas / 100;
        newPrice.kopiykas %= 100;
    }
    return newPrice;
}