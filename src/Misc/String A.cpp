#include <iostream>
using namespace std;
int main()
{
 char alphabets[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                     'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 cout << "All Alphabets in one line" <<endl;
 for(int i = 0; i < 26; i++)
 {
 cout << alphabets[i] <<" ";
 }
 cout << endl;
 
 cout << "First Six Charaters of Alphabets are"<<endl;
 for (int j = 0; j < 6; j++)
 {
 cout << alphabets[j] <<" ";
 }
 cout << endl;
 
 cout << "Last Ten Charaters of Alphabets are"<<endl;
 for (int k = 16; k <= 25; k++)
 {
 cout << alphabets[k] <<" ";
 }
 cout << endl;

 cout << "Tenth Character of the Alphabets is: " <<alphabets[9] <<endl;
return 0;
}