#include<iostream>
using namespace std ;

// bool find(int arr[][100],int n){
//      for (int i=0;i<n;i++){
//           for (int j=0;j<i;j++){
//                if (arr[i][j] != arr[j][i]){
//                     return false;
//                }
//           }
//      }
//      return true;
// }

int main(){
     int n = 3;
     // int arr[n][n] = {{1,2,3},{4,5,6},{7,8,9}}; 
     int arr[n][n] = {{1,2,3},{2,4,5},{3,5,6}}; 
     bool find = 0; 
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               if (arr[i][j] != arr[j][i]){
                    cout << "NO\n";
                    find = 1;
                    break;
               }
          }
          if(find == 1){
               break;
          }
     }

     if (find != 1){
          cout << "YES\n";
     }

     return 0;
}