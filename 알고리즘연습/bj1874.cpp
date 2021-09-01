//https://www.acmicpc.net/problem/1874

#include <iostream>
#include <stack>
#include <string>
#include<vector>
using namespace std;
stack<int> store;
vector<char> output;
int bj1874()
{

	int* input;
	int n, i, x, comp_idx = 1;
	cin >> n;
	input = new int[n + 1];
	for (i = 1; i <= n; ++i)
		cin >> input[i];
	int top = 0;
	for (i = 1; i <= n; ++i) {
		store.push(i);
		output.push_back('+');
		top = store.top();
		for (x = comp_idx; x <= i; ++x) {
			if (top == input[comp_idx]) {
				store.pop();
				if (store.size())
					top = store.top();
				output.push_back('-');
				comp_idx++;
			}
		}
	}
	if (!store.size())
	{
		for (int i = 0; i < output.size(); i++)
			cout << output[i] << "\n";
	}
	else
		cout << "NO\n";
	delete input;
	return 0;

}