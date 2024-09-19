#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define ROWS 10
#define COLS 10
#define EMPTY 0
#define PLANTED 1
#define MATURED 2

void print_farm(int farm[][COLS]);

int main() {

	int farm[ROWS][COLS];
	srand((unsigned int)time(NULL));

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			farm[i][j] = (rand() % 2 == 0) ? EMPTY : PLANTED;
		}
	}

	print_farm(farm);
	Sleep(1000);

	for (int time = 0; time < 5; time++) {
		system("cls");

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				if (farm[i][j] == PLANTED) {
					if (rand() % 10 < 3) {
						farm[i][j] = MATURED;
					}
				}
			}
		}
		print_farm(farm);
		Sleep(1000);
	}
	
	return 0;
}
void print_farm(int farm[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			switch (farm[i][j]) {
			case EMPTY: printf(". "); break;
			case PLANTED: printf("* "); break;
			case MATURED: printf("# "); break;

			}
		}
		printf("\n");
	}
}