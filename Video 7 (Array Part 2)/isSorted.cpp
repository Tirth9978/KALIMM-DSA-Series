#include<iostream>
using namespace std ;

bool isSorted(int arr[],int n){
     for (int i=0;i<n-1;i++){
          if (arr[i] > arr[i+1]){
               return 0;
          }
     }
     return 1;
}

int main(){
     int n;
     cout << "Enter the size of an array : ";
     cin >> n;

     int arr[n];
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     if (isSorted(arr,n)){
          cout << "YES\n";
     }
     else {
          cout << "NO\n";
     }
     return 0;
}