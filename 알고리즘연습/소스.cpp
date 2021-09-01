#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string S, A[100];
	int X[100], M, i, sLength, tempLength, score = 0;

	// 입력
	cin >> S;
	cin >> M;
	for (i = 0; i < M; ++i)
		cin >> A[i] >> X[i];

	// 알고리즘
	sLength = S.length();
	tempLength = S.length();
	for (i = 0; i < M; ++i) {
		while (true) {
			if (S.find(A[i]) != -1) {
				S.replace(S.find(A[i]), A[i].length(), A[i].length(), '_');
				score += X[i];
			}
			else
				break;
		}
	}
	for (i = 0; i < S.length(); ++i)
		if (S[i] != '_')
			score += 1;


	// 출력
	cout << score << '\n';
	system("pause");
	return 0;
}