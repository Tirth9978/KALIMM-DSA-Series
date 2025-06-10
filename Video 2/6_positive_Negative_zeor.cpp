#include<iostream>
using namespace std ;

int main(){
     int num ;
     cout << "Enter the Number : ";
     cin >> num ;

     if (num > 0){
          cout << "Positive\n";
     }
     else if (num < 0){
          cout << "Negative";
     }
     else {
          cout << "Zero\n";
     }
     return 0;
}