#include<iostream>
using namespace std ;

int fact(int n){
     int mul = 1;
     for (int i=1;i<=n;i++){
          // mul = mul * i;
          mul *= i;
     }

     return mul;
}

int main(){

     int n ;
     cout << "Enter the Number : ";
     cin >> n;

     cout << "Ans : " << fact(n) << endl;

     
     return 0;
}