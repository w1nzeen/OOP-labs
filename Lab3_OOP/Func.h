
#ifndef LAB2OOP_HEADER_H
#define LAB2OOP_HEADER_H
class Dychotomia_class {
private:
  double left_limit;
  double right_limit;
  double tolerance;

public:
  Dychotomia_class();
  ~Dychotomia_class();


  void setlimits(double left, double right);
  void setTolerance(double tol);

  double dichotomymethod();
  double newtonmethod();
};


#endif //LAB2OOP_HEADER_H
