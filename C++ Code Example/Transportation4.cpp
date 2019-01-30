#include <iostream>
using namespace std;
class Transportation{
public:
  virtual float fare() = 0;
};
class Taxi : public Transportation{
private:
  double distance;
public:
  void setDistance(double d){ distance = d; }
  float fare(){ return (35 + (2 * distance)); }
};

class BmtaBus : public Transportation{
public:
  float fare(){ return 6.50; }
};

class BTS : public Transportation{
private:
  int station;
public:
  void setStation(int s){ station = s; }
  float fare(){ return 15+(5 * station); }
};

class Passenger{
private:
  double totalFare;
public:
  Passenger(){ totalFare = 0; }
  void addTransportation(Transportation &tran){
    totalFare = totalFare + tran.fare();
  }
  double getTotalFare(){
    return totalFare;
  }
};
int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}
