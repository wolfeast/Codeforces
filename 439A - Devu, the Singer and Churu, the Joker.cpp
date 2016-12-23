#include <iostream>

using namespace std;

int main()
{
	int n, d, x, Devu = 0;
	cin >> n >> d;
	int br = (n - 1) * 10;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		Devu += x;
	}
	x = br + (d - (br + Devu));
	if ((Devu + br) >d) cout << "-1";
	else
	{
		cout << x / 5;
	}
	return 0;
}