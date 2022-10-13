#include <stdio.h>
#define N 10
enum staff{
Cheng, Li, Wang, Gao, Pan};
int main(int argc, char** argv){
    enum staff day[N], j;
    int i, k, n;
    char *name[] = {"程丽华", "李小明", "王琳", "高小杰", "潘俊民"};
    j = Cheng;
    for(int i = 0;i < N;i++) {
        day[i] = j;
        j =(enum staff)( (int)(j+1) );
        if(j > Pan)
        {
            j = Cheng;
        }
    }
    for(int i = 0;i < N/2;i++) {
        n = (int)(day[i*2]);
        k = (int)(day[i*2+1]);
        printf("%2d %-8s %-8s\n", i+1, name[n], name[k]);
    }
    printf("Hello world");
    return 0;
}

