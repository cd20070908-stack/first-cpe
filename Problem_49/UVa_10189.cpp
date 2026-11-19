#include<stdio.h>
int count_mines(int n , int m , char a[100][100] , int i , int j){
    int count = 0;
    for(int x=i-1 ; x<=i+1 ; x++){      //位置 (i, j) 周圍有幾顆地雷？
        for(int y =j-1;y<=j+1;y++){
            if(x==i && y==j){
                continue;   //跳過這一次迴圈，繼續檢查下一格。
            }
            if( x < 0 || y < 0 || x>=n || y >=m){
                continue;         //判斷是否超界
            }
            if(a[x][y] == '*'){
                count++;
            }
        }
    }
return count;
}

void convert_function(int n , int m ,char a[100][100]){
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < m ; y++){
            if(a[x][y] == '*'){
                printf("*");
            }
            if(a[x][y] == '.'){
                int result_count = count_mines(n,m,a,x,y);
                printf("%d",result_count);
            }
        }
        printf("\n");
    }
}

int main(){
    int n,m;
    char a[100][100];
    int field = 1;
    while((scanf("%d %d",&n,&m))==2 && (n!=0 && m!=0)){
        for(int i=0;i<n;i++){          //開始讀取地圖
            for(int j=0;j<m;j++){
                scanf(" %c",&a[i][j]);//%c前面有一個空格，它可以跳過換行與其他空白字元
            }
        }                              //讀完地圖

         //開始輸出
        if(field>1){       //兩個地圖之間要空白
            printf("\n");
        }
        printf("Field #%d:\n",field);
        convert_function(n,m,a);
        field++;

    }
}
