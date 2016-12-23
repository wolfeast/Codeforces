#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, m, x, y;
	cin >> n >> m;
	int *a = new int[m];
	for (int i = 0; i < m; i++) a[i] = 0;
	bool bulb = true;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		for (int j = 0; j < x; j++)
		{
			cin >> y;
			a[y - 1]++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] == 0)
		{
			bulb = false;
			break;
		}
	}
	cout << (bulb ? "YES" : "NO");
	return 0;
}