#include<iostream>
using namespace std ;

int main(){
     int n ;

     cout << "Enter the n : ";
     cin >> n;
     
     for (int i=1;i<=n;i++){
          for (int j=1;j<=(2*n) - 1 ;j++ ){
               if (j > n - i && j < n + i){
                    cout << "*" << " ";
               }
               else {
                    cout << " " << " ";
               }
          }
          cout << "\n";
     }
     return 0;
}