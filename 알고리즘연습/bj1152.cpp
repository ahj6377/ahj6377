#include<iostream>
#include<string>


using namespace std;

int bj1152()
{
	int cnt = 0;
	string s;
	getline(cin, s);

	if (s == " ")
	{
		cout << cnt;

		return 0;
	}
	for (int i = 0; i < s.length(); i++)
	{

		if (s.at(i) == ' ' && i > 0 && s.at(i - 1) != ' ' && i<s.length() - 1 && s.at(i + 1) != ' ')
		{

			cnt++;
		}


	}
	cout << cnt + 1;

	return 0;
}