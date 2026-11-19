#include<stdio.h>
int main(){
long long s,d;  //起始人數//第幾天是哪一批旅客住的

while((scanf("%lld %lld",&s,&d)) != EOF){
    
    while(d>s){
       d = d - s;
       s++ ;      //d還剩幾天  //s 這一批要住幾天
    }
    printf("%lld\n",s);
}
return 0;
}
