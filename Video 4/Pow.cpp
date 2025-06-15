#include<iostream>
using namespace std ;

int main(){
     int n,k;
     cout << "n = ";
     cin >> n;
     
     cout << "k = ";
     cin >> k;


     int pow = 1;

     for (int i=1;i<=k;i++){
          pow = pow * n;
     }
     cout << "Ans : " << pow << endl;
     return 0;
}