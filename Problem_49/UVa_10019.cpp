#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;

    for(int i=0;i<t;i++){
       scanf("%d",&n); 

       int t1=n;
       int t2=n;
       int b1=0;
       int b2=0;

       while (t1>0){
        if (((t1)%2) == 1){
            b1++;
            }
        t1 = (t1)/2;
        }
        while (t2>0){
            int digit=(t2)%10;
            if (digit == 1 || digit == 2 || digit == 4 || digit == 8)  {
                (b2)++;
            }
            else if (digit==3||digit==5||digit==6||digit==9)  {
                b2=(b2)+2;
            }
            else if (digit==7)
            {
                b2=(b2)+3;
            }
            

            t2=(t2)/10;
        }
    printf("%d %d\n",b1,b2);
    }
return 0;
}










