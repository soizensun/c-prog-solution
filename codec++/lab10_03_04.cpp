#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
	point centerPoint;
	double radius;
public:
	Circle(point center, double radius){
		this->radius = radius;
		centerPoint.xPosition = center.xPosition;
		centerPoint.yPosition = center.yPosition;
	}

	double area() const{
		return (M_PI) * radius * radius;
	}

    double distanceFromCenter(point pt) const{
    	double xsqr = pow((pt.xPosition - centerPoint.xPosition), 2);
    	double ysqr = pow((pt.yPosition - centerPoint.yPosition), 2);
    	return sqrt(xsqr + ysqr);
    }

    int contains(point pt) const{
    	double xsqr = pow((pt.xPosition - centerPoint.xPosition), 2);
    	double ysqr = pow((pt.yPosition - centerPoint.yPosition), 2);
    	double distance =  sqrt(xsqr + ysqr);

    	if (distance > radius) return 0;
    	else if (distance <= radius) return 1;
    }

};


int main(){
	point center;
	point check;
	double r;

	cout << "Center of Circle: ";
	cin >> center.xPosition; 
	cin >> center.yPosition;
	
	cout << "Radius of Circle: ";
	cin >> r;
	
	cout << "Point to Check: ";
	cin >> check.xPosition;
	cin >> check.yPosition;

	Circle circle(center,r);
	double area = circle.area();
	cout << "Area of Circle is " << area << endl;

	cout << "Distance from Center to Point (" << check.xPosition << ", ";
	                                    cout  << check.yPosition << ") ";
	cout << "is " << circle.distanceFromCenter(check) <<endl;

	if (circle.contains(check) == 1){
		cout << "This circle contains this point." << endl;
	}
	else if (circle.contains(check) == 0){
		cout << "This point is not in this circle." << endl;
	}

}