#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool BW(char ch)
{
	if (ch == 'C' || ch == 'M' || ch == 'Y') return 0;
	else if (ch == 'W' || ch == 'B' || ch == 'G') return 1;
}

int main()
{
	bool c = 1;
	int n, m; cin >> n >> m;
	char p;
	int i;
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> p;
			if (!BW(p) && c == 1) c = 0;
		}
	}
	cout << (c ? "#Black&White" : "#Color");
	return 0;
}