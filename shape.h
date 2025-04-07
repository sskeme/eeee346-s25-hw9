#include <iostream>
#include <cmath> // to use M_PI

using namespace std;

class Shape {
  /*TODO1: write your code*/
};

class Circle : public Shape {
  /*TODO2: write your code*/

  void display() {
    cout << "== Circle ==" << endl;
    cout << "radius   : " << radius << endl;
    cout << "area     : " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
  }
};

class Rectangle : public Shape {
  /*TODO3: write your code*/

  void display() {
    cout << "== Rectangle ==" << endl;
    cout << "width    : " << width << endl;
    cout << "height   : " << height << endl;
    cout << "area     : " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
  }
};
