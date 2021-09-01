#include<iostream>
#include<string>
#include<array>
#include<algorithm>

using namespace std;

int bj1157()
{
	array<int, 26> arr = { 0 };
	string s;
	cin >> s;
	char c = 'A';

	for (int j = 0; j < 26; j++)
	{


		for (int i = 0; i < s.length(); i++)
		{
			if (s.at(i) == 65 + j || s.at(i) == 97 + j)
			{
				arr[j]++;


			}

		}
		c++;
	}
	int max = *max_element(arr.begin(), arr.end());
	int loc;
	int found = 0;
	for (int i = 0; i < 26; i++)
	{

		if (arr[i] == max)
		{
			found++;
			loc = i;
		}
	}
	if (found == 1)
	{
		loc = loc + 65;
		cout << char(loc);
	}
	else if (found > 1)
	{
		cout << "?";
	}

	return 0;
}