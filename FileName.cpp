#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#define BOARD_SIZE 15

int main()
{
	char number_arr[BOARD_SIZE][BOARD_SIZE];
	uint32_t x, y;
	char cont = 'y';

	for(uint32_t i = 0 ; i < BOARD_SIZE; i++){
		for (uint32_t j = 0; j < BOARD_SIZE; j++) {
			number_arr[i][j] = '.';
		}

	}
	while (cont == 'y' || cont == 'Y') {

		for (uint32_t i = 0; i < BOARD_SIZE; i++) {
			for (uint32_t j = 0; j < BOARD_SIZE j++) {
				printf("%c ", number_arr[i][j]);
			}
			printf("\n");
		}
		printf("���������̵��кź��к�(0-%u)\n", BOARD_SIZE -1);
		scanf_s("%" SCNu32 " %" SCNu32 "", &x, &y);

		if (x < 14 && y < 14 && number_arr[x][y] == '.') {
			number_arr[x][y] = 'X';
		}
		else {
			puts("������������⣡");
		}
		puts("�Ƿ�������壿��y/n)");
		scanf_s(" %c",&cont, 1);
		printf("\033[H\033[J"); //������

	}
	printf("��Ϸ������over GG!");
	return 0;

}