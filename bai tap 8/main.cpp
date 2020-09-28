#include<stdio.h>
    int tong (int a,int b){
        return (a+b);
    }
int main(){
    int a,b;
    printf(" nhap a=");
    scanf("%d",&a);
    printf(" nhap b=");
    scanf("%d",&b);
    printf(" tong cua hai so la =%d",tong (a,b));
}
#include<stdio.h>
#include<math.h>



int chuvitamgiac(int a,int b,int c){
    return a+b+c;
}



int dientichtamgiac(int a,int b,int c){
    int p=a+b+c;
    float s;
    int x;
    float pi = 3.14158;
            x = (int)pi;
    float p2 = (float)p;
            p2 = p2/2;
             s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
    return sqrt(p2*(p2-a)*(p2-b)*(p2-c));
}



int main(){
    int a,b,c;
    printf(" nhap a=");
    scanf("%d",&a);
    printf(" nhap b=");
    scanf("%d",&b);
    printf(" nhap c=");
    scanf("%d",&c);
    if ( a+b>c&&b+c>a&&a+c>b){
        printf(" chu vi cua tam giac la = %d",chuvitamgiac(a,b,c));
        printf(" dien tich tam giac la =  %f",(float)dientichtamgiac(a,b,c));
    }else{
        printf(" day khong phai 3 canh tam giac");
    }
}

#include<stdio.h>
void ucll(int a,int b){
    for (int i=2;i<=a;i++){
        if(a%i==0&&b%i==0){
        }
    }
}
int main(){
    int a,b,ucll=1;
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
        for(int i=1;i<=a;i++){
            if (a%i==0&&b%i==0){
                ucll=i;
            }
    }
    printf("uoc chung lon nhat la %d",ucll);
}





#include<stdio.h>
int main(){
    int a,b,bcnn=1;
    printf(" nhap a=");
    scanf("%d",&a);
    printf(" nhap b=");
    scanf("%d",&b);
    if (a==0&&b!=0){
        printf(" a,b khong toonf taij boi chung ");
    }
    if(a!=0&&b==0){
        printf(" a,b khong toonf taij boi chung ");
    }
    if (a==0&&b==0){
        printf(" a,b khong toonf taij boi chung ");
    }
    if (a>0&&b>0){
        for (int i=a*2;i>a;i++){
            if(i%a==0&&i%b==0){
                bcnn=i;
                break;
            }
        }
    }printf("bcnn cua a va b la %d",bcnn);
}




#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf(" %d",&n);
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
