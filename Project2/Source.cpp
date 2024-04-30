#include <iostream>
using namespace std;
int main()
{
	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "please enter the values" << endl;
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{												
		cout << "the values of the middle column =" << a[i][1] << endl;
	}
	for (int j = 0; j < 3; j++)
	{
		cout << "the values of the middle row =" << a[1][j] << endl;
	}
}