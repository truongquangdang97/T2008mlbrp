#include<stdio.h>
#include<math.h>
int main(){
    int a,b,u=0;
    printf(" nhap a :");
    scanf("%d",&a);
    printf(" nhap b :");
    scanf("%d",&b);
   if (a==0&&b!=0){
        printf("uoc chung lon nhat la %d ",b);
    }
    if(a!=0&&b==0){
        printf("uoc chung lon nhat la %d ",a);
    }
    if(a==0&&b==0){
        printf(" khong co uoc chung");
    }
    for(int i=1;i<=a/2;i++){
        if (a%i==0&&b%i==0){
            u=i;
        }
}printf(" uoc chung lon nhat la %d",u);
}

