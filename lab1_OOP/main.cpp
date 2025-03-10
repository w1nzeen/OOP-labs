#include <iostream>
#include "Func.h"

using namespace std;

int main() {
    Price total{0,0};

    FILE* file = fopen("C:/Users/w1nzeen/Desktop/CLion proj/OOP_labs/lab1_OOP/prices.txt", "r");

    if (!file) {
        cout << "File could not be opened" << endl;
        return 1;
    }

    int h, k, quantity;
    while (fscanf(file, "%d %d %d", &h, &k, &quantity) == 3) {
        if (h<0 || k< 0 || quantity<0) continue;

        Price itemPrice{h, static_cast<short>(k)};
        Price cost{0,0};
        multiplyPrices(cost, itemPrice, quantity);
        addPrices(total, total, cost);
    }

    cout << "Total bill amount: " << total.hryvnia << " hrn " << total.kopiykas << " kop " << endl;

    roundToNationalBank(total);

    cout << "Total rounded bill amount: " << total.hryvnia << " hrn " << total.kopiykas << " kop " << endl;

    fclose(file);

    return 0;
}