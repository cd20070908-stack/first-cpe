#include<stdio.h>   //幾組測資,模擬天數,政黨數,政黨公差
int caculation_function(int day[],int n){   // n是模擬天數
    int count = 0; 
    for(int i = 1;i <= n;i++){
        if(((i%7)!=0) && ((i%7)!=6)){
            if(day[i]==1){
                count++;
            }
        }
    } 
return count;
}

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,p;
        scanf("%d",&n);
        scanf("%d",&p);
        int day[366]={0};   //創立陣列
        for(int j = 0;j<p;j++){
            int h;
            scanf("%d",&h);
            for(int i = h;i <= n;i=i+h){
                day[i]=1;
            }
        }
        int result = caculation_function(day,n);
        printf("%d\n",result);
    }
return 0;
}
