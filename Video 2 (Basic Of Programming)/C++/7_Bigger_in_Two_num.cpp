#include<iostream>
using namespace std ;

int main(){
     int a,b;

     cout << "a = ";
     cin >> a;

     cout << "b = ";
     cin >> b;

     if (a > b){
          cout << "a is Bigger\n";
     }
     else if (b > a){
          cout << "b is Bigger\n";
     }
     else {
          cout << "both are Same\n";
     }
     return 0;
}