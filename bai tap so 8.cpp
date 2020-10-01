//bai tap 8.1: Tìm số nguyên tố tiếp theo của n ( tức là số nguyên tố > n và gần n nhất
#include <stdio.h>
void sntkt(int n){
    int a=n+1;
    bool f=false;
    while(!f){
        int count=0;
        if(a>=2){
            for(int i=2;i<=a;i++){
                if(a%i==0){
                    count++;
                    
                }
            }
            if(count==1){
                f=true;
                printf("So nguyen to ke tiep la: %d",a);
            }
        }
        a++;
    }
    return ;
}
int main (){
    int x;
    printf("Nhap x:");
    scanf("%d",&x);
    sntkt(x);
}



//Bai tap 8.2: Tỉnh tổng các chữ số của 1 số nguyên n
#include <stdio.h>
void tcs(int n){
    int a=0;
    while(n>0){
        a+=n%10;
        n/=10;
    }
    printf(" tong cua %d la= %d ",n,a);
    return ;
}
int main(){
    int n;
    printf(" nhap n =");
    scanf("%d",&n);
    tcs(n);
}



//Bai tap 8.3:Tính chu vi tam giác

#include<stdio.h>
int chuvi(int a,int b,int c){
    int p;
    p=a+b+c;
    printf("chu vi tam giac là %d",p);
    return p;
}
int main(){
    int a,b,c;
    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    printf("nhap c=");
    scanf("%d",&c);
    chuvi(a,b,c);
}


//Bai tap 8.4:Tính diện tích tam giác
#include<stdio.h>
#include<math.h>
int dientich(int a,int b,int c){
    int s;
    int p=a+b+c;
    float p2 = (float)p;
            p2 = p2/2;
             s =sqrt(p2*(p2-a)*(p2-b)*(p2-c));
    printf("dien tich tam giac là %d",s);
    return s;
}
int main(){
    int a,b,c;
    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    printf("nhap c=");
    scanf("%d",&c);
    dientich(a,b,c);
}

//Bai tap 8.5: Tìm ước chung lớn nhất của 2 số
#include<stdio.h>
int ucll(int a,int b){
    int u=0;
    if(a>=b){
        for(int i=2;i<=b;i++){
            if(a%i==0&&b%i==0){
                u=i;
            }
        }
    }else{
        for(int i=2;i<=a;i++){
            if(a%i==0&&b%i==0){
                u=i;
            }
        }
    }
    printf("uoc chung lon nhat la %d",u);
    return u;
}
int main(){
    int a,b;
    printf("Nhap so a:");
    scanf("%d",&a);
    printf("Nhap so b:");
    scanf("%d",&b);
    ucll(a,b);
    }

//Bai tap 8.6:Tìm bội chung nhỏ nhất của 2 số.
#include<stdio.h>
int bcnn(int a,int b){
    int bcnn;
    if(a>=b){
        for(int i=1;i<=b;i++){
            if((a*i)%b==0){
                bcnn=a*i;
                break;
            }
        }
        printf("boi chung nho nhat la %d",bcnn);
    }else{
        for(int i=1;i<=a;i++){
            if((b*i)%a==0){
                bcnn=b*i;
                break;
            }
        }
        printf("boi chung nho nhat la %d",bcnn);
    }
    return bcnn;
}


int main(){
    int x,y;
    printf("nhap x=");
    scanf("%d",&x);
    printf("nhap y=");
    scanf("%d",&y);
    bcnn(x,y);
    printf("boi chung nho nhat cua 2 so dc nhap la \n");


