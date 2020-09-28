//bai tap 4.1: Nhập n sau đó tính S = 1 +2 + 3 + … + n

//#include<stdio.h>
//int main(){
//    int n;
//    printf("nhap n=");
//    scanf("%d",&n);
//    int s=0;
//    for(int i=0;i<=n;i++){
//        s+=i;
//    }
//    printf("tong s %d",s);
//}


// Bai Tap4.2:  Nhập n sau đó tính S = 1 + 1/2 + 1/3 + … + 1/n

//#include<stdio.h>
//#include<math.h>
//int main(){
//    float S=0,n;
//
//        printf(" nhap n=");
//        scanf("%f",&n);
//
//        for (float i=1;i<=n;i++){
//        S+=1/i;
//    }
//            printf("tong S %f",S);
//}

//bai tap4.3:Tính tổng 100 số lẻ > 0 đầu tiên
//#include<stdio.h>
//int main(){
//    int s=0,n=100;
//    for(int i=1;i<=n;i++){
//            s+=i*2-1;
//    }printf(" tong 100 so le dau tien la %d",s);
//}



// Bài Tập4.4: Yêu cầu người dùng nhập đúng 3 số là độ dài 3 cạnh tam giác, sau đó tính chu vi và diện tích
//#include <iostream>
//int main(){
//    int a,b,c,p;
//    float s;
//    do{
//    printf("nhap a:");
//    scanf("%d",&a);
//    printf("nhap b:");
//    scanf("%d",&b);
//    printf("nhap c:");
//    scanf("%d",&c);
//    }while (a+b<c||a+c<c||b+c<a);{
//        p=a+b+c;
//            int x;
//            float pi = 3.14158;
//                    x = (int)pi;
//            float p2 = (float)p;
//                    p2 = p2/2;
//                     s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
//    }printf(" chu vi tam giac %d ",p);
//    printf(" dien tich tam giac %f",s);
//}
//

// Bai Tap 4.5:Nhập 1 số nguyên n, kiểm tra n có phải số nguyên tố
//#include<stdio.h>
//#include<math.h>
//int main(){
//    int n;
//        printf("nhap n=");
//        scanf("%d",&n);
//    if(n<2){
//        printf("%d khong  la so nguyen to",n);
//    }
//    int count=0;
//    for(int i=2;i<=n;i++){
//        if(n%i==0){
//            count++;
//        }
//    }
//    if(count==0){
//        printf(" %d la so nguyen to",n);
//    }else{
//        printf("%d khong la so nguyen to",n);
//    }
//}

