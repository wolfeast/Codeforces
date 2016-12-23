#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	bool H = true;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] != b[a.length() - i - 1])
		{
			H = false;
			break;
		}
	}
	cout << (H ? "YES" : "NO");
	return 0;
}