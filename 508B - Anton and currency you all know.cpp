#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str; cin >> str;
	int se = -1, be = -1;
	int ld = ((int)str.at(str.length() - 1)) - ((int) '0');
	for (int i = 0; i < str.length(); i++)
	{
		int val = ((int)str[i] - (int)'0');
		if (val % 2 == 0 && se == -1 && val < ld) se = i;
		if (val % 2 == 0 && se == -1 && val > ld) be = i;
	}
	if (se == -1 && be == -1) cout << -1;
	else if (se != -1) {
		swap(str[str.length() - 1], str[se]);
		cout << str;
	}
	else if (be != -1)
	{
		swap(str[str.length() - 1], str[be]);
		cout << str;
	}
	return 0;
}
