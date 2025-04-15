#include <stdio.h>
#include <Windows.h>
#include <ctype.h>


/*

int main() {
	char c;
	int score;
	float pi;

	c = 'A';
	score = 90;
	pi = 3.14;

	printf("A: %14c\n", c);
	printf("Score: %10d\n", score);
	printf("Pi: %13f\n", pi);
	printf("Pi: %13.2f", pi);

	return 0;
}

*/


/*
int main() {
	int num = 0;
	scanf_s("%d", &num);
	printf("You Entered: %d\n", num);
	return 0;
}
*/

/*

int main() {
	char name[20] = {0};
	int age = 0;
	printf("Enter your name: ");
	scanf_s("%s", name, (unsigned)_countof(name));
	printf("Enter your age: ");
	scanf_s("%d", &age);
	puts("So, it will be...");
	printf("Name: %s, Age: %d", name, age);
	return 0;
}

*/


/*

int main() {
	char name[20] = { 0 };
	int age = 0;
	printf("Enter your name and age, separated by a space: ");
	scanf_s("%s %d", &name, (unsigned)_countof(name), &age);
	puts("So, it will be...");
	printf("Name: %s, Age: %d", name, age);
	return 0;
}

*/


/*

int main() {
	int num1;
	int num2;
	int c;
	printf("Enter Two Numbers, separated by a space: ");
	scanf_s("%d %d", &num1, &num2);
	c = num1 * num2;
	printf("The result is: %d", c);
	return 0;
}

*/

int main() {
	char st;
	puts("Type a letter then press Enter: ");
	st = getchar();
	printf("You Entered: %c\n", st);
	st = toupper(st);
	printf("SO THE CAPITAL LETTER IS: %c\n", st);
	return 0;
}