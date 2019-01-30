#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation
{
private:
    double distance;
public:
    void setDistance(double d){
        distance = d;
    }
    double fare(){
        float p;
        p = 35 + 2 * distance;
        return p;
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        cout << "Taxi fare: "
             << taxi.fare() << endl;
    } else if(tc == 2) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        Transportation *transport = &taxi;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}