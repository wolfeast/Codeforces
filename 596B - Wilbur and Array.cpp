#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;
	long long x, a = 0, ctr = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a = abs(x - a);
		ctr += a;
		a = x;
	}
	cout << ctr;
	return 0;
}