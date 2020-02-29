#include <iostream>

#include "vector2d.h"

using namespace std;

int main() {
    Vector2d vector{4,5};
    vector.print();
    Vector2d::plus(vector, vector).print();

    //    Vector2d::right().print();

    return 0;
}