#include <stdio.h>
int main(){
	for(int x=0;x<20;x++){
		for(int y=0;y<20;y++){
			int z=100-x-y;
			if(z%3==0&&100==5*x+3*y+z/3){
				printf("x:%d y:%d z:%d\n", x, y, z);
			}	
		}
	}
}
