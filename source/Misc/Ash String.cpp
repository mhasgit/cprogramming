#include <iostream>
#include <string>

using namespace std;

int main()
{
	int AlphabetsSize = 26;
	int FirstCapitalAsciiCode = 65;
	char alphabets[AlphabetsSize];

	for(int i = 0; i < AlphabetsSize; i++) {
		alphabets[i] = (char)FirstCapitalAsciiCode + i;
		cout << alphabets[i] << " ";
	}
	
	cout << endl;
	
	cout << "First Six Charaters of Alphabets are: ";
	for (int i = 0; i < 6; i++)
	{
		cout << alphabets[i] <<" ";
	}
	
	cout << endl;
	
	cout << "Last Ten Charaters of Alphabets are: ";
	for (int i = AlphabetsSize - 10; i < AlphabetsSize; i++)
	{
		cout << alphabets[i] <<" ";
	}
	cout << endl;
	
	cout << "Tenth Character of the Alphabets is: " << alphabets[9] << endl;
	
	return 0;
}