#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <cmath>
#include <vector>

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;
    double area() const;
    bool contains(const Point &P) const;
    bool containsVec(const Point &P) const;
    bool isDegenerate() const;
};

double distance(const Point &p1, const Point &p2);
double heronArea(const Triangle &t);
double vectorProduct(const Point &A, const Point &B, const Point &P);
double check(const Point &A, const Point &B, const Point &P);

#endif // FUNC_H