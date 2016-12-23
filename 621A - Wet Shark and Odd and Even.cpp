#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	long long n, sum = 0;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	if (sum % 2 == 0) cout << sum;
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
			{
				sum -= a[i];
				break;
			}
		}
		cout << sum;
	}
	return 0;
}