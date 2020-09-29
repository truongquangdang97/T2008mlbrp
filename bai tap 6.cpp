//Bài tập 6.!:Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng
#include<stdio.h>
int main(){
    int n;
    printf(" nhap n=");
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++){
    printf("nhap so thu %d=",i);
    scanf("%d",&ary[i]);
    }
    int count=0,slcc=1;
    for (int i=0;i<n;i++){
        if(ary[i]%2==1){
            count++;
            slcc=ary[i];
        }
    }
    printf("so le cuoi cung la %d",slcc);
}

//tap 6.2: Nhập mảng n số nguyên, tìm số dương nhỏ nhất
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    int ary[n];

    for(int i=0;i<n;i++){
        printf(" nhap so thu %d=",i);
        scanf("%d",&ary[i]);
    }

    int min=0;
    for(int i=0;i<n;i++){
        if(ary[i]>0){
            min=ary[i];
        }

    }for(int i=0;i<n;i++){
        if(min>ary[i]){
            min=ary[i];
        }
    }printf("so duong nho nhat la %d",min);
}



//Bai tap 6.3:Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất
#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++){
        printf("nhap so pt thu %d=",i);
        scanf("%d",&ary[i]);
    }

    int max=0,count=0;
    for (int i=0;i<n;i++){
        if(ary[i]>0){
            count++;
            if(max<count){
                max=count;
            }
        }else{
            count =0;
        }
    }printf("so luong so duong lon nhat la %d",max);
}


//bai tap 6.4:Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
//Ví dụ: 1 2 3 4 -1 -2 33 22 thì tổng cần in ra là 55>

#include<stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++){
        printf("nhap so thu %d=",i);
        scanf("%d",&ary[i]);
    }
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(ary[i]>0){
            count+=ary[i];
            if(count>max){
                max=count;
            }
        }else
            count=0;
    }
    printf("tong %d",max);
}


