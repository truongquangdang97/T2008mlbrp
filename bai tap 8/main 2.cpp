#include<stdio.h>
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}



#include<stdio.h>
int tinhtong(int n){
    int x=1, s=0;
    for(;n!=0;){
        x=n%10;
        n/=10;
        s+=x;
    }
    return s+=x ;
}



int main(){
    int n;
    printf(" nhap n=");
    scanf("%d",&n);
    printf("tong %d",tinhtong( n));
}
