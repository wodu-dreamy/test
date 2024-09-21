#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<time.h>
#include<stdlib.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
// rock paper scissors

void print_instructions();
uint32_t get_player_choice();
uint32_t get_computer_choice();
void print_choice(uint32_t choice);
void determine_winner(uint32_t player_choice, uint32_t computer_choice);
int main(void) {
	
	srand(time(NULL));

	print_instructions();

	uint32_t player_choice = get_player_choice();

	uint32_t computer_choice = get_computer_choice();

	puts("您选择了：");
	print_choice(player_choice);
	puts("电脑选择了：");
	print_choice(computer_choice);

	 determine_winner(player_choice,computer_choice);

	return 0;
}



void print_instructions() {
	puts("石头、剪刀、布，游戏开始！");
	puts("规则：");

}

uint32_t get_player_choice() {

	uint32_t choice;
	puts("请选择：1、石头 2、布 3、剪刀");
	scanf_s("%u",&choice);

	while (choice < ROCK || choice > SCISSORS) {
		puts("您的输入无效，请重新输入！");
		scanf_s("%u", &choice);
	}

	return choice;
}

uint32_t get_computer_choice() {

	return (rand() % (SCISSORS - ROCK +1)) + ROCK;
}

void print_choice(uint32_t choice) {
	switch (choice) {
	case ROCK: puts("石头"); break;
	case PAPER: puts("布"); break;
	case SCISSORS: puts("剪刀"); break;
	}

}

void determine_winner(uint32_t player_choice, uint32_t computer_choice) {
	if (player_choice == computer_choice) {
		puts("平局！");
	}
		uint32_t winner_choice[4] = { 0, SCISSORS, ROCK, PAPER };
			if (computer_choice == winner_choice[player_choice]) {
				puts("您赢了！");
			}
			else {
				puts("您输了！");
			}
}
