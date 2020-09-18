#include<stdio.h>
#include<math.h>
int main(){
    float S=0,n;
    
        printf(" nhap n=");
        scanf("%f",&n);
    
        for (float i=1;i<=n;i++){
        S+=1/i;
    }
        //for(int i=1; i<=n; S+=i, i++);
    printf("tong S %f",S);
}

