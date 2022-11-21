#include <stdio.h>
#include <stdlib.h>
void ptr(){
	int i=10,k;
	int *p;
	p= &k;
	*p=i;
	printf("i:%p p:%p k:%d i:%d\n ", &i, p,k, i );
}
void ptrcmp(){
	int *p1, *p2, *p3, *p, i,j, k;
	printf("输入三个整数:");
	scanf("%d %d %d", &i, &j, &k);
	p1 =&i;
	p2 =&j;
	p3 =&k;
	p = p1;
	p1=p3;
	p3=p2;
	p2=p;
	printf("i:%d  j:%d k:%d\n", i, j, k);
	printf("*p1:%d *p2:%d *p3:%d\n", *p1, *p2, *p3);
}
void ptrmulti(){
	char ch;
	int num;
	float f;
	double ff;
	char *pch=&ch;
	int *pnum=&num;
	float *pf=&f;
	double *pff=&ff;
	int a1[4]={
		13,14,15,16}
	;
	int *pa1=a1;
	int a2[3][4]={
		{
			1,3,5,7}
		,{
			9,11,13,15}
		,{
			17,19,21,23}
	}
	;
	int *pa2=a2[0];
	printf("&ch=%u, &ch+1=%u, ++pch:%u\n",&ch,&ch+1,++pch);
	printf("&num=%u, &num+1=%u, ++pnum:%u\n",&num,&num+1,++pnum);
	printf("&f=%u, &f+1=%u, ++pf:%u\n",&f,&f+1,pf++);
	printf("&ff=%u, &ff+1=%u, ++pff:%u\n\n",&ff,&ff+1,++pff);
	printf("a1 : %u, a1+1=%u, ++pa1:%u\n",a1,a1+1,++pa1);
	printf("a2[0]:%u, a2[0]+1=%u,++pa2:%u\n",a2[0],a2[0]+1,++pa2);
	printf("*a2:%u, *a2+1=%u\n",*a2,*a2+1);
	// *a2 引用了 a2[0] printf("a2:%u, a2+1=%u\n",a2,a2+1);
	printf("&a2[0]:%u, &a2[0]+1=%u\n",&a2[0],&a2[0]+1);
}
void ptr_avg(){
	int n;
	printf("个数n:",&n);
	scanf("%d", &n);
	int* ptr = (int*)malloc(sizeof(int)*n);
	for(int i = 0;i < n;i++) {
		printf("输入第%d个数:",i+1);
		scanf("%d", ptr++);
	}
	ptr -= n;
	double sum=0;
	for(int i = 0;i<n;i++) {
		sum+=*(ptr++);
	}
	printf("avg:%.2lf\n",sum/n);
	free(ptr);
	ptr =NULL;
}
void ptr_find(){
	int a[10] = {
1,2,3,4,5,6,7}
	;
	int num;
	printf("输入要查找的数:");
	scanf("%d", &num);
	int* ptr = a;
	int flag = 0;
	printf("p%p\n", ptr+10);
	while(ptr<a+10){
		printf("p:%p *ptr:%d\n", ptr, *ptr);
		if(num==*(ptr++))
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	{
		printf("查到了!\n");
	}
	else
	{
		printf("NO FIND!\n");
	}
	;
}
void ptr_rev(){
	int a[10] = {
1,2,3,4,5,6,7}
	;
	int* ptr = a+9;
	int* pa = a;
	int temp;
	while(ptr >=a+5){
		temp=*pa;
		*pa = *ptr;
		*ptr = temp;
		printf("%d %d\n", *pa, *ptr);
		pa++;
		ptr--;
	}
	for(int i = 0;i < 10;i++) {
		printf("%d ", *(a+i));
	}
}
void inv(int a[], int n){
	int temp;
	for(int i = 0;i < n/2;i++) {
		temp = a[i];
		a[i]  = a[n-i-1];
		a[n-i-1] = temp;
	}
}
void ptr_num(){
	int a[10];
	int max,min,num;
	for(int i = 0;i < 10;i++) {
		printf("输入第%d个数:", i+1);
		scanf("%d", a+i);
	}
	for(int i = 0;i < 10;i++) {
		printf("%d ", *(a+i));
	}
	printf("\n");
	max=*a;
	min= *a;
	int imax, imin;
	for(int i = 1;i < 10;i++) {
		if(max<*(a+i))
		{
			max = *(a+i);
			imax = i;
		}
		if(min>*(a+i))
		{
			min = *(a+i);
			imin = i;
		}
	}
	printf("max:%d min:%d\n", max, min);
	int temp;
	temp = *(a+imax);
	*(a+imax) = *a;
	*a= temp;
	temp = *(a+imin);
	*(a+imin) = *(a+9);
	*(a+9) = temp;
	for(int i = 0;i < 10;i++) {
		printf("%d ", *(a+i));
	}
}
void ptr_del(){
	int a[10] = {
		32, -5, 18, -7, 32, 23, 98, 3, -9, 10}
	;
	int* p = a;
	int *m;
	int i = 10;
	for(p=a;p<a+10;p++) {
		if(*p<0)
		{
			for(m=p;m<a+10;m++) {
				*m = *(m+1);
			}
			*(a+i) = 0;
			i--;
		}
	}
	for(p=a;p<a+10;p++) {
		printf("%d ", *p);
	}
}
void ptr_sort(){
	int a[] ={
		2,1,6,7,4,8,3,9,5}
	;
	for(int i = 0;i < 9;i++) {
		printf("%d ", *(a+i));
	}
	printf("\n");
	int j = 0,k = 9,temp,*p = a;
	for(int i = 0;i <= 9;i++) {
		if(*(p+i)%2==0)
		{
			temp =*(p+j);
			*(p+j) = *(p+i);
			*(p+i) = temp;
			/*
			   for(int i = 0;i < 9;i++) {
			   printf("j:%d ", *(a+i));
			   }
			   printf("\n");
			   */
			j++;
		}
		else
		{
			temp = *(p+k);
			*(p+k) = *(p+i);
			*(p+i) = temp;
			/*
			   for(int i = 0;i < 9;i++) {
			   printf("k:%d ", *(a+i));
			   }
			   printf("\n");
			   */
			k--;
		}
	}
	for(int i = 0;i < 9;i++) {
		printf("%d ", *(a+i));
	}
}
int main(int argc,char** argv) {
	//ptr();
	//ptrcmp();
	// ptrmulti();
	//ptr_avg();
	//ptr_find();
	/*
	   int a[10]={
	   3,7,9,11,0,6,7,5,4,2}
	   ;
	   for(int i = 0;i < 10;i++) {
	   printf("%d ", a[i]);
	   }
	   printf("\n");
	   inv(a,10);
	   for(int i = 0;i < 10;i++) {
	   printf("%d ", a[i]);
	   }
	   */
	//ptr_num();
	//ptr_del();
	ptr_sort();
}

