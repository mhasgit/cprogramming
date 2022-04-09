#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char source [] = " Electrical";
char target [20];
strcpy (target, source);
cout<<"\n Source string is "<<source;
cout<<"\n Target string is "<<target;
    /*
    int a = 20;
    int *ptr = &a;
    int **ptrr = &ptr;
    cout << "Address of a: " <<*ptr <<endl;
    cout << "Address of **ptr: " <<**ptrr <<endl;
    */





  /*
   int location = 20;
   int* p;
   p = &location;
   *p = *p + 1;
   cout << "Adress of P is: "<<p <<endl;
   cout << "Adress of P is: "<<*p;
   */



return 0;   
}