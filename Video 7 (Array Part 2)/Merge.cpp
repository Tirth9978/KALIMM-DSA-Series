#include<iostream>
using namespace std ;

void print(int arr[],int n){
     for (int i=0;i<n;i++){
          cout << arr[i] << " ";
     }
     return ;
}

int main(){
     int n;
     cout << "Enter the size of First array : ";
     cin >> n;

     int arr1[n];
     for (int i=0;i<n;i++){
          cin >> arr1[i];
     }


     int m ;
     cout << "Enter the Size of a second array : ";
     cin >> m;
     int arr2[m];
     for (int i=0;i<m;i++){
          cin >> arr2[i];
     } 

     int k =0;
     int ans[n+m];

     for (int i=0;i<n;i++){
          ans[k] = arr1[i];
          k++;
     }

     for (int i=0;i<m;i++){
          ans[k] = arr2[i];
          k++;
     }

     print(ans,m+n);
     return 0;
}