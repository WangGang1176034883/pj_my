#include <stdio.h>
int sum(int x, int y){
	return x + y;
}
double recip(int denom){
    return 1.0/(double)denom;
}
void do_nothing(){
}
void test1(int denom){
    double r1, r2;
    int t1, t2;
    r1 = recip(denom);
    r2 = recip(denom);
    t1 = r1 == r2;
    do_nothing();
    t2 = r1 == r2;
    printf("test1: t1: r1 %f %c= r2 %f\n", r1, t1 ? '=' : '!', r2);
    printf("test1: t2: r1 %f %c= r2 %f\n", r1, t2 ? '=' : '!', r2);
}
int main(){
	test1(10);
	return 0;
}
