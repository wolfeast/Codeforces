#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long a, b, c; cin >> a >> b >> c;
	cout << min(min((a + c) * 2, (b + c) * 2), min(a + b + c, (a + b) * 2));
	system("pause");
	return 0;
}