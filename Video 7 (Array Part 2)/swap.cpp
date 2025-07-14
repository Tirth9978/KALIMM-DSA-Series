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

     int temp = arr[0];
     arr[0] = arr[n-1];
     arr[n-1] = temp;

     print(arr,n);
     return 0;
}