#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void countchar(){
    char str[100];
    int chcount=0, numcount=0;
    int othercount=0,allcount=0;
    printf("输入字符串:");
    scanf("%s", str);
    for(int i = 0;i < strlen(str);
    i++) {
        if((str[i] >= 'a'&&str[i] <='z')||(str[i] >= 'A'&&str[i] <='Z'))
        {
            chcount++;
        }
        else if(str[i] >='0'&&str[i] <='9')
        {
            numcount++;
        }
        else
        {
            othercount++;
        }
        allcount++;
    }
    printf("char:%d num:%d other:%d allcount:%d\n", chcount, numcount, othercount, allcount);
}
void countchar1(){
    //char str[100];
    char c;
    int chcount=0, numcount=0;
    int othercount=0,allcount=0;
    int n;
    printf("输入字符个数:");
    scanf("%d", &n);
    while(getchar() != '\n') continue;
    printf("输入字符串:");
    for(int i = 0;i < n;i++) {
        //c = getchar();
	system("stty -echo");
        c = getchar();
	system("stty echo");
        putchar(c);
        if((c >= 'a'&&c <='z')||(c >= 'A'&&c <='Z'))
        {
            chcount++;
        }
        else if(c >='0'&&c <='9')
        {
            numcount++;
        }
        else
        {
            othercount++;
        }
        allcount++;
    }
    printf("char:%d num:%d other:%d allcount:%d\n", chcount, numcount, othercount, allcount);
}
void lowandup(){
    char ch[50];
    printf("输入字符串:");
    scanf("%s", ch);
    for(int i = 0;i < strlen(ch);
    i++) {
        if(ch[i] >=65&&ch[i] <65+26)
        {
            ch[i] +=32;
        }
        else if(ch[i] >=97&&ch[i] <97+26)
        {
            ch[i] -=32;
        }
    }
    for(int i = 0;i < strlen(ch);
    i++) {
        printf("%c ", ch[i]);
    }
}
void lowandup1(){
    char ch[50];
    printf("输入字符串:");
    scanf("%s", ch);
    for(int i = 0;i < strlen(ch);
    i++) {
        if(isalpha(ch[i]))
        {
            if(isupper(ch[i]))
            {
                tolower(ch[i]);
            }
            else
            {
                {
                }
                toupper(ch[i]);
            }
            ;
        }
    }
    for(int i = 0;i < strlen(ch);
    i++) {
        printf("%c ", ch[i]);
    }
}
void stringlen(){
    char ch[100];
    printf("输入字符串:");
    scanf("%s", ch);
    puts(ch);
    /*
    int i = 0;
    while(ch[i] != '\0'){
        i++;
    }
    printf("%d\n", i);
    */
    /*
    char* p = ch;
    int i;
    for(i = 0;*p !='\0';p++,i++) ;
    printf("%d\n", i);
    */
    char* sptr, *lptr;
    sptr = ch;
    lptr = ch;
    while(*lptr){
        lptr++;
    }
    printf("%d\n", lptr-sptr);
    //printf("%d\n", strlen(ch));
}
void ptr()
{
    int *p=NULL;
    printf("p s=%s\n",p);
    printf("p d=%d\n", p);
    printf("p f=%f\n", p);
    printf("p x=%x\n", p);
    char ch = '\0';
    printf("%d\n", ch);
}
void str(){
    char s1[10]={
    'A', '\0', 'B', 'C', '\0', 'D'}
    ;
    char s2[ ]="\t\v\\\0will\n";
    char s3[ ]="\x69\082\n";
    char s4[5] = {
    'a', 's', 'g', 'h', 'k'}
    ;
    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);
    printf("%d %d %d %d\n", strlen(s1), strlen(s2), strlen(s3), strlen(s4));
}
void password(){
    char word[6] = "asdfgh";
    int count = 0;
    char inw[6];
    while(count < 3){
        printf("输入密码:");
        scanf("%s", inw);
        /*
        if(strcmp(word, inw) == 0)
        {
            printf("密码正确!\n");
            break;
        }
        else
        {
            printf("密码错误!\n");
        }
        */
        /*
        int flag = 1;
        for(int i = 0;i < strlen(word);
        i++) {
            if(word[i] != inw[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            printf("密码错误!\n");
        }
        else
        {
            printf("密码正确!\n");
            break;
        }
        */
        count ++;
    }
}
void palindchar(){
    char ch[50];
    int flag = 1;
    printf("输入字符串");
    scanf("%s", ch);
    int len = strlen(ch);
    for(int i = 0, j= len-1;i < len/2;i++, j--) {
        if(ch[i] != ch[j]){
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("是回文字符!\n");
    }
    else
    {
        printf("不是回文字符!\n");
    }
}
void catchar(){
    char ch1[10];
    char ch2[10];
    int flag = 1;
    printf("输入字符串1:");
    scanf("%s", ch1);
    printf("输入字符串2:");
    scanf("%s", ch2);
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    int len = len1 + len2;
    char* ptr = (char*)malloc(len+1);
    for(int i = 0;i < len;i++) {
        if(i<len1)
        {
            ptr[i] = ch1[i];
        }
        else
        {
            ptr[i] = ch2[i-len1];
        }
    }
    ptr[len] = '\0';
    puts(ptr);
    printf("%s",ptr);
    free(ptr);
    ptr = NULL;
}
int main(int argc,char** argv) {
    //countchar();
    //lowandup();
    //stringlen();
    //ptr();
    //str();
    //password();
    //palindchar();
    catchar();
}

