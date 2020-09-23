#include<stdio.h>
int main(){
    int n,i;
    printf(" nhap n=");
    scanf("%d",&n);
    int ary[n];
    for( i=0;i<n;i++){
        printf(" nhap pt so thu %d=",i);
        scanf("%d",&ary[i]);
    }
    int count=0,SLCC=1;
    for(i=0;i<n;i++){
        if (ary[i]%2!=0){
            count++;
            SLCC = ary[i];
        }
    }
    printf(" so le cuoi cung cua mang  la %d",SLCC);
}

