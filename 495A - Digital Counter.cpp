#include <iostream>

using namespace std;

int calc(int num)
{
	if (num == 9 || num == 6 || num == 2 || num == 0) return 2;
	if (num == 3 || num == 4) return 3;
	if (num == 8) return 1;
	if (num == 1) return 7;
	if (num == 5) return 4;
	if (num == 7) return 5;
}

int main()
{
	int num; cin >> num;
	cout << calc(num / 10)*calc(num % 10);
	return 0;
}