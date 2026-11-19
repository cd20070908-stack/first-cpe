#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for (int i=1;i<=n;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    int low,high;
    if(a>b){
        low=b;
        high=a;}
    else{
        low=a;
        high=b;
    }   
    int sum=0;
      for(int j=low;j<=high;j++){
        if(j%2==1){
            sum=sum+j;
        }
      }
printf("Case %d: %d\n",i,sum);
}
return 0;
}
