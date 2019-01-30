#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string to_string(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}
 class PythonInList{
 private:
   int list[100];
   int index;
 public:
   PythonInList(){
     index = 0;
   }
	int getIndex(){
		return index;
	}
   string toString(){
     string stt = "[";
     for(int i = 0; i < index; i++){
       stt = stt + to_string(list[i]);
       if(i != index-1) stt += ", ";
     }
     stt = stt + "]";
     return stt;
   }
   void extend(PythonInList a){
		 for(int i = 0; i < a.index; i++){
			  append(a.list[i]);
		 }
   }
	 void append(int i){
		 list[index] = i;
		 index++;
	 }
	 int pop(){
		 int a = list[index-1];
		 index--;
		 return a;
	 }
 };
 void print(PythonInList a){
   cout << a.toString() << endl;
 }
 void print(int i){
	 cout << i << endl;
 }
 int len(PythonInList a){
	 return a.getIndex();
 }
 int main(){
   PythonInList ls1, ls2;
   ls1.append(2);
   ls1.append(4);
	 ls2.append(5);
	 ls2.append(8);
	 ls2.append(5);
	
	 print(ls1);
	 print(ls2);
	 cout <<"-----------------------\n";
	 ls1.extend(ls2);
	 print(ls1);
	 print(ls2);
}
