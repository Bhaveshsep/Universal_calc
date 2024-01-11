#include <stdio.h>

int count, r, re, res, rest, less, remains, digit, reminder, remainamt;
int main() {
    int amt;
    printf("Please enter the Amount");
    scanf("%d", &amt);
    printf("Your amount is %d ",amt);
    
    if(amt>=1000){
    digit = (amt/1000);
    int remainamt = amt % 1000;
    
    printf("\ncount of 1000 rs note is %d",digit);
    printf("\nremaining amount is %d",remainamt);
    
    amt = remainamt;
    }
    if(amt>=500){
    digit = (amt/500);
    int reminder = amt % 500;
    
    printf("\ncount of 500 rs note is %d",digit);
    printf("\nremaining amount is %d",reminder);
    
    amt = reminder;
    }
    if(amt>100){
    digit = (amt/100);
    int remains = amt % 100;
    
    printf("\ncount of 100 rs note is %d",digit);
    printf("\nremaining amount is %d",remains);
    
    amt = remains;
    }
    if (amt>50){
    digit = (amt/50);
    int rest = amt % 50;
    
    printf("\ncount of 50 rs note is %d",digit);
    printf("\nremaining amount is %d",rest);
    
    amt = rest;
    }
    if(amt>20){
    digit = (amt/20);
    int less = amt % 20;
    
    printf("\ncount of 20 rs note is %d",digit);
    printf("\nremaining amount is %d",less);
    
    amt = less;
    }
    if(amt>10){
    digit = (amt/10);
    int r       = amt % 10;
    
    printf("\ncount of 10 rs note is %d",digit);
    printf("\nremaining amount is %d",r);
    
    amt = r;
    }
    if(amt>5){
    digit = (amt/5);
    int re = amt % 5;
    
    printf("\ncount of 5 rs note is %d",digit);
    printf("\nremaining amount is %d",re);
    
    amt = re;
    }
    if(amt>1){
        
    digit = (amt/1);
    int res = amt % 1;
    
    printf("\ncount of 1 rs coint is %d",digit);
    printf("\nremaining amount is %d",res);
    }
    
    else if (amt<=0){
        printf("\nplease give valid input");
    }
    return 0;
}
