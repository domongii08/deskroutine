#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>

void gotoxy(int x, int y, const char* s) {
	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	printf("%s", s);

}

/*

int main() {
	char key;
	int x=20, y=10;
	int k = 0;
	while (1) {
		gotoxy(x, y, "●");
		if (_kbhit()) {
			do {
				key = _getch();
			} while (key == 224);
			switch (key) {
			case 72: y--; break;
			case 80: y++; break;
			case 75: x--; break;
			case 77: x++; break;
			k = k + 1;
			}
		}
		if (k > 10) {
			system("cls");
		}
	}
	return 0;
}

*/


int main() {
	int i;
	int n;
	srand(time(NULL));
	n = rand() & 10 + 1;
	printf("%d\n", n);
	return 0;
}