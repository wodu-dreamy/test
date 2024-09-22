#include<stdio.h>
#define GRADE_COUNT 11

char get_grade(int score);

int main() {

	printf("%c", get_grade(100));

	return 0;
}


char get_grade(int score) {
	const char grades[GRADE_COUNT] = {
		'F', 'F', 'F', 'F','F','F','D','C','B','A','A'
	};

	if (score < 0) {
		return 'X';
	}
	return grades[score/10];
}
