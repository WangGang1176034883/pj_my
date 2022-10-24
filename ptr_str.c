#include <stdio.h>
#include <string.h>
void str(){
    char string[] = "I Love China!";
    printf("%s\n", string);
    printf("%s\n", string+7);
    char* p;
    p = string;
    p += 7;
    while(*p){
        putchar(p[0]);
        p++;
    }
}
void str_space(){
    char s[8], *pi, *pj;
    int i, j, n;
    fgets(s, 8, stdin);
    n=strlen(s);
    //pi 和 pj 分别指向字符 串 首 末
    pi=s;
    pj=s+n-1;
    //跳 过输入时的前 导 空 格 
    while ( *pi== ' ') pi++;
    //跳 过输入时的 尾 随空 格 
    while ( *pj== ' ') pj--;
    while ((pi<pj)&&( *pi== *pj)) {
        pi++;
        pj--;
    }
    if ( pi<pj) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
}
void argum_ptr_str(){
    char a[]="I am a teacher.";
    char b[]="You are a student.";
    printf("string_a = %s\nstring_b = %s\n\n",a,b);
    char *p, *q;
    for(p=a, q=b;*p != '\0';p++,q++) {
        putchar(*p);
        *p = *q;
        putchar(*p);
    }
    printf("\n\n");
    printf("string_a = %s\nstring_b = %s\n",a,b);
    printf("\narray_a = %s\narray_b = %s\n\n",a,b);
    int i = 0;
    while(a[i] != '\0'){
        putchar(a[i]);
        a[i] = b[i];
        putchar(a[i]);
        i++;
    }
    printf("\n\n");
    printf("array_a = %s\narray_b = %s\n",a,b);
}
void rev_str(){
    char s[50] ={
    '\0'}
    ;
    char* p, *q;
    char temp;
    printf("输入字符串:");
    fgets(s,50,stdin);
    for(int i = 0;i < 25;i++) {
        temp = s[i];
        s[i] = s[50-1-i];
        s[50-1-i] = temp;
    }
    for(int i = 0;i < 50;i++) {
        printf("%3u ", s[i]);
    }
}
void stringcat(){
    char a[81] = "hello";
    char b[81] = "hunan university";
    char *p,*q;
    /*
    for(p=a,q=b;*q!='\0';p++) {
        if(*p=='\0')
        {
            *p=*q;
            q++;
        }
    }
    
    */
    p=a,q=b;
    while(*p!='\0') p++;
    while(*q!='\0'){
        *p=*q;
        p++;
        q++;
    }
    //*p=*q;
   printf("%s", a);
}
int main(int argc,char** argv) {
    //str();
    //str_space();
    //argum_ptr_str();
    //rev_str();
    stringcat();
}

