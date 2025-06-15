#include<iostream>
using namespace std ;

int main(){
     int n;
     cout << "Enter the size of an array : ";
     cin >> n;

     int arr[n];

     for (int i=0;i<n;i++){
          cout << "Enter the number : ";
          cin >> arr[i];
     }

     int max = arr[0];

     for (int i=0;i<n;i++){
          if (max < arr[i]){
               max = arr[i];
          }
     }

     cout << max << endl;
     return 0;
}