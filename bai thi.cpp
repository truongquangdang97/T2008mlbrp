//bai 1:viet day fibonaci1->100.
#include<stdio.h>
#include<math.h>
int main(){
    int x,x1=0,x2=1;
    for(int i=0;i<100;i++){
        if(i<=1){
            x=i;
        }else{
            x=x1+x2;
            x1=x2;
            x2=x;
            if(x>=100){
                break;
            }
        }         printf("%5d",x);
    } printf(" la day so fibonacci tu 1-100 la: ");
}


//bai 2:
