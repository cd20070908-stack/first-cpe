#include<stdio.h>
#include<stdlib.h>

int abs_function(int a,int b){
    int result=abs(a-b);
    return result;
}

int isjolly(int a[],int n){
  int check[1000]={0};
  for(int i =0; i<n-1 ;i++){
    int diff = abs_function(a[i],a[i+1]);
    if (diff<1 || diff>=n){
      return 0;
    }
    if (check[diff]==1){
      return 0;
    }
    check[diff]=1;
  }
  return 1;
}

int main(){
int n;
while(scanf("%d",&n) !=EOF){
  int a[10000];
  for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  if(isjolly(a,n)){
    printf("Jolly\n");
  }
  else{printf("Not jolly\n");}

}
return 0;
}
