#include <iostream>
#include<Math.h>
using namespace std;
int main()
{
	double i, h, x, y;
	h = 0.2;
	cin >> x >> y;
	double res;
	for (i = x; i < y; i += h)
	{
		res = sqrt(i) - 2 * cos(0.5 * 3.14 * i);
		cout << res << "\n";
	}

}