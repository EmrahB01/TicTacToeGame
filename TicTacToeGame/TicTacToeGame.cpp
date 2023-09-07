#include <iostream>
using namespace std;

char boxs[10] = { 'o','1','2','3','4','5','6','7','8','9',};

void board() {
	system("cls");

	cout << "\n \n        TIC TAC TOE GAME       \n \n ";

	cout << " Player 1 (X)   --   Player 2 (O) " << endl << endl;

	cout << "    |    |    " << endl;
	cout << "  " << boxs[1] << " |  " << boxs[2] << " |  " << boxs[3] << "   " << endl;
	cout << "____|____|____" << endl;
	cout << "    |    |    " << endl;
	cout << "  " << boxs[4] << " |  " << boxs[5] << " |  " << boxs[6] << "   " << endl;
	cout << "____|____|____" << endl;
	cout << "    |    |    " << endl;
	cout << "  " << boxs[7] << " |  " << boxs[8] << " |  " << boxs[9] << "   " << endl;
	cout << "    |    |    " << endl;

}

int checkWin() {

	if (boxs[1] == boxs[2] && boxs[2] == boxs[3]) {
		return 1;
	}
	else if (boxs[4] == boxs[5] && boxs[5] == boxs[6]) {
		return 1;
	}
	else if (boxs[7] == boxs[8] && boxs[8] == boxs[9]) {
		return 1;
	}
	else if (boxs[1] == boxs[4] && boxs[4] == boxs[7]) {
		return 1;
	}
	else if (boxs[2] == boxs[5] && boxs[5] == boxs[8]) {
		return 1;
	}
	else if (boxs[3] == boxs[6] && boxs[6] == boxs[9]) {
		return 1;
	}
	else if (boxs[1] == boxs[5] && boxs[5] == boxs[9]) {
		return 1;
	}
	else if (boxs[3] == boxs[5] && boxs[5] == boxs[7]) {
		return 1;
	}
	else if (boxs[1] != '1' && boxs[2] != '2' && boxs[3] != '3' &&
		boxs[4] != '4' && boxs[5] != '5' && boxs[6] != '6' &&
		boxs[7] != '7' && boxs[8] != '8' && boxs[9] != '9') {
		return 0;
	}
	else return -1;


}

int main()
{
	int player = 1 ,choice , i=1;
	char mark;

	do {
		board(); 
		player = (player % 2 != 0) ? 1 : 2;

		cout << " PLAYER " << player << "  selecting : ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (boxs[choice] != 'X' && boxs[choice] != 'O') {
			boxs[choice] = mark;
		}
		else {
			cout << "Wrong entering press enter and try again ";
			player--;
			cin.ignore();
			cin.get();
		}
		i = checkWin();
		player++;

	} while (i == -1); 
	board();
	if (i == 1) {
		cout << " CONGRATULATIONS PLAYER " << --player << " WINS";
	}
	else cout << " GAME DRAW! ";
	cin.ignore();
	cin.get();
	return 0;

}

