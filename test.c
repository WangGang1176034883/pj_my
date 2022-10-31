#include <stdio.h>
#include <stdlib.h>
char *tstrcat(char *s,char *t)
{
	char *p=s;
	while(*s++);
	s--;
	while((*s++=*t++) != '\0');
	return p;
}
int main(void)
{
	char a[100]="miss you ";
	char *b="kui";
	printf("%s\n",tstrcat(a,b));
	return 0;
}
