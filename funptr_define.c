#include <stdio.h>
int max(int x, int y){
	printf("max = ");
	return x>y?x:y;
}
int min(int x, int y){
	printf("min = ");
	return x<y?x:y;
}
int add(int x, int y){
	printf("add = ");
	return x+y;
}
void process(int x, int y,int (*p)(int x, int y)){
	int result = (*p)(x,y);
	printf("%d\n", result);
}
int main(int argc,char** argv) {
	int a, b, max(int, int), min(int, int), add(int,int);
	scanf("%d %d", &a, &b);
	process(a, b,max);
	process(a, b,min);
	process(a, b,add);
}
