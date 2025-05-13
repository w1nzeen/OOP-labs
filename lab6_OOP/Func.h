#ifndef FUNC_H
#define FUNC_H

#include <functional>

class EquationSolver {
protected:
  double tolerance;
  std::function<double(double)> fx;
  std::function<double(double)> fdx;

public:
  EquationSolver();
  virtual ~EquationSolver() = default;
  void setTolerance(double tol);
  virtual double solve() = 0;
};

class Dychotomia_class : public EquationSolver {
private:
  double left_limit;
  double right_limit;

public:
  Dychotomia_class();
  ~Dychotomia_class();
  void setLimits(double left, double right);
  double solve() override;
};

class Newton_class : public EquationSolver {
private:
  double x0;

public:
  Newton_class();
  ~Newton_class();
  void setInitialGuess(double x);
  double solve() override;
};

#endif // FUNC_H