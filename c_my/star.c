#include <stdio.h>
void mnstar(int m, int n){
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < n;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void mstar(int m){
    int space = m;
    for(int i = 0;i <m;i++) {
        for(int n= 1;n < space;n++) {
            printf(" ");
        }
        space--;
        for(int j = 0;j <2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void rectstar(int m){
    for(int i = 0;i < m;i++) {
        for(int j = 0;j <= i;j++) {
            printf("*");
        }
        printf("\n");
    }
    int space = 1;
    for(int i = m;i >1;i--) {
        for(int k = 0;k < space;k++) {
            printf(" ");
        }
        space++;
        for(int j = 0;j < i-1;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void doubstar(int m){
    int space = m;
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        for(int k = 0;k < 5*space-5;k++) {
            printf(" ");
        }
        space--;
        for(int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void udstar(int m){
    int space = m-1;
    for(int i = 0;i < m;i++) {
        for(int k = 0;k < space;k++) {
            printf(" ");
        }
        space--;
        for(int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    int star = 2*(m-1)-1;
    for(int i = 0;i < m;i++) {
        for(int k = 0;k <= i;k++) {
            printf(" ");
        }
        for(int j = 0;j < star;j++) {
            printf("*");
        }
        star -=2;
        printf("\n");
    }
}
void leftstar(int m){
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    int star = 2*(m-1)-1;
    for(int i = 0;i < m-1;i++) {
        for(int j = 0;j < star;j++) {
            printf("*");
        }
        printf("\n");
        star -=2;
    }
}
void rightstar(int m){
    int space =2*(m-1);
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < space;j++) {
            printf(" ");
        }
        space -=2;
        for(int k = 0;k < 2*i+1;k++) {
            printf("*");
        }
        printf("\n");
    }
    int star =2*(m-1)-1;
    for(int i = 0;i < m;i++) {
        for(int k = 0;k < 2*i+2;k++) {
            printf(" ");
        }
        for(int j = 0;j <star;j++) {
            printf("*");
        }
        printf("\n");
        star -=2;
    }
}
void dustar(int m){
    int star = 2*m-1;
    for(int i = 0;i < m;i++) {
        for(int k = 0;k < i;k++) {
            printf(" ");
        }
        for(int j = 0;j < star;j++) {
            printf("*");
        }
        star -=2;
        printf("\n");
    }
    int space = m-1;
    for(int i = 0;i < m;i++) {
        for(int j = 0;j < space;j++) {
            printf(" ");
        }
        space--;
        for(int k = 0;k < 2*i+1;k++) {
            printf("*");
        }
        printf("\n");
    }
}
void greatstar(int m){
    for(int i = 0;i < m;i++) {
        for(int k = 0;k < i;k++) {
            printf(" ");
        }
        for(int j = 0;j < 7;j++) {
            printf("*");
        }
        printf("\n");
    }
    int space = m-2;
    for(int i = 0;i < m-1;i++) {
        for(int k = 0;k < space;k++) {
            printf(" ");
        }
        space--;
        for(int j = 0;j < 7;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void lessstar(int m){
    int space = m-1;
    for(int i = 0;i < m;i++) {
        for(int k = 0;k < space;k++) {
            printf(" ");
        }
        space--;
        for(int j = 0;j < 7;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0;i < m-1;i++) {
        for(int k = 0;k <= i;k++) {
            printf(" ");
        }
        for(int j = 0;j < 7;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void upstar(int m){
    int mstar = m/2;
    int mspace = m-mstar;
    int space = mspace;
    for(int i = 0;i < mspace;i++) {
        for(int k = 0;k < space;k++) {
            printf("   ");
        }
        space--;
        for(int j = 0;j < 2*i+1;j++) {
            printf("*  ");
        }
        printf("\n");
    }
    for(int i = 0;i < mstar;i++) {
        for(int j = 0;j < m+2;j++) {
            printf("*  ");
        }
        printf("\n");
    }
    space = mspace;
    for(int i = 0;i < mspace;i++) {
        int j = 0;
        for(j = 0;j < space;j++) {
            printf("*  ");
        }
        int k = 0;
        for(k = 0;k <2*i+1;k++) {
            printf("   ");
        }
        for(int z = 0;z < m-j-k+2;z++) {
            printf("*  ");
        }
        printf("\n");
        space--;
    }
}
int main(int argc,char** argv) {
    mnstar(6, 7);
    mstar(6);
    rectstar(9);
    doubstar(6);
    udstar(5);
    leftstar(5);
    rightstar(5);
    dustar(5);
    greatstar(5);
    lessstar(5);
    upstar(9);
}

