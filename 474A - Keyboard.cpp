#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", str;
	char d; cin >> d >> str;
	int LR = (d == 'L' ? 1 : -1);
	for (int i = 0; i < str.size(); i++)
		str[i] = Keyboard[Keyboard.find(str[i]) + LR];
	cout << str;
	return 0;
}