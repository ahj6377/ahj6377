//https://www.acmicpc.net/problem/1929

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int checkPnum(int n);

int bj1929()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (checkPnum(i) == 1)
			printf("%d\n", i);

	}
	return 0;

}


int checkPnum(int n)
{
	int check = 1;
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			check = 0;
			break;
		}
	}

	return check;
}
