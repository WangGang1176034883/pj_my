#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
void prime_num(){
    int n;
    printf("输入:");
    scanf("%d", &n);
    int isprime = 1;
    for(int i = 2;i < n;i++) {
        if(n%i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if(isprime == 1)
    {
        printf("Yes!");
    }
    else
    {
        printf("No!");
    }
}
void hundred_prime(){
    for(int i = 2;i < 100;i++) {
        int isprime = 1;
        for(int j = 2;j < i;j++) {
            if(i%j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1)
        {
            printf("%d\n", i);
        }
    }
}
void perfect_num(){
    for(int i = 2;i < 1000;i++) {
        int sum= 0;
        for(int j = 1;j < i;j++) {
            if(i%j == 0)
            {
                sum += j;
            }
        }
        if(i == sum)
        {
            printf("%d\n", i);
        }
    }
}
void daffodil(){
    for(int i = 100;i <1000;i++) {
        if(i == (int)pow(i/100,3)+(int)pow(i%100/10,3)+(int)pow(i%10,3))
        {
            printf("%d\n", i);
        }
    }
}
void palindromic(){
    for(int i = 10;i < 10000;i++) {
        int a,b,c,d;
        a = i/1000;
        b = i%1000/100;
        c = i%100/10;
        d = i%10;
        if(a>0)
        {
            if(i == d*1000+c*100+b*10+a)
            {
                printf("%d\n", i);
            }
        }
        else if(b>0)
        {
            if(i == d*100+c*10+b)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            if(i == d*10+c)
            {
                printf("%d\n", i);
            }
        }
        ;
    }
}
void horse(){
    int bhorse, mhorse, lhorse;
    for(int bhorse = 0;bhorse <=33;bhorse++) {
        for(int mhorse = 0;mhorse <= 50;mhorse++) {
            lhorse = 100-bhorse-mhorse;
            if(lhorse%2==0&& 3*bhorse+2*mhorse+lhorse/2 == 100)
            {
                printf("b:%d m:%d l:%d\n", bhorse, mhorse, lhorse);
            }
        }
    }
}
void color_ball(){
    for(int red = 0;red <=3;red++) {
        for(int white = 0;white <=3;white++) {
            for(int black = 0;black <=6;black++) {
                if(red+white+black==8)
                {
                    printf("red:%d white:%d black:%d\n", red, white, black);
                }
            }
        }
    }
}
void three_num(){
    for(int i = 100;i <200;i++) {
        if(i%3 == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
        ;
    }
}
void getchar_example() {
    char c=' ';
    int nc=0,i=0,n=0;
    int na=0,ne=0,ni=0,no=0,nu=0,nCount=0,nother=0;
    printf("n=");
    scanf("%d",&n);
    getchar();
    for (i=0;i<n;i++) {
        c=getchar();
        // 输 完 n 个 字 符并 按回车 后 才 能 得 到结果
        nc=c;
        // 获取字 符的 ascii 值 , 实际为 整 数， %c 时 字 符
        nCount++;
        if ((nc>=65 && n<65+26) || (nc>=97 && nc<97+26)) {
            // 单个 字 符 比较 时为 字 符， 双 面 性 ， 妙 用
            if ((c=='A') ||(c=='a')) {
                na=na+1;
            }
            else if ((c=='E') || (c=='e')) {
                ne=ne+1;
            }
            else if ((c=='I') || (c=='i')) {
                ni=ni+1 ;
            }
            else if ((c=='O') || (c=='o')) {
                no=no+1;
            }
            else if ((c=='U') || (c=='u')) {
                nu=nu+1;
            }
            else {
                nother=nother+1;
            }
        }
    }
    printf("a=%d,e=%d,i=%d,o=%d,u=%d,other=%d,nCount=%d\n",na,ne,ni,no,nu,nother,nCount);
}
void getchar_test(){
    char m[40];
    char n;
    printf("please input first str:\n");
    //提示用户输入第一个字符串
    scanf("%s",m);
    //获取用户第一个输入字符串
    printf("you input str is :%s\n",m);
    //输出用户的输入的第一个字符串
    printf("input second char :\n");
    //提示用户输入第二个字符
    scanf("%c",&n);
    //获取用户的第二个字符
    printf("now you input second char is :%c\n",n);
    //输出用户输入的第二个字符
}
void getch_example(){
    int i=0;
    char tmp[20];
    //getchar() 全部 输 完 并 按回车才 读
    for (i=0;i<20;i++){
        //getch() 输一个读一个

	//用getchar()替代getch();
	system("stty -echo");
        tmp[i]=getchar();
	system("stty echo");
        // 不 显 示读到的 字 符
        //putchar('*');
        // 反正 不 显 示， 随我显 示一个 字 符
        printf("%d ",i);
        // 显 示一个序号， 表示有 几 个
        if (tmp[i]=='\n'){
            tmp[i]='\0';
            break;
        }
    }
    printf("\n");
    for (i=0;i<20;i++) {
        if (tmp[i]=='\0'){
            printf("break\n");
            break;
        }
        printf("tmp[%d]=%c(%d)\n",i,tmp[i],tmp[i]);
    }
    printf("%s\n",tmp);
}
int main(int argc,char** argv) {
    //prime_num();
    //hundred_prime();
    //perfect_num();
    //daffodil();
    //palindromic();
    //horse();
    //color_ball();
    //three_num();
    //getchar_test_example();
    //getchar_test();
    //getch_example();
    //printf("%lf \n", sumsqrt(3));
    //looplist(1.7);
    //pai();
    numlist(7);
}

