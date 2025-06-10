#include<iostream>
using namespace std ;

int main(){
     int a = 5;
     int b = 10;
     // and
     if ((a <= 5 )&& (b >= 10)) {   // ( 1 && 1 ) -> 1
          cout << "You got best a and b\n";
     }
     
     if ((a < 5) && (b >= 10)) {   // ( 0 && 1) -> 0
          cout << "You didn't get best a and b \n";
     }

     if ((a<=5) && (b > 10)) {  // (1 && 0) -> 0

     }
     if ((a < 5) && (b > 10)) {  // (0 && 0) -> 0

     }

     // Or 

     if ((a != 5) || (b == 10)){   // ( 0 || 1 ) -> 1
          cout << "Condition is true \n";
     }     
     if ((a != 5) || (b != 10)){   // ( 0 || 0 ) -> 0
          cout << "Condition is true \n";
     } 
     
     // NOT

     if (!(a == 5)){  // False

     }

     if (!(a != 5)) {  // True

     }
     return 0;
}