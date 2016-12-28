#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) cout << "I love" << (i == n ? " it" : " that ");
		else cout << "I hate" << (i == n ? " it" : " that ");
	}
	system("pause");
	return 0;
}
