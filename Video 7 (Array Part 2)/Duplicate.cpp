#include<iostream>
using namespace std ;


int main(){
     int n;
     cout << "Enter the size of an array : ";
     cin >> n;

     int arr[n];
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     for (int i=0;i<n;i++){
          int count =0;

          for (int j=i+1;j<n;j++){
               if (arr[i] == arr[j]){
                    count = 1;
               }
          }
          if (count==1){
               cout << arr[i] << " ";
          }
     }

     return 0;
}