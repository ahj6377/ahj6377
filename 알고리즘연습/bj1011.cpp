#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int bj1011()
{
	int iter;
	cin >> iter;
	for (int i = 0; i < iter; i++)
	{
		int a, b, x;
		cin >> a >> b;
		x = b - a;
		if (x == 1)
			cout << 1 << endl;
		else if (x == 2)
			cout << 2 << endl;
		else
		{
			int n = 1;
			while (pow(n, 2) < x)
			{

				n++;
			}
			if ((pow(n - 1, 2) + pow(n, 2)) / 2 > x)
				cout << 2 * n - 2 << endl;
			else
				cout << 2 * n - 1 << endl;
		}

	}

	return 0;
}