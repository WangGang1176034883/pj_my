#include <stdio.h>
void ptr_twoarray(){
	int a[3][4]={
		{
			1,3,5,7}
		,{
			9,11,13,15}
		,{
			17,19,21,23}
	}
	;
	int *p;
	/*
	   p = *a
	   p = *(a+0)
	   p= a[0]
	   p=&a[0][0]
	   */
	for(p=&a[0][0];p<&a[0][0]+12;p++) {
		if((p-a[0])%4 == 0)
		{
			printf("\n");
		}
		printf("%2d ", *p);
	}
}
void ptr_twoarray1(){
	int a[3][4]={
		{
			3,5,3,4}
		,{
			3,4,5,6}
		,{
			5,6,7,8}
	}
	;
	int i;
	int (*p)[4]=a,*q=a[0];
	for(i=0;i<3;i++) {
		if(i==0) (*p)[i+i/2]=*q+1;
		else p++,++q;
		printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2],a[i][3]);
		printf("\n");
	}
	for(i=0;i<3;i++) printf("%d,",a[i][i]);
	printf("\n");
	printf("%d,%d\n",**p,*q);
}
void ptr_twoarray2(){
	int a[2][3]={
		11,22,33,44,55,66}
	,t[3][2];
	int (*p)[3],(*q)[2],i,j;
	p=a;
	q=t;
	for(int i = 0;i < 2;i++) {
		for(int j = 0;j < 3;j++) {
			*(*(q+j)+i) = *(*(p+i)+j);
		}
	}
	printf("a:\n");
	for(int i = 0;i < 2;i++) {
		for(int j = 0;j < 3;j++) {
			*(*(q+j)+i) = *(*(p+i)+j);
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
	printf("t:\n");
	for(int i = 0;i < 3;i++) {
		for(int j = 0;j < 2;j++) {
			*(*(q+j)+i) = *(*(p+i)+j);
			printf("%d ", *(*(q+i)+j));
		}
		printf("\n");
	}
}
void ptrarray(){
	char a[] = "Fortran";
	char b[] = "Lisp";
	char c[] = "Basic";
	char name[5][9]={
		"Fortran","Lisp","Basic","fgg"}
	;
	// printf("%p\n", name[0]++);
	char *p[4];
	p[0] =a;
	p[1] = b;
	p[2] = c;
	p[3] =NULL;
	printf("%s\n",p[0]+=2);
	printf("%s\n",p[1]);
	printf("%s\n",p[2]);
	printf("%s\n",p[3]);
	/*
	   char *p[4]={
	   "Fortran","Lisp","Basic",NULL}
	   ;
	   */
	//printf("%s\n",p);
}
void ptrarray1(){
	int b[2][3],*pb[2];
	for(int i = 0;i < 2;i++) {
		for(int j = 0;j < 3;j++) {
			b[i][j] = (i+1)*(j+1);
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("**************\n");
	pb[0] = *b;
	pb[1] = b[1];
	for(int i = 0;i < 2;i++) {
		for(int j = 0;j < 3;j++) {
			printf("p[%d][%d]%d\n", i, j, *(pb[i]++));
		}
	}
}
void ptr_stu(){
	int score[3][4] = {
		{
			92,85,68,75}
		,{
			54,88,98,45}
		,{
			61,79,81,40}
	}
	;
	int* ps[3];
	ps[0] = *score;
	ps[1] = *(score+1);
	ps[2] = *(score+2);
	float sum = 0.0f, name = 0.0f;
	for(int i = 0;i < 3;i++) {
		float sum = 0.0f;
		int j;
		for(j = 0;j< 4;j++) {
			printf("%d ",*(ps[i]+j));
			sum += ps[i][j];
		}
		printf("\n第%d名学生平均成绩:%f\n",i+1, sum/j);
		printf("\n");
	}
	printf("************************\n");
	for(int i = 0;i < 4;i++) {
		int j;
		for(j = 0;j < 3;j++) {
			printf("%d ",*(ps[j]+i));
			name += ps[j][i];
		}
		printf("\n第%d门课程平均成绩:%f\n",i+1,name/j);
		printf("\n");
	}
}
int main(int argc,char** argv) {
	//ptr_twoarray();
	//ptr_twoarray1();
	//ptr_twoarray2();
	//ptrarray1();
	ptr_stu();
}
