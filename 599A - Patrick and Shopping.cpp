#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long a, b, c, x, y, z, d;
	cin >> a >> b >> c;
	d = a + b + c;
	x = (a + c) * 2;
	y = (b + c) * 2;
	z = (a + b) * 2;
	cout << min(min(x, y), min(d, z));
	return 0;
}