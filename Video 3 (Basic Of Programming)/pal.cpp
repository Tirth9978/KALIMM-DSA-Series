#include<iostream>
using namespace std ;

bool isPal(int n){
     int ref = n;

     int Rev_num = 0;

     while(n != 0){
          int dig = n % 10 ;
          n = n / 10;
          Rev_num = (Rev_num * 10) + dig;
     }

     if (Rev_num == ref){
          return true;
     }
     return false;
}

int main(){
     int n;
     cout << "Enter the Number :";
     cin >> n;

     if (isPal(n)){
          cout << "YES\n";
     }
     else {
          cout << "No\n";
     }
     return 0;
}