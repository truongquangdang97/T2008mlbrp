//Bai tap 7.1:Tìm ma trận chuyển vi của 1 ma trận 2x3 nhập vào từ bàn phím
#include<stdio.h>
int main(){
    int ary[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("nhap ary[%d][%d]=",i,j);
            scanf("%d",&ary[i][j]);
        }
    }
    printf("ma tran ban dau la\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("\t %d",ary[i][j]);
        }
        printf("\n");
    }
    int ar[3][2];
    printf("ma tran chuyen vi la \n");
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            ar[j][i]=ary[i][j];
            printf("\t%d",ar[j][i]);
        }printf("\n");
    }
}


////Bai tap 7,2:Cho mảng n số nguyên và 1 số x. Tìm số trong mảng có giá trị nhỏ hơn và gần x nhất ( tiệm cận dưới )
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++){
        printf(" nhap so pt thu %d =",i);
        scanf("%d",&ary[i]);
    }
    int x, stc;
    printf("nhap x=");
    scanf("%d",&x);
    bool f=false;
    for(int i=0;i<n;i++){
        if(ary[i]<x){
            stc=ary[i];
            f=true;
        }
    }
    for(int i=0;i<n;i++){
        if(ary[i]<x&&ary[i]>stc){
            stc=ary[i];
        }
    }
    if(f=true)
        printf("so tien can %d la %d",x,stc);
    if(f=false)
        printf(" so %d khong co tiem can",x);
}




//Bai tap 7.4:Nhập giá trị cho mảng n số nguyên, đảm bảo là mỗi lần nhập mới 1 số thì sắp xếp luôn mảng để khi xong phần tử cuối cùng sẽ được luôn mảng có giá trị bé -> lớn.

#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
        for(int j=0;j<i;j++){
            for(int k=0;k<i-j;k++){
                if(arr[k]>arr[k+1]){
                    int tmp = arr[k];
                    arr[k]= arr[k+1];
                    arr[k+1] = tmp;
                }
            }
           
        }
    }
    printf("mang sau khi nhap:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
