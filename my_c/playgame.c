#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int human = 0;
    int prev =0;
    int max = 0;
    int count =0;
    int computer = 0;
    int flag = 0;
    int memary[3][3] = {0};
    srand(time(NULL));
    while(1){
        printf("剪刀, 石头...(0-剪刀,1-石头,2-布)\n");
        printf("出拳:");
        scanf("%d", &human);
        printf("布!\n");
        if(0>human || 2<human) break;
        if(count < 9){
            computer = rand()%3;
        }
        else
        {
            if(memary[prev][max] < memary[prev][1]) max =1;
            if(memary[prev][max] < memary[prev][2]) max =2;
            computer = (max + 2) %3;
        }
        flag = human - computer;
        if(flag == 1 || flag == -2)
        {
            printf("人类赢了!(h:%d c:%d)\n", human, computer);
        }
        else if(flag == 0)
        {
            printf("平局!(h:%d c:%d)\n", human, computer);
        }
        else{
            printf("计算机赢了!(h:%d c:%d)\n", human, computer);
        }
        printf("***************%d****************\n", count);
        count++;
        memary[prev][human]++;
        prev = human;
    }
    printf("Hello world\n");
    return 0;
}

