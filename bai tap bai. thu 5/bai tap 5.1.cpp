#include<stdio.h>
int main(){
    int S=0,n;
    //printf("nhap n:");
    //scanf("%d",&n);
    do {
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<0);
    for(int i=1;i<=n;i++){
        S+=i;
    }
    printf("tong S:%d",S);
}
