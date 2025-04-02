#include "func.h"

double distance(const Point &p1, const Point &p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double heronArea(const Triangle &t) {
  double a = distance(t.A, t.B);
  double b = distance(t.B, t.C);
  double c = distance(t.C, t.A);
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

double vectorProduct(const Point &A, const Point &B, const Point &P) {
  return (B.x - A.x) * (P.y - A.y) - (B.y - A.y) * (P.x - A.x);
}

bool Triangle::containsVec(const Point &P) const {
  double W1 = vectorProduct(A, B, P);
  double W2 = vectorProduct(B, C, P);
  double W3 = vectorProduct(C, A, P);

  return (W1 >= 0 && W2 >= 0 && W3 >= 0) || (W1 <= 0 && W2 <= 0 && W3 <= 0);
}

bool Triangle::contains(const Point &P) const {
  Triangle T1 = {A, B, P};
  Triangle T2 = {B, C, P};
  Triangle T3 = {C, A, P};

  double S_main = area();
  double S_sum = T1.area() + T2.area() + T3.area();

  return fabs(S_main - S_sum) < 1e-9;
}

double Triangle::area() const {
  return heronArea(*this);
}

bool Triangle::isDegenerate() const {
  return area() < 1e-9;
}
