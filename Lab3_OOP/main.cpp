#include <iostream>
#include <iomanip>
#include "Func.h"

using namespace std;

int main() {
    system("chcp 65001 > nul");

    int method;
    cout << "Виберіть метод розвязання: \n1. Метод Дихотомії\n2. Метод Ньютона\n> ";
    cin >> method;

    try {
        if (method == 1) {
            double a, b;
            cout << "Вкажіть інтервал [a, b]: ";
            cin >> a >> b;

            dihotomySolver solver(a, b);
            double root = solver.solve();
            cout << "Корінь за методом Дихотомії: " << root << "\n";
        } else if (method == 2) {
            double x0;
            cout << "Введіть початковий приростіс: ";
            cin >> x0;

            NewtonSolver solver(x0);
            double root = solver.solve();
            cout << "Корінь за методом Ньютона: " << root << "\n";
        } else {
            cout << "Невідомий метод\n";
        }
    } catch (const exception& e) {
        cerr << "Помилка: " << e.what() << "\n";
    }

    return 0;
}