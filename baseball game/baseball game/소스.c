#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

int ans(char a, char b, char c);

int main() {
	char p1_num1, p1_num2, p1_num3;
	char p2_num1, p2_num2, p2_num3;

	char n1, n2, n3;

	int count = 1;
	bool check = true;

	printf("**********야구게임**********\n");
	printf("플레이어가 숫자를 입력하는 동안 다른 플레이어는 다른 곳을 봐주세요.\n");

	printf("첫 번째 플레이어의 첫 번째 숫자 : ");
	scanf_s("%c", &p1_num1, sizeof(p1_num1));
	getchar();

	printf("첫 번째 플레이어의 두 번째 숫자 : ");
	scanf_s("%c", &p1_num2, sizeof(p1_num2));
	getchar();

	printf("첫 번째 플레이어의 세 번째 숫자 : ");
	scanf_s("%c", &p1_num3, sizeof(p1_num3));
	getchar();

	Sleep(1000);
	system("cls");

	//---------------------------------------------------------------------------------------

	printf("두 번째 플레이어의 첫 번째 숫자 : ");
	scanf_s("%c", &p2_num1, sizeof(p2_num1));
	getchar();

	printf("두 번째 플레이어의 두 번째 숫자 : ");
	scanf_s("%c", &p2_num2, sizeof(p2_num2));
	getchar();

	printf("두 번째 플레이어의 세 번째 숫자 : ");
	scanf_s("%c", &p2_num3, sizeof(p2_num3));
	getchar();

	Sleep(1000);
	system("cls");

	//-----------------------------------------------------------------------------------------

	while (check) {
		int t;
		printf("**player1 turn**\n");
		t = ans(p2_num1, p2_num2, p2_num3);
		if (t == 1) {
			break;
		}
		printf("**player2 turn**\n");
		t = ans(p1_num1, p1_num2, p1_num3);
		if (t == 1) {
			break;
		}
	}

	return 0;
}

int ans(char a, char b, char c) {
	char n1, n2, n3;
	int s = 0;
	int ba = 0;

	printf("첫 번째 숫자 : ");
	scanf_s("%c", &n1, sizeof(n1));
	getchar();

	printf("두 번째 숫자 : ");
	scanf_s("%c", &n2, sizeof(n2));
	getchar();

	printf("세 번째 숫자 : ");
	scanf_s("%c", &n3, sizeof(n3));
	getchar();

	if (n1 == a) {
		s += 1;
	}
	else if (n1 == b || n1 == c) {
		ba += 1;
	}

	if (n2 == b) {
		s += 1;
	}
	else if (n2 == a || n2 == c) {
		ba += 1;
	}

	if (n3 == c) {
		s += 1;
	}
	else if (n3 == a || n3 == b) {
		ba += 1;
	}

	if (s == 0 && ba == 0) {
		printf("아웃입니다.\n\n");
		return 0;
	}
	else if (s == 3) {
		printf("\n**********정답입니다!**********\n");
		printf("**********승리! 짝짝짝**********");
		return 1;
	}
	else {
		printf("스트라이크 : %d\n", s);
		printf("볼 : %d\n\n", ba);
		return 0;
	}
}