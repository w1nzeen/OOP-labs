#ifndef FUNC_H
#define FUNC_H

class dihotomySolver {
public:
  dihotomySolver(double a, double b, double epsilon = 1e-6);
  double solve();
private:
  double a, b, epsilon;
  double f(double x);
};

class NewtonSolver {
public:
  NewtonSolver(double x0, double epsilon = 1e-6, int maxIter = 100);
  double solve();
private:
  double x0, epsilon;
  int maxIter;
  double f(double x);
  double fPrime(double x);
};

#endif //FUNC_H