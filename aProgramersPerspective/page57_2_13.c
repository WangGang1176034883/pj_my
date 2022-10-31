#include <stdio.h>
int main(){
	int x = 0x66;
	int y = 0x93;
	printf("x&y  :%p\n", x&y);
	printf("x|y  :%p\n", x|y);
	printf("~x|~y:%p\n", ~x|~y);
	printf("x&!y :%p\n", x&!y);
	printf("\n");
	printf("x&&y  :%d\n", x&&y);
	printf("x||y  :%d\n", x||y);
	printf("!x||!y:%d\n", !x||!y);
	printf("x&&~y :%d\n", x&&~y);
}
