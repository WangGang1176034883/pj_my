#include <stdio.h>
//整形(char,int)可以进行按位运算
int isequal(int x, int y){
	return !(x^y);
}
int main(){
	printf("%d\n", isequal('c', 'c'));
}
