#include<iostream>
using namespace std ;

bool Search(int arr[] , int n ,int ele){
     for (int i = 0;i<n;i++){
          if (arr[i] == ele){
               return true;
          }
     }
     return false;
}

int main(){
     int n;
     cout << "Enter the size of an array : ";
     cin >> n;

     int arr[n];

     for (int i=0;i<n;i++){
          cout << "Enter the number : ";
          cin >> arr[i];
     }

     int ele;
     cout << "Entre the Element : ";
     cin >> ele ;


     if (Search(arr,n,ele)){
          cout << "YES\n";
     }
     else {
          cout << "NO\n";
     }
     
     return 0;
}