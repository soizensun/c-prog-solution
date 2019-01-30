#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef struct _point{
	double xPosition;
	double yPosition;
} point;


class Circle{
private
	point center;
	double radius;
public:
	Circle(point center, double radius){
		this->center = center;
		this->radius = radius;
	}
	double area(){
		return M_PI * radius * radius;
	}
	double getRadius(){
		return radius;
	}
  double distanceFromCenter(point pt){
		double x = sqrt(((pt.xPosition - center.xPosition)*(pt.xPosition - center.xPosition)) +
								((pt.yPosition - center.yPosition)*(pt.yPosition - center.yPosition)));
	 	return x;
	}
	int contains(point pt){
		double y = sqrt(((pt.xPosition - center.xPosition)*(pt.xPosition - center.xPosition)) +
								((pt.yPosition - center.yPosition)*(pt.yPosition - center.yPosition)));
		if(y <= radius){
			return 1;
		}
		if(y > radius){
			return 0;
		}
	}
};
int main (){
	double a, b, r;
	cout << "Center of Circle: ";
	cin >> a;
	cin >> b;
	cout << "Radius of Circle: ";
	cin >> r;
	Circle cir_1({a,b},r);
	//cout << cir_1.getRadius();
	double p1, p2;
	cout << "Point to Check: ";
	cin >> p1;
	cin >> p2;
	cout << "Area of Circle is ";
	cout << cir_1.area() << endl;
	cout << "Distance from Center to Point (" << p1 << ", " << p2
			 << ") is " << cir_1.distanceFromCenter({p1, p2}) << endl;
	if(cir_1.contains({p1, p2}) == 1){
		cout << "This circle contains this point.";
	}
	if(cir_1.contains({p1, p2}) == 0){
		cout << "This point is not in this circle.";
	}

}
