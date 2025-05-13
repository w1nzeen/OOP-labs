#include "Func.h"
#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul");

    // Метод дихотомії
    Dychotomia_class* dyh = new Dychotomia_class();
    dyh->setLimits(1, 2);
    dyh->setTolerance(1e-6);
    double root_dichotomy = dyh->solve();
    cout << "Корінь з методом Дихотомії: " << root_dichotomy << endl;
    delete dyh;

    // Метод Ньютона
    Newton_class* newton = new Newton_class();
    newton->setInitialGuess(0.9);
    newton->setTolerance(1e-6);
    double root_newton = newton->solve();
    cout << "Корінь з методом Ньютона: " << root_newton << endl;
    delete newton;

    return 0;
}