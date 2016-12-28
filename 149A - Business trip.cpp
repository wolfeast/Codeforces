#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(12);
	int k, ctr = 1; cin >> k;
	for (int i = 0; i < 12; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int s = 0;
	for (int i = 0; i < 12; i++)
	{
		s += a[11 - i];
		if (s >= k) break;
		ctr++;
	}
	if (k == 0) cout << 0;
	else if (ctr == 13) cout << -1;
	else cout << ctr;
	return 0;
}