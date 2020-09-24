#include <iostream>

using namespace std;

int main()
{
   int a[3] = {10 , 20 , 30};
   
   int (*p)[3];
   
   p = &a;
   
   cout << (*p)[0] << " " << (*p)[1] << endl;
   
   return 0;
}


#OUTPUT

10 20