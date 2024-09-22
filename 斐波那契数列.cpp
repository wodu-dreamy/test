#include<stdio.h>
#include<inttypes.h>

uint32_t array(uint32_t n);

int main() {
	uint32_t number = 10;

	printf("第%u项是%u!\n",number, array(number));
	

	return 0;
}


uint32_t array(uint32_t n) {
	
	if (n <= 1) {
		return n;
	}

	uint32_t fib_n_minus_2 = 0;
	uint32_t fib_n_minus_1 = 1;
	uint32_t fib_n = 0;

	for (uint32_t i = 2; i <= n; ++i) {
		fib_n = fib_n_minus_1 + fib_n_minus_2;
		fib_n_minus_2 = fib_n_minus_1;
		fib_n_minus_1 = fib_n;
	}

	return fib_n;

}
