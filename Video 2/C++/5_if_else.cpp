#include<iostream>
using namespace std ;

int main(){
     int age  ;
     cout << "Enter your Age : ";
     cin >> age ;

     if (age >= 18){
          cout << "You can Drive a Car\n";
     }else {
          cout << "You Can't\n";
     }
     return 0;
}