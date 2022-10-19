#include <stdio.h>
#include <math.h>
int sum(int n){
    int sum = 0;
    for(int i = 0;i <= n;i++) {
        sum += i;
    }
    return sum;
}
int psum(int n){
    int sum = 0;
    for(int i = 0;i <= n;i++) {
        sum += i*i;
    }
    return sum;
}
int factorial(int n){
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
double sumsqrt(int n){
    double sum = 0;
    for(int i = 0;i <= n;i++) {
        sum += sqrt(i);
    }
    return sum;
}
double looplist(double x){
    /*
    按下面的通项计算
    SIN(X)=X-X3/3!+X5/5!-X7/7!....
    直到最后一项绝对值小于10负七次方
    */
    //double x;
    double s,a;
    //为了提高精度,我把它们定义成双精度的。
    //scanf("%lf",&x);
    /*
    注意x为弧度,输入的值过大没意义
    只要在-2*∏~2*∏即可。
    因为C语言的运算精确度有限。
    例如输入1.7,输出0.99166465
    */
    a=x;
    s=a;
    for(int i=1;fabs(a)>=1e-7;
    i+=2)
    {
        a*=x*x*(-1)/((i+1)*(i+2));
        // if(fabs(a)<1e-7) break;
        s+=a;
    }
    printf("%.8f\n",s);
    return s;
}
void pai(){
    /*
    用公式π/4≈1-1/3+1/5……求π的近似值,
    要求直到最后一项的绝对值小于0.000001为止。
    */
    double a=1,sum=0,pi;
    int f=1;
    for(a=1;a<=1e+6;a+=2)
    {
        sum+=f*1.0/a;
        f=-f;
    }
    pi=sum*4.0;
    printf("pi=%10.4lf",pi);
    /*
    此处'.4'表示小数点后保留四位小数；
    '10'表示宽度为10列
    */
}
void numlist(int n){
    /*
    求数列 1, -3!, 5!, -7! ......(-1)n-1(2n-1)!,
    n的值从键盘输入
    */
    int f = 1;
    for(int i=1;i<=n;i+=2) {
        int sum = 1;
        for(int j = 1;j <= i;j++) {
            sum *= j;
        }
        sum *= f;
        f = -f;
        printf("%d \n", sum);
    }
}
int main(int argc,char** argv) {
    //printf("%lf \n", sumsqrt(3));
    //looplist(1.7);
    //pai();
    numlist(7);
}

