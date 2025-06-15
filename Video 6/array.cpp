#include<iostream>
using namespace std ;

int main(){
     int arr[4] = {1,2,3,4};
     
     cout << arr[0] << endl;
     cout << arr[3] << endl;

     int arr1[4];
     arr1[0] = 4;
     arr1[1] = 3;
     arr1[2] = 2;
     arr1[3] = 1;


     int arr2[]  = {1,2,3,4,5,6,7,8,9};

     for (int i=0;i<=3;i++){
          cout << arr[i] << endl;
     }

     int su[50] ;

     for (int i=0;i<=49;i++){
          su[i] ++ ;
     }



     return 0;
}