#include <iostream>
#include <string>
using namespace std;

typedef struct _productItem{
    string name;
    double price;
    int counts;
} product;

void init(product pList[], int items)
{
    pList[0].name = "pencil";
    pList[0].price = 4;
    pList[0].counts = 10;
    pList[1].name = "pen";
    pList[1].price = 15.50;
    pList[1].counts = 30;
    pList[2].name = "papers";
    pList[2].price = 58;
    pList[2].counts = 100;
}


void sale(product pList[], int items)
{
  string a;   int b;   float c;
  cout << "Product to buy: ";
  cin >> a;
  for(int i = 0; i < items; i++){
    if(a == pList[i].name){
      cout << "How many to buy: ";
      cin >> b;
      if(b <= pList[i].counts){
        pList[i].counts = pList[i].counts - b;
        c = b * pList[i].price;
        cout << "You have to pay " << c << " bahts." << endl;
        break;
      }
      else if(b <= 0){ cout << "Sorry, that is an invalid amount." << endl; break;}
      else { cout << "Sorry, we do not have enough." << endl; break;}
    }
    else{ if(i == items-1) cout << "Sorry, we do not have that product." << endl; }
    }
}
void printStock(product pList[], int items)
{
    cout << "Product Stock:" << endl;
    for(int i = 0; i < items; i++){
      cout << pList[i].name << " " << pList[i].counts << endl;
    }
}

int main()
{
    int items = 3;
    product pList[items];
    init(pList, items);
    cout << "----------------------------" << endl;
    sale(pList, items);
    cout << "----------------------------" << endl;
    printStock(pList, items);
    cout << "----------------------------" << endl;

}
