#include <stdio.h>
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, int len){
	for(int i = 0;i < len;i++) {
		printf(" %.2x",start[i]);
	}
	printf("\n");
}
void show_int(int x){
	show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x){
	show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void* x){
	show_bytes((byte_pointer)&x, sizeof(void*));
}
void inplace_swip(int* x, int* y){
	*x = *x ^ *y;
	printf("*x:%d *y:%d\n", *x, *y);
	*y = *x ^ *y;
	printf("*x:%d *y:%d\n", *x, *y);
	*x = *x ^ *y;
	printf("*x:%d *y:%d\n", *x, *y);
}
int isequal(int x, int y){
	return !(x^y);
}
int fun1(unsigned x){
	return (int)((x<<24)>>24);
}
int fun2(unsigned x){
	return ((int)x <<24)>>24;
}
int main(int argc, char** argv){
	/*
	   int a = 3490593;
	   float b = (a);
	   int* c = &a;
	   printf("int_a:%d\n", a);
	   printf("float_b:%f\n\n", b);
	   show_int(a);
	   printf("int_a:%p\n\n",a);
	   show_float(b);
	   printf("float_b:%p\n\n", b);
	   show_pointer(c);
	   printf("pointer_c:%p\n",c);
	   printf("Hello world");
	   */
	/*
	   int val =0x12345678;
	   byte_pointer valp = (byte_pointer)&val;
	   show_bytes(valp, 1);
	   show_bytes(valp, 2);
	   show_bytes(valp, 3);
	   show_bytes(valp, 4);
	   */
	/*
	   char* ch = "123456";
	   show_bytes(ch, 7);
	   */
	/*
	   char* s = "ABCDEF";
	   show_bytes(s,6);
	   */
	/*
	   int a = 3, b = 4;
	   printf("a:%d b:%d\n", a, b);
	   inplace_swip(&a, &b);
	   printf("a:%d b:%d\n", a, b);
	   */
	/*
	   int x = 0x98fdecba;
	   int A = 0xffffff00;
	   int B = 0xff;
	   int C = 0xffffff00;
	   printf("%p\n", x|A);
	   printf("%p\n", x^B);
	   printf("%p\n", x&C);
	   */
	/*
	   int x = 0x66;
	   int y = 0x93;
	   printf("x&y  :%p\n", x&y);
	   printf("x|y  :%p\n", x|y);
	   printf("~x|~y:%p\n", ~x|~y);
	   printf("x&!y :%p\n", x&!y);
	   printf("\n");
	   printf("x&&y  :%d\n", x&&y);
	   printf("x||y  :%d\n", x||y);
	   printf("!x||!y:%d\n", !x||!y);
	   printf("x&&~y :%d\n", x&&~y);
	   */
	//printf("%d\n", isequal('c', 'c'));
	/*
	   short int x = 12345;
	   short int mx = -x;
	   show_bytes((byte_pointer)&x, 2);
	   show_bytes((byte_pointer)&mx, 2);
	   */
	/*
	   int x = -8;
	   unsigned ux = (unsigned)x;
	   printf("int:%p unsigned:%x\n", x, ux);
	   */
	/*
	   int x = -2147483648;
	   int b = 2147483647;
	   unsigned ux = 2147483648U;
	   */
	/*
	   printf("x:%u    %d\n", x, x);
	   printf("u:%u    %d\n", u, u);
	   */
	/*
	   short sx = -12345;
	   unsigned short usx =53191;
	   int x = -12345;
	   unsigned ux = 53191;
	   unsigned uy = x;
	   printf("sx = %hd\t",sx);
	   show_bytes((byte_pointer)&sx, sizeof(short));
	   printf("usx = %hu\t", usx);
	   show_bytes((byte_pointer)&usx, sizeof(short));
	   printf("x = %d\t", x);
	   show_bytes((byte_pointer)&x, sizeof(int));
	   printf("ux = %u\t", ux);
	   show_bytes((byte_pointer)&ux, sizeof(int));
	   printf("uy = %u\t", uy);
	   show_bytes((byte_pointer)&uy, sizeof(int));
	   */

	printf("%d\n", fun1(256));
	printf("%d\n", fun2(256));
	return 0;
}
