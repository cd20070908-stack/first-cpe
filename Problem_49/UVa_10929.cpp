#include<stdio.h>
#include<string.h>
void eleven( char n[]){
    int odd_sum = 0;
    int even_sum = 0;
    int length = strlen(n);

    for(int i = 0 ; i < length ; i = i + 2 ){
        odd_sum = odd_sum + (n[i] - '0'); 
    }
    for(int i = 1 ; i < length ; i = i+2 ){
        even_sum = even_sum + ( n[i] - '0');
    }
    int judge_num = odd_sum - even_sum;
    int result = judge_num % 11;
    if(result == 0){
        printf("%s is a multiple of 11.\n",n);
    }
    else{
        printf("%s is not a multiple of 11.\n",n);
    }

}
int main(){
    char n[10000];
    while((scanf("%s",n))==1 && strcmp(n,"0")!=0 ){    //strcmp(n, "0") != 0檢查字串是否為0
        eleven(n);
    }
return 0;    
}
