#include "Func.h"
#include "iostream"
#include <cmath>

Dychotomia_class::Dychotomia_class()  {

    left_limit = 1;
    right_limit = 2;
    tolerance = 1e-6;
}

Dychotomia_class::~Dychotomia_class()  {}


void Dychotomia_class::setlimits(double left, double right) {
    left_limit = left;
    right_limit = right;
}

void Dychotomia_class::setTolerance(double tol) {
    tolerance = tol;
}

double Dychotomia_class::dichotomymethod() {

    double a = left_limit;
    double b = right_limit;
    double x;

    while (fabs(b - a) > tolerance) {
        x = (a + b) / 2;
        if ( (cos(2/x) - 2 * sin(1/x) + 1/x) > 0)
            b = x;
        else
            a = x;

    }

    return (a + b) / 2;
}

double Dychotomia_class::newtonmethod() {

    double x0 = (left_limit + right_limit) / 2.0;
    double x = x0;

    while (true) {
        double fx = cos(2/x) - 2 * sin(1/x) + 1/x;
        double dfx = (2*sin(2/x)+2*cos(1/x))/pow(x, 2)-1/(x, 2);

        double x_next = x - fx / dfx;

        if (fabs(x_next - x) < tolerance)
            return x_next;

        x = x_next;
    }

}
