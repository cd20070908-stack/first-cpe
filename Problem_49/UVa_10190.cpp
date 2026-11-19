#include<stdio.h>
int sequence_function(int n ,int m, int a[10000]){
    int count = 0;
    if(n<=1 || m<=1){
        return -1;
    }
    while(1){          //持續執行
        a[count]=n ;
        count++;
        if(n==1){
            return count ;
        }
        else if(n%m != 0 ){
            return -1;
        }
        n=n/m;
    }
}

int main(){
    int n,m;
    int a[10000];
    while((scanf("%d %d",&n,&m))==2){
        int count = sequence_function(n,m,a);
        if(count == -1)   {    // -1表示序列不合法
            printf("Boring!\n");
        }
        else{
            for(int i=0;i<count;i++){
                printf("%d",a[i]);
                if(i != (count - 1)){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
return 0;
}
