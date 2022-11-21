#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){
    /*
    float(32位):符号位(1位)-指数位(8位)-尾数位(23位)
    十进制数0.75和输出的二进制数相等
    十进制数0.1和输出的二进制数不相等
    */
    float data = 0.1;
    unsigned long buff;
    char s[34];
    memcpy(&buff, &data, 4);
    printf("%ld\n", buff);
    for(int i = 33;i >=0;i--) {
        if(i == 1 || i == 10)
        {
            s[i] = '-';
        }
        else
        {
            if(buff%2==1)
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
            buff /= 2;
        }
    }
    s[33]='\0';
    printf("%s\n", s);
    return 0;
}

