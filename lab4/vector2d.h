#ifndef LAB4_VECTOR2D_H
#define LAB4_VECTOR2D_H

// fooBar

class Vector2d {
private:
    double x;
    double y;
public:
    Vector2d();
    Vector2d(double x, double y);

    ~Vector2d() = default;

    double getX();
    double getY();

    void print();

    static Vector2d right();

    static Vector2d plus(Vector2d a, Vector2d b);

    static void print_hello();


    double multiply(Vector2d another);

    static double multiply(Vector2d a, Vector2d b);

};



#endif //LAB4_VECTOR2D_H
