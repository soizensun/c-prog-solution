#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D{
public:
  virtual float volumn() = 0;
  virtual float surfaceArea() = 0;
};

class RightRectangularPyramid : public Shape3D{
protected:
  float width;
  float length;
  float height;
public:
  RightRectangularPyramid(float width = 0, float length = 0, float height = 0)
    : width(width), length(length), height(height)
  { }
  float volumn(){
    return ((1.0/3.0) * width * length * height);
  }
  float surfaceArea(){
    float l1 = (1.0/2.0)*(sqrt( (height*height) + ( (width/2.0)*(width/2.0) ) )) * length;
    float l2 = (1.0/2.0)*(sqrt( (height*height) + ( (length/2.0)*(length/2.0) ) )) * width;
    return ( (width*length) + l1 + l1 + l2 + l2 );
  }
};
class Sphere : public Shape3D{
protected:
  float radius;
public:
  Sphere(float radius = 0)
    : radius(radius)
  { }
  float volumn(){
    return ((4.0/3.0) * M_PI * radius * radius * radius);
  }
  float surfaceArea(){
    return ( 4.0 * M_PI * radius * radius);
  }
};
int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        Shape3D **shapes = new Shape3D*[3];
        shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
        shapes[1] = new Sphere(10.6);
        shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
        for (int i = 0; i < 3; i++) {
            cout << "Volumn: " << (*shapes)->volumn() << endl;
            cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
            cout << "--------------------\n";
            *shapes++;
        }
    } else if (tc == 2) {
        RightRectangularPyramid rectangle;
        Sphere sphere;
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 3) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
    } else if (tc == 4) {
        Sphere sphere(34.25);
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 5) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        Sphere sphere(34.25);
        Shape3D *shape = &rectangle;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
        shape = &sphere;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
    } else if(tc == 6) {
    }

}
