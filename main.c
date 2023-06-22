#include <stdio.h>

void print_bytes(int a) {

	char* ptr = &a;

	for (int i = 0; i < 4; i++) {
		
		printf("%x\n", *ptr);
		ptr++;
	}
}

void change_byte(int a) {

	char* ptr = &a;
	ptr = ptr + 1;

	*ptr = 0xAA;


	printf("%x\n", a);
}

int main(void) {

	int a = 0x5A1C5911;

	printf("%x\n", a);
	print_bytes(a);
	change_byte(a);

	return 0;
}