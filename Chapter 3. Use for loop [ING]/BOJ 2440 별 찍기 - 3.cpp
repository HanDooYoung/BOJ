#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = a; j > i; j--)
			cout << "*";

		cout << endl;
	}
}

/*
Input 1:
5

Output 1:
*****
****
***
**
*
*/