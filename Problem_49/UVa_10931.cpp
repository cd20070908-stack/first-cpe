#include<stdio.h>

int two_function(int n, int arr[]){  //abc[n]={1,2,3.....n-1} 
                                    //abc[0]=1
    int current = n;  //分身變數            // 16/2=8...0
    int count = 0;                 
                                  // 8/2=4...0
                                  // 4/2=2..0
                                  // 2/2=1..0
                                  // 1/2=0...1
                                  //16轉成2進位就是10000 = ans
                                  //funtion_result=00001
    
    while(current !=0){           //中止條件
                                   //   16/2=8...0   16=current  0=x
    int y = current / 2;  
    int x = current % 2;           //   8/2=4...0
    current = y;                   //  
    arr[count] = x;               //{10001}
    count++;
    }
    return count;     //轉換次數 ==近位次數
}

int main(){
   
   int n; 
   int ans_arr[1000];
   int count ;
   
   
   while((scanf("%d",&n)) ==1 && n != 0){

    int one_count=0;
    count  = two_function(n,ans_arr);

    
    for(int k =0;k < count;k++){
        if(ans_arr[k]==1){              //54321
            one_count++;
        }
    }
    printf("The parity of ");

    for(int i = count - 1; i >= 0; i--){
        printf("%d", ans_arr[i]);
}

    printf(" is %d (mod 2).\n", one_count);
    
    }
return 0;
   }
