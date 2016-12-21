#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t; cin >> t;
	string str;
	while (t--)
	{
		int A[26] = { 0 };
		cin >> str;
		bool cr = false;
		for (int i = 0; i < str.length(); i++) A[str[i] - 'A']++;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1])
			{
				cr = true;
				continue;
			}
			else if (str[i] != str[i + 1] && cr) cout << str[i] << A[str[i] - 'A'];
			else cout << str[i] << "1";
		}
		cout << endl;
	}
	return 0;
}