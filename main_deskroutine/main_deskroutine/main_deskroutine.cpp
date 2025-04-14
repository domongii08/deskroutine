#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void setCursorPosition(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔 핸들 가져오기
    COORD position = { (SHORT)x, (SHORT)y };          // 커서 위치 설정
    SetConsoleCursorPosition(hConsole, position);     // 커서 위치 변경
}

void printConsoleSize() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    printf("Console Width: %d, Height: %d\n", csbi.dwSize.X, csbi.dwSize.Y);
}

int main() {
    printConsoleSize();
    system("pause");
    system("cls");
    setCursorPosition(50, 1); // Y 값을 1로 변경하여 한 줄 아래로 이동
    printf("Deskroutine");
    return 0;
}
}