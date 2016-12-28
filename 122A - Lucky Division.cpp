#include <iostream>

using namespace std;

bool lucky(int n)
{
	do
	{
		if (n % 10 != 4 && n % 10 != 7) return 0;
	} while (n /= 10);
	return 1;
}

bool almost(int n)
{
	if (lucky(n)) return 1;

	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0 && (lucky(i) || lucky(n / i))) return 1;
	}
	return 0;
}

int main()
{
	int n; cin >> n;
	cout << (almost(n) ? "YES" : "NO");
	return 0;
}