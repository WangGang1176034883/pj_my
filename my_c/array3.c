#include <stdio.h>
#include <stdlib.h>
#define N 8
void arr_cpy_multi(){
    /*
    将数组a的行列元素互换
    存到数组b中
    */
    int a[2][3]={
        {
        1,2,3}
        ,{
        4,5,6}
    }
    ;
    int b[3][2];
    int c[2][2] = {
    0}
    ;
    printf("array a:\n");
    for(int i=0;i<=1;i++) {
        for(int j=0;j<=2;j++) {
            printf("%5d",a[i][j]);
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("array b:\n");
    for(int i=0;i<=2;i++) {
        for(int j=0;j<=1;j++) printf("%5d",b[i][j]);
        printf("\n");
    }
    //数组c等于数组a乘与数组b
    /*
    1 2 3       1 5
    5 3   1+10+24(35)  5+6+3(14)    35 14
    4 5 6      8 1   4+25+48(77)  20+15+6(41)  77 41
    */
    for(int i = 0;i < 2;i++) {
        for(int j = 0;j < 2;j++) {
            for(int k = 0;k < 3;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("array c:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) printf("%5d",c[i][j]);
        printf("\n");
    }
}
void max_arr(){
    int a[3][4]={
        {
        1,2,3,4}
        , {
        9,8,7,6}
        , {
        -10,10,-5,2}
    }
    ;
    int i,j,row=0,colum=0,max;
    max=a[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            if(a[i][j]>max)
            max=a[i][j];
            row=i;
            colum=j;
        }
    }
    printf("max=%d,row=%d,colum=%d\n",max,row,colum);
}
void count_word(){
    char string[81];
    int i,num=0,word=0;
    char c;
    fgets(string,81,stdin);
    for(i=0;(c=string[i])!='\0';
    i++) {
        if(c!=' '){
            word=0;
        }
        else if(word==0) {
            word=1;
            num++;
        }
    }
    printf("There are %d words in the line\n",num);
}
void Fibonacci(){
    int n, num1,num2,num3;
    num1 = 1;
    num2 = 1;
    printf("输出行数:");
    scanf("%d", &n);
    printf("%d\n", num1);
    printf("%d\n", num2);
    for(int i = 0;i < n-2;i++) {
        num3 = num1+num2;
        printf("%d\n", num3);
        num1 = num2;
        num2 = num3;
    }
}
void edge(){
    int arr[N][N];
    /*
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    */
    for(int i = 0;i < N;i++) {
        for(int j = 0;j <= i;j++) {
            /*
            if(i>1&&j==0)
            {
                arr[i][j] = 1;
            }
            if(i>1&&j!=0)
            {
                arr[i][j] = arr[i-1][j-1] +arr[i-1][j];
            }
            if(i>1&&j==i)
            {
                arr[i][j] = 1;
            }
            */
            arr[i][0] = 1;
            if(i>1)
            {
                arr[i][j] = arr[i-1][j-1] +arr[i-1][j];
            }
            if(i==j) arr[i][j] = 1;
        }
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j <= i;j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}
void bubble(){
    int arr[] = {
    2,1,34,5,3,65}
    ;
    for(int i = 0;i < 6-1;i++) {
        int temp;
        for(int j = 0;j < 6-1-i;j++) {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0;i < 6;i++) {
        printf("%d ", arr[i]);
    }
}
void select_sort(){
    int arr[] = {
    2,1,34,5,3,65}
    ;
    for(int i = 0;i < 6-1;i++) {
        int temp;
        for(int j = 0;j < 6-1-i;j++) {
            if(arr[i]> arr[i+j+1])
            {
                temp = arr[i];
                arr[i] = arr[i+j+1];
                arr[i+j+1] = temp;
            }
        }
    }
    for(int i = 0;i < 6;i++) {
        printf("%d ", arr[i]);
    }
}
void simple_sort(){
    int arr[] = {
    2,1,34,5,3,65}
    ;
    for(int i = 0;i < 6;i++) {
        int temp;
        for(int j = i+1;j < 6;j++) {
            if(arr[i]> arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i < 6;i++) {
        printf("%d ", arr[i]);
    }
}
int main(){
    //arr_cpy_multi();
    //max_arr();
    //count_word();
    //Fibonacci();
    //edge();
    //bubble();
    simple_sort();
}

