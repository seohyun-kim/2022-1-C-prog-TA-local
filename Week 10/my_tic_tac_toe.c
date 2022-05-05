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
	if (sum == 'O'*BOARDSIZE) { // 'O' 한 줄 발생
		printf("You Win!!\n");
		return 1;
	}
	else if (sum == 'X' * BOARDSIZE) { // 'X' 한 줄 발생
		printf("Computer Win!!\n");
		return 1;
	}
	return 0;
}

int checkSum(char board[BOARDSIZE][BOARDSIZE]) {
	int sum = 0;
	// 가로 합
	for (int i = 0; i < BOARDSIZE; i++){
		sum = 0;
		for (int j = 0; j < BOARDSIZE; j++)	sum += board[i][j];
		if (isCompleted(sum)) return 1;
	}

	// 세로 합
	for (int i = 0; i < BOARDSIZE; i++){
		sum = 0;
		for (int j = 0; j < BOARDSIZE; j++)	sum += board[j][i];
		if (isCompleted(sum)) return 1;
	}

	// 대각선
	sum = 0;
	for (int i = 0; i < BOARDSIZE; i++) sum += board[i][i];
	if (isCompleted(sum)) return 1;

	// 역대각
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

	// 초기화
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) board[i][j] = ' ';


	srand(time(NULL)); // Set Seed for Computer

	printf("========================\n TIC TAC TOE 게임 \n========================\n\n");

	// Set turn
	printf("누가 먼저 할까요? (1: You | others : Computer) : ");
	scanf("%d", &turn);


	while (round <= (BOARDSIZE* BOARDSIZE)) {
		printf("\n [ Round %d ]\n", round);
		if (turn == 1) { // User's Turn
			printf("Your Turn : ");			
			scanf("%d %d", &x, &y);

			// 입력 예외처리
			if ((x < 0) || (x > 2) || (y < 0) || (y > 2)) {
				printf("0~2 사이의 좌표를 입력해주세요!\n");
				continue;
			}

			// 빈공간이면 할당
			if (board[x][y] == ' ') board[x][y] = 'O'; 
			else {
				printf("엇 거기엔 놓을 수 없어요!\n");
				continue;
			}

			turn = 0; // User 정상 종료 후 Computer turn으로 넘겨줌
		}
		else { // Computer's Turn
			printf("Computer's Turn\n");
			x = rand() % 3; // 0~2 범위
			y = rand() % 3; // 0~2 범위
			
			if (board[x][y] == ' ') { // 빈 공간인지 검사 후 할당
				printf("Computer Input : %d %d\n", x, y);
				board[x][y] = 'X';
			}
			else continue;

			turn = 1; // Computer 정상 종료 후 User turn으로 넘겨줌
		}
		printBoard(board);

		if (checkSum(board)) { // 1이면 누군가 이긴것
			printf("Game Over\n");
			return 0;
		}
		round++;
	}
	printBoard(board);
	printf("Done -_- !\n");

	return 0;
}


