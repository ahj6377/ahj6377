//https://www.acmicpc.net/problem/1316


#include<iostream>
#include<string>


using namespace std;
int groupchecker(string s);

int bj1316()
{
	int a, cnt = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		cnt = cnt + groupchecker(s);




	}
	cout << cnt;

	return 0;
}


int groupchecker(string s)
{
	int check = 1;
	for (int i = 0; i < s.length(); i++)
	{

		int a = s.find_first_of(s.at(i));
		int b = s.find_last_of(s.at(i));
		for (int j = a + 1; j<b; j++)
			if (s.at(j) != s.at(i))
			{
				check = 0;
				break;
			}
	}

	return check;
}



