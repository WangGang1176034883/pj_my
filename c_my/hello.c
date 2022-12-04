#include <stdio.h>
#include <stdlib.h>
int main(){
	int* a = malloc(sizeof(int)*3);
	a[0] = 10;
	a[1] = 11;
	a[2] = 12;
	a[3] = 10;
	for(int i =0;i<3;i++){
		printf("%d\n", a[i]);
	}
	free(a);
	printf("\n");
	printf("hello,world!\n");
	return 0;
}
