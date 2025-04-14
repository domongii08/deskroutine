#include <stdio.h>

/* 기본 자료형의 크기 알아보기

int main() {
	printf("%d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));
	printf("%d %d", sizeof(float), sizeof(double));
	return 0;
}

*/


/* 변수 선언해 보기

int main() {
	char myChar;
	int count, resultNumber;
	double weight;
	return 0;
}

*/

/* 변수에 값 할당해 보기

int main() {
	char myBloodType = 'A';
	int age, schoolNumber;
	double weight;
	age = 18;
	schoolNumber = 12;
	weight = 173.4;
	printf("내 혈액형은 %c형\n", myBloodType);
	printf("내 나이는 %d세\n", age);
	printf("내 학교 번호는 %d\n", schoolNumber);
	printf("내 몸무게는 %.1fkg\n", weight);
	return 0;
}

*/

/* putchar() 연습해 보기 

int main() {
	char c = 'h';
	putchar(c);
	putchar(105);
	return 0;
}

*/

/* puts() 연습해 보기

int main() {
	puts("hello");
	puts("world");
	return 0;
}

*/

/* printf() 연습해 보기 (형식 문자 편)

int main() {
	printf("%s\n", "o.k.!");
	int i = 1;
	printf("hello\n");
	printf("%d", i);
	return 0;
}

*/