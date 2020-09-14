
#include <stdio.h>
#include<math.h>

int main() {
    int a,b,x;
    printf(" nhap gia tri của ngay a= ");
    scanf("%d",&a);
    printf("nhap gia tri cua thang b=");
    scanf("%d",&b);
    if (b==1){
        if (1<=a&&a<=31){
        x=a;
            printf("ngay thu %d,thang thu %d,ngay thu %d trong nam",a,b,x);}}
    if (b==2){
        if(1<=a&&a<=28){
            x=31+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);
        }
    }
    if (b==3){
        if (1<=a&&a<=31){
        x=59+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}
        
    }
    if(b==4){
        if(1<=a&&a<=30){
            x=90+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);
        }
    }
    if(b==5){
        if (1<=a&&a<=31){
            x=120+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==6){
        if(1<=a&&a<=30){
            x=151+a;
             printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==7){
        if (1<=a&&a<=31){
            x=181+a;
              printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==8){
         if (1<=a&&a<=31){
             x=212+a;
             printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==9){
        if(1<=a&&a<=30){
            x=243+a;
             printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==10){
        if (1<=a&&a<=31){
            x=273+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==11){
        if(1<=a&&a<=30){
            x=304+a;
            printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    if(b==12){
         if (1<=a&&a<=31){
             x=334+a;
             printf("ngay thu %d,thang thu%d,ngay thu%d trong nam",a,b,x);}}
    float y=(x%7);
    if(y==0){
        printf(" x la chu nhat");
    }
    if(y==1){
        printf(" x la thu hai");
    }
    if(y==2){
        printf(" x la thu ba");
        
    }
    if(y==3){
        printf("x la thu tu");
        
    }
    if(y==4){
        printf("x la thu nam");
    }
    if(y==5){
        printf("x la thu sau");
        
    }
    if (y==6){
        printf("x la thu bay");}
    }
   
     
         
    
    
            
    
        
        
    
    
    

    
             
             
        
            
        

            
        
    
            
        
            
    


