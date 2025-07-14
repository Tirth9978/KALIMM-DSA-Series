#include<iostream>
using namespace std ;

int main(){
     int n , m;
     cout << "n = ";
     cin >> n;
     cout << "m = ";
     cin >> m;

     int arr[n][m];

     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cout << "arr[" <<i<<"]" <<"["<<j<<"]" << ": " ;
               cin >> arr[i][j] ;
          }
     }

     // for (int i=0;i<n;i++){
     //      for (int j=0;j<m;j++){
     //           cout << "arr[" <<i<<"]" <<"["<<j<<"]" << ": "<<arr[i][j] <<endl;
     //      }
     // }

     int sum =0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               sum = sum + arr[i][j];
          }
     }

     cout << "Sum : " << sum << endl;
     return 0;
}