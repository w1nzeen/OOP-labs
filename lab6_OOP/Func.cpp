#include "Func.h"
#include <iostream>
#include <cmath>
#include <functional>

EquationSolver::EquationSolver() : tolerance(0.0) {}

void EquationSolver::setTolerance(double tol) {
    tolerance = tol;
}

Dychotomia_class::Dychotomia_class() {
    fx = [](double x) { return cos(2/x) - 2 * sin(1/x) + 1/x; };
}

Dychotomia_class::~Dychotomia_class() {}

void Dychotomia_class::setLimits(double left, double right) {
    left_limit = left;
    right_limit = right;
}

double Dychotomia_class::solve() {
    double a = left_limit;
    double b = right_limit;
    double x;

    while (fabs(b - a) > tolerance) {
        x = (a + b) / 2;
        if (fx(x) > 0)
            b = x;
        else
            a = x;
    }

    return (a + b) / 2;
}

Newton_class::Newton_class() {
    fx = [](double x) { return cos(2/x) - 2 * sin(1/x) + 1/x; };
    fdx = [](double x) { return (2 * sin(2/x) + 2 * cos(1/x)) / pow(x, 2) - 1 / pow(x, 2); };
}

Newton_class::~Newton_class() {}

void Newton_class::setInitialGuess(double x) {
    x0 = x;
}

double Newton_class::solve() {
    double x = x0;
    int iter = 0;
    const int max_iterations = 1000;

    while (iter < max_iterations) {
        double fx_val = fx(x);
        double fdx_val = fdx(x);

        if (fabs(fdx_val) < 1e-10) {
            std::cerr << "Похідна надто мала, метод може не спрацювати!" << std::endl;
            return x;
        }

        double x_next = x - fx_val / fdx_val;
        iter++;

        if (fabs(x_next - x) < tolerance) {
            std::cout << "Кількість ітерацій: " << iter << std::endl;
            return x_next;
        }

        x = x_next;
    }

    std::cerr << "Метод Ньютона не зійшовся за " << max_iterations << " ітерацій!" << std::endl;
    return x;
}