#include <stdio.h>
void two_ptr(){
	/*
	   只有
	   指针数组 和 二级指针 
	   可以相互赋值
	   */
	//二维数组
	static char c[][16] ={
		"internet","times","math-ematics","geography"}
	;
	//指针数组
	/*
	   char* cp[4] ={
	 *c, *(c+1), *(c+2), *(c+3)}
	 ;
	 */
	char* cp[4] ={c[0], c[1], c[2], c[3]};
	//二级指针
	char** cpp = cp;
	printf("CP:\n");
	for(int i = 0;i < 4;i++) {
		//printf("%s ", cp[i]);
		printf("%s ", *(cp+i));
	}
	printf("\n");
	for(int i = 0;i < 4;i++) {
		for(int j = 0;j < 16;j++) {
			//printf("%c", *(*(cp+i)+j));
			//printf("%c", cp[i][j]);
			printf("%c", *(cp[i]+j));
		}
		printf(" ");
	}
	printf("\nCPP:\n");
	for(int i = 0;i < 4;i++) {
		//printf("%s ", *(cpp+i));
		printf("%s ", cpp[i]);

	}
	printf("\n");
	for(int i = 0;i < 4;i++) {
		for(int j = 0;j < 16;j++) {
			//printf("%c", *(*(cpp+i)+j));
			//printf("%c", cpp[i][j]);
			printf("%c", *(cpp[i]+j));
		}
		printf(" ");
	}
}
int main(int argc,char** argv) {
	two_ptr();
}
