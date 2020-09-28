//Bai tap 5.1 :Nhập 1 số n từ bàn phím, in ra các số chẵn bé hơn n
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    if(n==0){
        printf(" day k phai so chan");
    }
    int count=0,s=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            s=i;
            count++;
            printf("cac so chan be hon n la %d\n",s);
        }
    }
}


//Bai Tap 5.2: Nhập 1 số n, tìm các ước và tính tổng ước của n
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    int count=0,s=0;
    for(int i=0;i<n;i++){
        if(n%i==0){
            count++;
            s+=i;
            printf(" cac uoc cua %d la",i);
        }
    }printf(" tong cac uoc la %d",s);
//}


//Bai tap 5.3:Nhập 2 số a,b. Tìm ước chung lớn nhất của a và b
#include<stdio.h>
int main(){
    int a,b;
    printf(" nhap a=");
    scanf("%d",&a);
    printf(" nhap b=");
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
    int ucll=0;
    for(int i=1;i<=a;i++){
            if (a%i==0&&b%i==0){
                ucll=i;
        }
    }
    printf("ucll la %d",ucll);
}


//bai tap 5.4:Nhập 1 số n từ bàn phím, tìm các số nguyên tố nhỏ hơn n.
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    if(n<2){
        printf(" day khong phai so nguyen to");
    }else{
        for(int i=2;i<n;i++){
            int count=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==0) printf(" %d",i);
        }
    }
}



//bai tap 5.5: Nhập 2 số a, b với điều kiện a < b. Tìm các số nguyên tố trong khoảng từ a đến b ( >=a và <= b)
#include<stdio.h>
int main(){
    int a,b;
    do{
        printf("nhap a=");
        scanf("%d",&a);
        printf("nhap b=");
        scanf("%d",&b);
    }while(a>b);
    for(int i=a;i<b;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }if(count==0)
            printf("%5d",i);
    }
}








