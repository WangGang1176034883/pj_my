#include <stdio.h>
enum colors{RED, YELLOW, GREEN};
int main(int argc, char** argv){
    enum colors c;
    while(1){
        printf("RED--%d, YELLOW--%d, GREEN--%d\n", RED, YELLOW, GREEN);
        printf("输入:");
        scanf("%d", &c);
        if(c>2)
        {
            break;
        }
        switch(c)
        {
            case RED:
            printf("颜色号%d: RED\n", c);
            break;
            case YELLOW:
            printf("颜色号%d: YELLOW\n", c);
            break;
            case GREEN:
            printf("颜色号%d: GREEN\n", c);
            break;
            default:
            printf("没有颜色号!\n");
            break;
	}
	printf("********************\n");
    }
    printf("Hello world\n");
    return 0;
}

