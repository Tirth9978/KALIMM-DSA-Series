#include<iostream>
using namespace std ;

void print(int arr[] , int n){
     for (int i=0;i<n;i++){
          cout << arr[i] << " ";
     }
}

int main(){
     int n;
     cout << "Enter the size of an array : ";
     cin >> n;

     int arr[n];
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     int k ;
     cout << "k = ";
     cin >> k;

     for (int i=1;i<=k;i++){
          int num = arr[0];
          for (int i=0;i<n-1;i++){
               arr[i] = arr[i+1];
          }

          arr[n-1] = num ;
     }

     print(arr,n);
     return 0;
}