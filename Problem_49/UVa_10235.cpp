#include<stdio.h>
int prime_function(int n){
    if(n<2){
        return 0;   // 0 不是質數
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;   // 1 是質數
    }
}

int reverse_function(int n){
    int reverse = 0;
    while(n>0){
        int digit = n%10 ; 
        reverse = reverse*10 + digit;
        n=n/10;
    }
    return reverse;
}

int main(){
    int n;
    while((scanf("%d",&n))==1 ){
        if(prime_function(n)==0){
            printf("%d is not prime.\n",n);  
        }
        else{
            int reverse = reverse_function(n);
            if(reverse != n  && prime_function(reverse)==1){
                printf("%d is emirp.\n",n);
            }
            else{
                printf("%d is prime.\n",n);
            }
        }
    }
    return 0;
}
