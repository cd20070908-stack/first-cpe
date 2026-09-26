#include<stdio.h>
int main(){
    
    int a,b;
    int high,low;
    
    while(scanf("%d %d",&a,&b)==2){
      if(a>b){ high=a;
               low =b;}
      else   { high=b;
               low =a;}
      int max =0;
      
      for (;low<=high;low=low+1){
          int current =low;
          int length=1;
             while(current !=1){
              if   (current % 2==1){current=3*current+1;}
              else                 {current=current/2;}
              length=length+1;
             }  
      if (length>max)  {max=length;}
    }
   printf("%d %d %d\n",a,b,max);
 }
return 0;
}
