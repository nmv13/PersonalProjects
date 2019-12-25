/*************************************************************
 * This is a sketchpad for the chess program board and pieces
 ************************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

char initialBoard(char board[][8]);
char display(char board[][8]);


int main()
{
    char board[8][8];

    initialBoard(board);

    display(board);

    return 0;
}

char initialBoard(char board[][8])
{
	char p  = 'o';  // Pawn
	char r  = '#';  // Rook
	char k  = '%';  // Knight
	char b  = '?';  // Bishop
	char q  = 'Q';  // Queen
	char kk = 'K';  // King
	char e  = ' ';  // Empty

	// Top rows of board

	// Collumn 8
	board[0][0] = r;
	board[0][1] = k;
	board[0][2] = b;
	board[0][3] = q;
	board[0][4] = kk;
	board[0][5] = b;
	board[0][6] = k;
	board[0][7] = r;

	// Collumn 7

	for (int i = 0; i < 8; ++i)
	{
		board[1][i] = p;
	}

	// Bottom rows of board

	// Collumn 2
	for (int i = 0; i < 8; ++i)
	{
		board[6][i] = p;
	}

	// Collumn 1
	board[7][0] = r;
	board[7][1] = k;
	board[7][2] = b;
	board[7][3] = q;
	board[7][4] = kk;
	board[7][5] = b;
	board[7][6] = k;
	board[7][7] = r;

	for (int i = 2; i < 6; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			board[i][j] = e;
		}
	}
}

char display(char board[][8])
{
	//cout << "r\n";
	string bs = "-";     // Boarder Start
	string bb = "----";  // Boarder
	string ss = "|";     // Square Start
	/*string p  = " o |";  // Pawn
	string r  = " # |";  // Rook
	string k  = " % |";  // Knight
	string b  = " ? |";  // Bishop
	string q  = " Q |";  // Queen
	string kk = " K |";  // King
	string e  = "   |";  // Empty

	// Initial board
	cout << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl 
		 << ss << r << k << b << q << kk << b << k << r << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << p << p << p << p << p << p << p << p << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << e << e << e << e << e << e << e << e << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << e << e << e << e << e << e << e << e << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << e << e << e << e << e << e << e << e << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << e << e << e << e << e << e << e << e << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << p << p << p << p << p << p << p << p << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << ss << r << k << b << q << kk << b << k << r << endl
		 << bs << bb << bb << bb << bb << bb << bb << bb << bb << endl
		 << endl;*/

	string boarder = bs + bb + bb + bb + bb + bb + bb + bb + bb + "\n";

	// Improved board
	
	for (int i = 0; i < 8; ++i)
	{
		cout << endl << boarder << ss;
		for (int j = 0; j < 8; ++j)
		{
			cout << " " << board[i][j] << " |";
		}
	}

	cout << endl << boarder << endl;
}
