#include<iostream>
using namespace std ;

int main(){
     int age ;
     cout << "Enter the number : ";
     cin >> age ;

     (age >= 18) ? cout << "You Can Drive\n" : cout << "You can't drive\n";
     return 0;
}