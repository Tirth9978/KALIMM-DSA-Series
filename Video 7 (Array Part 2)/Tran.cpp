#include<iostream>
using namespace std ;

int main(){
     int n ;
     cout << "n = ";
     cin >> n;
     int arr[n][n];

     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               cout << "arr[" <<i<<"]" <<"["<<j<<"]" << ": " ;
               cin >> arr[i][j] ;
          }
     }     

     for (int i=0;i<n;i++){
          for (int j=0;j<=i-1;j++){
               int temp = arr[i][j];
               arr[i][j] = arr[j][i];
               arr[j][i] = temp;
          }
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }  
}