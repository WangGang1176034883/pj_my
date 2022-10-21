#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define N 10
void mergearr(int* arr, int* nextarr, int n){
    int newarr[2*n];
    for(int i = 0;i <2*n;i++) {
        if(i<n)
        {
            newarr[i] = arr[i];
        }
        else
        {
            newarr[i] = nextarr[i-n];
        }
    }
    for(int i = 0;i < 2*n;i++) {
        int temp;
        for(int j = i+1;j < 2*n;j++) {
            if(newarr[i] > newarr[j])
            {
                temp = newarr[i];
                newarr[i] =newarr[j];
                newarr[j] = temp;
            }
        }
    }
    for(int i = 0;i < 2*n;i++) {
        printf("%d ", newarr[i]);
    }
}
void switcharr(int* arr, int* nextarr, int n){
    int temp;
    for(int i = 0;i < n;i++) {
        temp = arr[i];
        arr[i] = nextarr[i];
        nextarr[i] = temp;
    }
    for(int i = 0;i < n;i++) {
        printf("arr:%d nextarr:%d\n", arr[i], nextarr[i]);
    }
}
void mvarr(int* arr, int n){
    int num;
    int index = -1;
    printf("\n输入要移动的数的下标p<n:");
    scanf("%d", &num);
    int mv[num+1];
    for(int i = 0;i <= num;i++) {
        mv[i] = arr[i];
    }
    int j=num;
    for(int i = 0;i <n;i++) {
        if(i < n-num-1)
        {
            arr[i] = arr[j+1];
            j++;
        }
        else
        {
            arr[i] = mv[i-(n-num-1)];
        }
    }
    for(int i = 0;i < n;i++) {
        printf("%d ", arr[i]);
    }
}
void delarr(int* arr, int n){
    int num;
    int index = -1;
    printf("\n输入要删除得数:");
    scanf("%d", &num);
    for(int i = 0;i < n;i++) {
        if(arr[i] == num)
        {
            index = i;
            break;
        }
    }
    if(index < 0)
    {
        printf("该数不存在!\n");
    }
    else{
        for(int i = index;i < n;i++) {
            arr[i] = arr[i+1];
            printf("i:%d\n", i);
        }
    }
    for(int i = 0;i < n-1;i++) {
        printf("%d ", arr[i]);
    }
}
void farr(int* arr, int n){
    int num;
    int index = -1;
    printf("\n输入要查找得数:");
    scanf("%d", &num);
    for(int i = 0;i < n;i++) {
        if(arr[i] == num)
        {
            index = i;
            break;
        }
    }
    if(index < 0)
    {
        printf("NO FIND\n");
    }
    else
    {
        printf("i:%d \n", index);
    }
}
void insertsort(int* arr, int len, int num){
    int* newarr = (int*)malloc(sizeof(int)*(len+1));
    if(newarr == NULL)
    {
        printf("空指针异常!\n");
    }
    int i;
    for(i = 0;i < len+1;i++) {
        if(num < arr[i])
        {
            newarr[i] = num;
            printf("i:%d n:%d na:%d a:%d\n", i, num, newarr[i], arr[i]);
            break;
        }
        newarr[i] = arr[i];
        printf("\n%d %d\n", newarr[i], arr[i]);
    }
    for(i+=1;i < len+1;i++) {
        newarr[i] = arr[i-1];
        printf("i:%d na:%d a:%d\n", i, newarr[i],arr[i-1]);
    }
    arr = newarr;
    free(newarr);
    newarr = NULL;
    for(int i = 0;i < len+1;i++) {
        printf("%d ", arr[i]);
    }
}
void sortarr(int* arr, int len){
    int temp;
    for(int i = 0;i < len;i++) {
        for(int j = i+1;j < len;j++) {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void initarr(int* arr, int len, int max){
    srand(time(NULL));
    for(int i = 0;i < len;i++) {
        arr[i] = rand()%max;
    }
}
void creatarr(int* arr, int n){
    initarr(arr, n, 20);
    sortarr(arr, n);
    for(int i = 0;i < n;i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}
int main(int argc,char** argv) {
    int arr[N];
    creatarr(arr, N);
    //insertsort(arr, N, 7);
    //farr(arr, N);
    //delarr(arr, N);
    //mvarr(arr,N);
    sleep(1);
    int nextarr[N];
    creatarr(nextarr, N);
    //switcharr(arr, nextarr, N);
    mergearr(arr, nextarr, N);
}

