#include<iostream>
using namespace std ;

// Fun (){
// char ch ;
// return 
//}

int sum(int a,int b){
     int sum = a + b;
     // Fun()
     return sum ;
}

void print(){
     cout << "Hello :)\n";
     return ;

     cout << "After the Return \n";
}

int main(){
     // int sum ;
     // int sum = 3 + 9;
     // cout << sum << endl;

     // sum = 1 + 2;
     // cout << sum << endl;

     // sum = 3 + 5;
     // cout << sum << endl;

     // sum = 4 + 10 ;
     // cout << sum << endl;


     cout << sum(1,2) << endl;
     cout << sum(3,2) << endl;
     cout << sum(6,5) << endl;
     cout << sum(3,4) << endl;


     print();
     return 0;
}