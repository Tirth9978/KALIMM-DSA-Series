#include<iostream>
using namespace std ;

int main(){
     int n ;

     cout << "Enter the n : ";
     cin >> n;
     
     int count ;
     for (int i=1;i<=n;i++){
          if (i % 2 == 0){
               count = 0;
          }
          else {
               count = 1;
          }

          for (int j= 1;j<=n;j++){
               if (j <= i){
                    cout << count << " ";
                    count = 1 - count ; 
               }
               else {
                    cout << " " << " ";
               }
          }

          cout << endl;
     }
     return 0;
}