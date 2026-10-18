#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sort_function(int a[],int n){    //將街區由小到大排序
    for(int i = 0;i < n - 1;i++){     //控制輪數
        for(int j = 0;j<n - 1 - i;j++){   //控制前後相比,交換位置
            int bigger,small;
            if(a[j]>a[j+1]){
                bigger = a[j];
                small  = a[j+1];
                a[j] = small;
                a[j+1]=bigger;
            }
        }
    }
}

int median_function(int a[],int n){
return a[n/2];
}

int distance(int a[],int n,int median){
    int sum = 0;
    for(int i = 0 ;i<n;i++){
        sum = sum + abs(median - a[i]);
    }
return sum;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;      //親戚數量
        scanf("%d",&n);
        int a[1000];
        for(int i = 0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort_function(a,n);
        int median = median_function(a,n);
        int sum = distance(a,n,median);
        printf("%d\n",sum);
    }
return 0 ;
}
