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
          if (i == 1 || i == n){
               for (int j=1;j<=m;j++){
                    cout << "*" << " ";
               }
          }
          else {
               for (int j=1;j<=m;j++){
                    if (j == 1 || j == m){
                         cout << "*" << " ";
                    }
                    else {
                         cout << " " << " ";
                    }
               }
          }
          cout << endl;
     }

     return 0;
}