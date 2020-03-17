#include <iostream>

#include "vector2d.h"

using namespace std;

int main() {
    // non-static
    Vector2d vector{4,5};
    cout << vector.multiply(vector) << endl;

    //static
    cout << Vector2d::multiply(Vector2d{3,2}, Vector2d{2,7}) << endl;

    // non-static
    cout << Vector2d{3,2}.multiply(Vector2d{2,7}) << endl;
    return 0;
}