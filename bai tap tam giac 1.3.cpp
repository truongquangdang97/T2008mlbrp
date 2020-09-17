#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,p;
    printf("nhap canh a:");
    scanf("%d",&a);
    printf("nhap canh b:");
    scanf("%d",&b);
    printf("nhap canh c:");
    scanf("%d",&c);
    p=a+b+c;
    if(a+b>c){
        if(a+c>b){
            if(b+c>a){
                printf(" day la ba canh cua tam giac");
                printf("chu vi cua tam giac bang %d",p);
            }else{
                printf("day khong phai 3 canh cua tam giac");
            }
        }else{
            printf("day khong phai 3 canh cua tam giac");
        }
    }else{
        printf("day khong phai 3 canh cua tam giac");
    }
}

