#include<iostream>
using namespace std ;

int main(){
     char ch ;
     cout << "Enter : ";
     cin >> ch ;

     if ((ch == 'a') || (ch == 'e') || (ch == 'i') || ( ch == 'o') || (ch == 'u')){
          cout << "Vowel\n";    
     }
     else {
          cout << "Consonant\n";
     }
     return 0;
}