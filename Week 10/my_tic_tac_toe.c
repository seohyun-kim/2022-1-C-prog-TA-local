#define _CRT_SECURE_NO_WARNINGS

#define BOARDSIZE 3
  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printBoard(char board[BOARDSIZE][BOARDSIZE]) {
	printf("-----------\n");
	for (int i = 0; i < BOARDSIZE; i++){
		for (int j = 0; j < BOARDSIZE; j++) printf(" %c |", board[i][j]);
		printf("\n");
		printf("-----------\n");
	}
}

int isCompleted(int sum) {
	if (sum == 'O'*BOARDSIZE) { // 'O' �� �� �߻�
		printf("You Win!!\n");
		return 1;
	}
	else if (sum == 'X' * BOARDSIZE) { // 'X' �� �� �߻�
		printf("Computer Win!!\n");
		return 1;
	}
	return 0;
}

int checkSum(char board[BOARDSIZE][BOARDSIZE]) {
	int sum = 0;
	// ���� ��
	for (int i = 0; i < BOARDSIZE; i++){
		sum = 0;
		for (int j = 0; j < BOARDSIZE; j++)	sum += board[i][j];
		if (isCompleted(sum)) return 1;
	}

	// ���� ��
	for (int i = 0; i < BOARDSIZE; i++){
		sum = 0;
		for (int j = 0; j < BOARDSIZE; j++)	sum += board[j][i];
		if (isCompleted(sum)) return 1;
	}

	// �밢��
	sum = 0;
	for (int i = 0; i < BOARDSIZE; i++) sum += board[i][i];
	if (isCompleted(sum)) return 1;

	// ���밢
	sum = 0;
	for (int i = 0; i < BOARDSIZE; i++) sum += board[i][BOARDSIZE - 1 - i];
	if (isCompleted(sum)) return 1;

	return 0;
}

int main() {

	int turn = 0; 
	int round = 1;
	char board[3][3];

	int x = 0, y = 0; // current index

	// �ʱ�ȭ
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) board[i][j] = ' ';


	srand(time(NULL)); // Set Seed for Computer

	printf("========================\n TIC TAC TOE ���� \n========================\n\n");

	// Set turn
	printf("���� ���� �ұ��? (1: You | others : Computer) : ");
	scanf("%d", &turn);


	while (round <= (BOARDSIZE* BOARDSIZE)) {
		printf("\n [ Round %d ]\n", round);
		if (turn == 1) { // User's Turn
			printf("Your Turn : ");			
			scanf("%d %d", &x, &y);

			// �Է� ����ó��
			if ((x < 0) || (x > 2) || (y < 0) || (y > 2)) {
				printf("0~2 ������ ��ǥ�� �Է����ּ���!\n");
				continue;
			}

			// ������̸� �Ҵ�
			if (board[x][y] == ' ') board[x][y] = 'O'; 
			else {
				printf("�� �ű⿣ ���� �� �����!\n");
				continue;
			}

			turn = 0; // User ���� ���� �� Computer turn���� �Ѱ���
		}
		else { // Computer's Turn
			printf("Computer's Turn\n");
			x = rand() % 3; // 0~2 ����
			y = rand() % 3; // 0~2 ����
			
			if (board[x][y] == ' ') { // �� �������� �˻� �� �Ҵ�
				printf("Computer Input : %d %d\n", x, y);
				board[x][y] = 'X';
			}
			else continue;

			turn = 1; // Computer ���� ���� �� User turn���� �Ѱ���
		}
		printBoard(board);

		if (checkSum(board)) { // 1�̸� ������ �̱��
			printf("Game Over\n");
			return 0;
		}
		round++;
	}
	printBoard(board);
	printf("Done -_- !\n");

	return 0;
}


