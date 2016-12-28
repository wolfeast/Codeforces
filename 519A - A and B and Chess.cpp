#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int whey(char ch)
{
	if (ch == '.' || ch == 'k') return 0;
	if (ch == 'q') return 9;
	if (ch == 'r') return 5;
	if (ch == 'b' || ch == 'n') return 3;
	if (ch == 'p') return 1;
}

int main()
{
	char board[8][8];
	int A = 0, B = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> board[i][j];
			if (isupper(board[i][j])) A += whey(tolower(board[i][j]));
			else if (islower(board[i][j])) B += whey(board[i][j]);
		}
	}
	if (A > B) cout << "White";
	else if (A < B) cout << "Black";
	else cout << "Draw";
	return 0;
}