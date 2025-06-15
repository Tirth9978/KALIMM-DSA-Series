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

     int sum =0;
     for (int i =0;i<n;i++){
          // sum = sum + arr[i];
          sum += arr[i];
     }
     cout << sum << endl;
     return 0;
}