#include<stdio.h>
void count(char target_str[],int count[] ){   //統計字串中 a 到 z 各出現幾次
    for(int i = 0;target_str[i] !='\0';i++)  {  // '\0'是字串結束的標記
        if (target_str[i] >= 'a' && target_str[i] <= 'z'){
    count[target_str[i] - 'a']++;
}
    
    }
}

int main(){
    char s1[1000];
    char s2[1000];
    while(fgets(s1,sizeof(s1),stdin) != NULL && fgets(s2,sizeof(s2),stdin)!= NULL){
    //(要把讀到的文字存在哪裡//最多可以讀取多少空間//資料要從哪裡讀取,stdin 是標準輸入，通常就是鍵盤輸入,在 UVA 上則是系統提供的測試資料。
    //NULL = 沒有取得有效的結果
    int count1[26]={0};
    int count2[26]={0};
    count(s1,count1);
    count(s2,count2);
    for(int i = 0;i<26;i++){
        if(count1[i]<count2[i]){
            for(int j = 0;j<count1[i];j++){
                printf("%c",'a'+i);
            }
        }
        else{
            for(int j = 0;j<count2[i];j++){
                printf("%c",'a'+i);
            }
        }
    }
printf("\n");

    }

return 0;
}
