//https://www.acmicpc.net/problem/1712

#include<iostream>



using namespace std;


int bj1712()
{
	int a, b, c, x = -1;

	cin >> a >> b >> c;

	//a + (x*b) - (x*c) < 0 x(c-b) > a x > (c-b)/a인 최소의 자연수
	if (c != b)
		x = a / (c - b) + 1;


	if (x >= 0)
		cout << x;
	else
		cout << -1;

	return 0;
}


