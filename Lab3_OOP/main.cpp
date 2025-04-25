#include "Func.h"
#include <iostream>

using namespace std;
int main() {
    system("chcp 65001 > nul");
    Dychotomia_class * dyh = new Dychotomia_class();

    dyh -> setlimits(1, 2);
    dyh -> setTolerance(1e-6);


    double root_dichotomy = dyh -> dichotomymethod();
    cout << "Корінь з методом Дихотомії: " << root_dichotomy << endl;


    double root_newton = dyh-> newtonmethod();
    cout << "корінь з методом Ньютона: " << root_newton << endl;

    return 0;
}
