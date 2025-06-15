#include<iostream>
using namespace std ;

int main(){
     int n ;
     int m;
     cout << "Enter the n : ";
     cin >> n;
     cout << "Enter the m : ";
     cin >> m;

     for (int i=1;i<=n;i++){
          for (int j=1;j<=m;j++){
               cout << "*" << " ";
          }
          cout << endl;
     }
     return 0;
}