#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n;
	string str; cin >> str;
	int a[26] = { 0 };
	for (int i = 0; i < n; i++)
	{
		str[i] = tolower(str[i]);
		a[str[i] - 'a']++;
	}
	int i;
	for (i = 0; i < 26; i++) if (a[i] == 0) break;
	if (i == 26) cout << "YES";
	else cout << "NO";
	return 0;
}