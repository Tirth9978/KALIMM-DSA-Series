#include<iostream>
using namespace std ;

bool isPrime(int n){
     for (int i=2;i<=n-1;i++){
          if (n % i == 0){
               return false;
          }
     }

     return true;
}

int main(){
     int n;
     cout << "Enter the Number :";
     cin >> n;

     if (isPrime(n)){
          cout << "Number is Prime\n";
     }
     else {
          cout << "Number is Non-Prime\n";
     }
     return 0;
}