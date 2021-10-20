#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
using std::cout;
using std::cin;
using std::string;


class shape {
public:
    string color;
    void getArea() {
        cout << "Area of shape is: \n";
    }
};
class rectangle : public shape {
public:
    double height;
    double width;
    double getarea() {
        double h = height;
        double w = width;
        double area = w * h;
        return area;
    }
};

class triangle : public shape {
public:
    double base;
    double height;
    double getarea() {
        double b = base;
        double h = height;
        double area = 0.5 * b * h;
        return area;
    }
};

class circle : public shape {
public:
    double radius;
    double getarea() {
        double r = radius;
        double area = M_PI * r * r;
        return area;
    }
};

int main()
{
    rectangle myRectangle;
    myRectangle.color = "red";
    myRectangle.width = 5;
    myRectangle.height = 7;

    triangle myTriangle;
    myTriangle.base = 3;
    myTriangle.height = 5;

    circle myCircle;
    myCircle.radius = 2.5;


    cout << myTriangle.getarea() << '\n';

    cout << myRectangle.getarea() << '\n';

    cout << myCircle.getarea() << '\n';

}
