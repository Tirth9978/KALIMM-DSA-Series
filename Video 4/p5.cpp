#include <iostream>
using namespace std;

int main()
{
     int n;

     cout << "Enter the n : ";
     cin >> n;

     int count = 1;
     for (int i = 1; i <= n; i++)
     {

          for (int j = 1; j <= n; j++)
          {
               if (j <= i)
               {
                    cout << count << " ";
                    count++;
               }
               else
               {
                    cout << " " << " ";
               }
               
          }
          cout << "\n";
     }
     return 0;
}