#include<iostream>
using namespace std ;

int main(){
     int n ;

     cout << "Enter the n : ";
     cin >> n;
     
     for (int i=1;i<=n;i++){
          for (int j=1;j<=(2*n) - 1;j++){
               if (j > n -i && j < n+i){    
                    cout << "*" << " ";
               }
               else {
                    cout << " " << " ";
               }
          }
          cout << endl;
     }

     for (int i=n-1;i>=1;i--){
          for (int j=1;j<=(2*n) - 1;j++){
               if (j > n -i && j < n+i){    
                    cout << "*" << " ";
               }
               else {
                    cout << " " << " ";
               }
          }
          cout << endl;
     }
     float a = 3;
     float b = 2;

     cout << a / b;
     return 0;
}