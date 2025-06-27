#include<iostream>
using namespace std ;

int main(){
     // Wrong
     // char ch = "T";
     // char name = "Tirth";
     // char name = 'Tirth';



     // Right
     char ch = 'A';

     int Ascii = ch;
     
     cout << ch << "\n"; 

     Ascii = Ascii + 32 ;

     ch = Ascii;

     cout << ch  ;
     return 0;
}