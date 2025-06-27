#include<iostream>
using namespace std ;

int main(){

     // for (int i=1 ; i<=100000 ; i=i+1){
     //      cout << "Tom\n";
     // }

     for (int i=1;i<=10;i+=2){
          cout << "Tom\n";
     }

     for (int i= 10 ; i < 10 ;i++){
          cout << "Tirth\n";
     }

     for (int i=1;i<=5;i++){
          cout << i << endl;
     }

     // Print even 2 to 10 

     for (int i=2;i<=10 ;i++){
          if (i % 2 == 0){
               cout << i << endl;
          }
     }

     // Print In rev 

     for (int i = 5; i >= 1 ; i = i -1 ){
          cout << i << endl;
     }

     int sum =0; 
     int n ;
     cout << "Enter the Number : ";
     cin >> n;

     for (int i=1;i<=n;i++){
          sum  = sum + i;
     }

     cout << "Sum is " << sum  << endl;
     return 0;
}