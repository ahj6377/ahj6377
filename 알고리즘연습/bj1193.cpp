#include<iostream>



using namespace std;


int bj1193()
{

	int a, n = 1, b, n1, n2;
	cin >> a;
	while (n*(n + 1) / 2 < a)
	{
		n++;
	}

	b = a - (n*(n - 1) / 2);
	if (n % 2 != 0)
	{
		n2 = b;
		n1 = n + 1 - b;


	}
	else
	{
		n1 = b;
		n2 = n + 1 - b;
	}

	cout << n1 << "/" << n2;
	return 0;
}


