#include <stdio.h>
float sum_elemets(float a[], unsigned length){
	int i = 0;
	float result = 0.0f;
	for(int i = 0;i <=length-1;i++) {
		result += a[i];
	}
	return result;
}
int main(int argc,char** argv) {
	float a[] = {0.1, 0.2, 0.3, 0.4, 0.5};
	printf("result:%f\n", sum_elemets(a, 5));
}
