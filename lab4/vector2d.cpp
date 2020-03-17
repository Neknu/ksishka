#include <iostream>

#include "vector2d.h"

using namespace std;

Vector2d::Vector2d() {
    x = 0;
    y = 0;
}

Vector2d::Vector2d(double x, double y) {
    this->x = x;
    this->y = y;
}


double Vector2d::getX() {
    return x;
}

double Vector2d::getY() {
    return y;
}

void Vector2d::print() {
    cout << "X - " << x << " Y - " << y << endl;
}

Vector2d Vector2d::right() {
    return Vector2d{1,0};
}

Vector2d Vector2d::plus(Vector2d a, Vector2d b) {
    return Vector2d{a.getX() + b.getX(), a.getY() + b.getY()};
}

void Vector2d::print_hello() {
    cout << "hello I'm vector2d class" << endl;
}

double Vector2d::multiply(Vector2d another) {
    return (this->x * another.x + this->y * another.y);
}

double Vector2d::multiply(Vector2d a, Vector2d b) {
    return (a.x * b.x + a.y * b.y);
}
