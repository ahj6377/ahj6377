#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;



int bj1085()
{

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if ((x > w && y > h) || (y> h && x<0) || (x>0 && y<0) || (x<0 && y<0))
	{
		int px = x * x - w * w;
		int py = y * y - h * h;
		float mini = sqrt(px + py);

		cout << mini;

	}

	else
	{

		int l1, l2, l3, l4;
		l1 = x - 0;
		l2 = y - 0;
		l3 = w - x;
		l4 = h - y;
		int mini = min(min(l1, l3), min(l2, l4));

		cout << mini;
	}
	return 0;

}

