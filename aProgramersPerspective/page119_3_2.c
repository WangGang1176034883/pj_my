#include <stdio.h>
void decode(int* xp, int* yp, int* zp){
	int x = *xp;
	int y = *yp;
	int z = *zp;
	*yp = x;
	*zp = y;
	*xp = z;
}
int main(){
	int x = 3; 
	int y = 4;
	int z = 5;
	decode(&x, &y, &z);
	printf("x:%d y:%d z:%d\n", x, y, z);
}
