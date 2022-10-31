#include <stdio.h>
int main(){
	int x = 0x98fdecba;
	int A = 0xffffff00;
	int B = 0xff;
	int C = 0xffffff00;
	printf("%p\n", x|A);
	printf("%p\n", x^B);
	printf("%p\n", x&C);
}
