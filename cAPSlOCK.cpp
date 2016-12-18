#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool flag = true;
	for (int i = 1; i < s.length(); ++i)
	{
		if (s[i] >= 'a')
		{
			flag = false;
			break;
		}
	}

	if (flag)
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] >= 'a')
				s[i] = toupper(s[i]);	//s[i] -= 32;
			else
				s[i] = tolower(s[i]);	//s[i] += 32;
		}
	}

	cout << s << endl;
	return 0;
}