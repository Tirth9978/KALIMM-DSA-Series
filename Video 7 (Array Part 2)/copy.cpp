#include<iostream>
using namespace std ;

void print(int arr[] , int n){
     for (int i=0;i<n;i++){
          cout << arr[i] << endl;
     }
}

int main(){
     int n;
     cout << "Enter the Number : ";
     cin >> n;

     int arr[n];
     for (int i=0;i<n;i++){
          cout << "Enter the Number : ";
          cin >> arr[i];
     }

     int copy[n];
     for (int i=0;i<n;i++){
          copy[i] = arr[i];
     }

     print(copy,n);
     return 0;
}