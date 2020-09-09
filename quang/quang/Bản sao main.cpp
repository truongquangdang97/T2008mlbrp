//
//  main.cpp
//  quang
//
//  Created by Truong Quang Dang on 9/8/20.
//  Copyright © 2020 Truong Quang Dang. All rights reserved.
//

#include <iostream>

int main(){
    //inputa,b,c
    int a,b,c;
    printf("nhap a =");
    scanf("%d", &a);
    printf("nhap b =");
    scanf("%d",&b);
    printf("nhap c =");
    scanf("%d",&c);
    
    // kiem tra a va b va c
    if (a<b){
        //a la so nho
        if (a<c){
            printf("min: %d",a);
        }else{
            printf("min: %d",c);
        }
    }else{
        //b la so nho
        if (b<c){
            printf("min: %d",b);
        }else{
            printf("min: %d",c);
                
        }
        
            
            
            
        }
        }

