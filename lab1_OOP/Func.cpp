#include "Func.h"
#include <cmath>

void normalize(Price& price) {
    if (price.kopiykas >= 100) {
        price.hryvnia += price.kopiykas / 100;
        price.kopiykas %= 100;
    }
}

void addPrices(Price& result, const Price& a, const Price& b) {
    result.hryvnia += a.hryvnia + b.hryvnia;
    result.kopiykas += a.kopiykas + b.kopiykas;

    normalize(result);
}

void multiplyPrices(Price &result, const Price &price, int multiplier) {
    int sumInKopiykas = (price.hryvnia * 100 + price.kopiykas) * multiplier;
    result.hryvnia = sumInKopiykas / 100;
    result.kopiykas = sumInKopiykas % 100;
}

int roundToNationalBank(Price &price) {
    int remainder = price.kopiykas % 10;

    if (remainder < 5) price.kopiykas -= remainder;
     else price.kopiykas += (10 - remainder);

    normalize(price);

    return price.hryvnia * 100 + price.kopiykas;
}
