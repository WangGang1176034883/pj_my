#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swip1(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("swip1 | a=%d b=%d\n", a, b);
}
void swip2(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("swip2 | a=%d b =%d\n", *a, *b);
}
void sort(int* x, int* y, int* z){
	int *a = x, *b = y, *c = z;
	int temp;
	if(*a < *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	else if(*a<*c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}
	else if(*b < *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}
void ptrarr(){
	int a[8];
	int* p;
	for(p = a;p < a+8;p++) {
		printf("p输入整数:");
		scanf("%d", p);
	}
	for(p = a;p < a+8;p++) {
		printf("p:%d ", *p);
	}
	printf("\n");
	int* q = (int*)malloc(sizeof(int)*8);
	for(int* n = q;n< q+8;n++) {
		printf("q输入整数:");
		scanf("%d",n);
	}
	for(int* n = q;n< q+8;n++) {
		printf("q:%d ", *n);
	}
	printf("\n");
	int temp;
	for(int i = 0,*p=a;i < 8;i++) {
		if(p[i] > *(q+i))
		{
			temp = p[i];
			p[i] =*(q+i);
			*(q+i) = temp;
		}
	}
	printf("q:%x\n",q);
	for(int i = 0,*p=a;i < 8;i++) {
		printf("p[%d]:%2d q[%d]:%2d\n", i, p[i], i, *q++);
		printf("p:%x a:%x q:%x\n", p+i,a+i,q-1);
	}
	free(q);
	q=NULL;
}
void ptrfind(){
	int a[10] = {
		5, 17, 9, 23, 11, 18, 43, 16, 21, 1}
	;
	int n;
	int flag = 0;
	int* p;
	printf("输入查找的整数:");
	scanf("%d",&n);
	for(p = a;p < a+10;p++) {
		if(*p == n)
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	{
		int sum = 0;
		for(p-=1;p>=a;p--) {
			sum += *p;
		}
		printf("%d前整数和:%d", n, sum);
	}
	else
	{
		printf("NO FIND");
	}
	;
}
void ptrdelzero(){
	int a[] = {
		32, -5, 18, -7, 32, 23, 98, 3, -9, 10}
	;
	int *p, *l, *s;
	int temp;
	for(p = a,l = a+10;p < l;p++) {
		if(*p < 0)
		{
			int temp;
			for(s=p;s < l;s++) {
				*s = *(s+1);
			}
			*(l-1) = 0;
			l--;
		}
	}
	for(p = a, l=a+10;p < l;p++) {
		printf("%d ", *p);
	}
}
void bubble(int* a, int n){
	int temp;
	for(int i = 0;i < n-1;i++) {
		for(int j = 0;j < n-1-i;j++) {
			if(*(a+j)>*(a+j+1))
			{
				temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = temp;
			}
		}
	}
}
void selectsort(int* a, int n){
	int temp;
	for(int i = 0;i < n-1;i++) {
		for(int j = 0;j < n-1-i;j++) {
			if(a[i] > a[j+i+1])
			{
				temp = a[i];
				a[i] = a[j+i+1];
				a[j+i+1] = temp;
			}
		}
	}
}
void lefodd_rigeve(int* a, int n){
	int temp;
	int*p = a,*l = a+n-1;
	while( p<l){
		while(*p%2 != 0)
		{
			p++;
		}
		while(*l%2==0)
		{
			l--;
		}
		if(p<l){
			temp = *p;
			*p = *l;
			*l = temp;
			p++;
		}
	}
}
void ptr_odd_even(){
	int a[20];
	int i = 0;
	while(-1){
		printf("输入整数:");
		scanf("%d",a+i);
		if(a[i] == 0)
		{
			break;
		}
		i++;
	}
	for(int j = 0;j < i;j++) {
		printf("%d ", a[j]);
	}
	//bubble(a, i);
	selectsort(a,i);
	printf("\nafter sort:\n");
	for(int j = 0;j < i;j++) {
		printf("%d ", a[j]);
	}
	printf("\nafter lefodd_rigeve:\n");
	lefodd_rigeve(a,i);
	for(int j = 0;j < i;j++) {
		printf("%d ", a[j]);
	}
}
void reve_str(){
	char str[20];
	printf("输入字符串:");
	int i = 0;
	while(-1){
		//scanf("%c", &str[i]);
		str[i] = getchar();
		if(str[i] == '\n')
		{
			break;
		}
		i++;
	}
	int len = strlen(str);
	printf("len:%d\n", len);
	char *p = str, *q = str+len-1;
	char c;
	while(p<q) {
		c = *p;
		*p = *q;
		*q = c;
		p++;
		q--;
	}
	for(int i = 0;i < len;i++) {
		printf("%c",*(str+i));
	}
}
char *tstrcat(char *s,char *t)
{
	char *p=s;
	while(*s++);
	s--;
	printf("%c\n",*s);
	while((*s++=*t++) != '\0');
	return p;
}
void charsort(){
	char* s[7] = {
		"hello", "world!", "Today", "is", "a", "good", "day!"}
	;
	for(int i = 0;i < 7;i++) {
		printf("%s ", s[i]);
	}
	printf("\n");
	char* t;
	/*
	   for(int i = 0;i < 6;i++) {
	   for(int j = 0;j < 6-i;j++) {
	   if(strcmp(s[j], s[j+1]) > 0)
	   {
	   t = s[j];
	   s[j] = s[j+1];
	   s[j+1] = t;
	   }
	   }
	   }
	   */
	for(int i = 0;i < 6;i++) {
		for(int j = 0;j < 6-i;j++) {
			if(strcmp(*(s+i),*(s+i+j+1)) > 0)
			{
				t =*(s+i);
				*(s+i)=*(s+i+j+1);
				*(s+i+j+1) = t;
			}
		}
	}
	for(int i = 0;i < 7;i++) {
		printf("%s ", s[i]);
	}
	//printf("%s\n", s);
}
void mgetline(char* a, int n){
	char *c = a;
	char ch;
	while(1){
		ch=getchar();
		if(ch== '0')
		{
			break;
		}
		*c = ch;
		c++;
	}
	printf("%s\n", a);
}
void findnum(char* a){
	while(*a){
		if(*a >'0' && *a <= '9')
		{
			printf("%c", *a);
		}
		else
		{
			printf("\n");
		}
		;
		a++;
	}
}
/*用指针解决约瑟夫问题:n个人围成一圈,
  从第 1 个人开始按 1 ,2, 3 ,… m 的顺序报数,
  数到m的人出圈,然后从出圈的下一个人开始重复,
  直到圈中剩下一人为止.试 输出出圈序列.
  要求:若不从第 1 个人开 始 报 数,
  改成从第 s 个人开始报数程序怎样修
  */
void cycnum(int* a, int n, int num){
	int *p = a;
	int* del =a;
	while(n>1){
		printf("********\n");
		for(int i = 0;i < num-1;i++) {
			if(del>=a+n)
			{
				del = a;
			}
			printf("del:%d --*(a+n):%d-- ",*del, *(a+n));
			del++;
			if(del>=a+n)
			{
				del = a;
			}
			printf("del++:%d\n",*del);
		}
		printf("*********\n");
		printf("del删除的编号:%d\n",*del);
		int* nex = del +1;
		for(int *tem=del;nex < a+n;nex++,tem++) {
			*tem = *nex;
		}
		n--;
		for(int*m = a;m< a+n;m++) {
			printf("%d ",*m);
		}
		printf("\n\n");
	}
}
int main(int argc,char** argv) {
	/*
	   int a = 10, b=3;
	   swip1(a,b);
	   printf("%d %d\n", a,b);
	   swip2(&a,&b);
	   printf("%d %d\n",a, b);
	   */
	/*
	   int x = 5, y =7, z=3;
	   sort(&x, &y,&z);
	   printf("%d %d %d", x, y, z);
	   */
	//ptrarr();
	//ptrfind();
	//ptrdelzero();
	//ptr_odd_even();
	//reve_str();
	/*
	   char *str = "hello";
	   printf("%c", str[1]);
	   */
	/*
	   char a[100]="miss you";
	   char *b="kui";
	   printf("%s\n",tstrcat(a,b));
	   */
	//charsort();
	/*
	   char a[256];
	   mgetline(a,256);
	   findnum(a);
	   return 0;
	   */
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cycnum(a, 10, 3);
}
