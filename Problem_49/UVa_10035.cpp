#include<stdio.h>
int main(){

    int a,b;
    while (scanf("%d %d",&a,&b) == 2 && (a!=0 || b!=0)){
    
        int carry = 0;
        int count = 0;

        while(a>0||b>0||carry>0){
            int r1 = a % 10;
            int r2 = b % 10;
            int sum = (r1) + (r2) + (carry);
            if (sum>=10){
                count++;
                carry=1;
            }
            else{carry=0;}

            a =(a)/10;
            b =(b)/10;
        }
    if(count!=0){
        if(count==1){printf("1 carry operation.\n");}
        else{
        printf("%d carry operations.\n",count);}
    }
    else{printf("No carry operation.\n");}
    }
return 0;}
