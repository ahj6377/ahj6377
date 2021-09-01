//https://www.acmicpc.net/problem/9020

#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int bj9020()
{

	bool eratostenes[10001];
	fill_n(eratostenes, 10000, true);
	eratostenes[0] = false;
	eratostenes[1] = false;

	for (int i = 2; i <= sqrt(10000); i++)
	{
		if (eratostenes[i])
		{
			for (int j = i * i; j <= 10000; j = j + i)
				eratostenes[j] = false;

		}


	}
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		//°ñµå¹ÙÈå ¸ðµâ
		int c = b / 2;
		for (int j = c; j >1; j--)
		{
			if (eratostenes[j])
			{
				int d = b - j;
				if (eratostenes[d])
				{
					cout << j << " " << d << endl;
					break;
				}

			}

		}





	}





	return 0;

}
