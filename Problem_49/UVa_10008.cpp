#include <stdio.h>
#include <ctype.h>

int main() {

    int box[26] = {0};
    int n;
    scanf("%d", &n);
    getchar(); //用來吃掉n之後的換行
    char x;
    int k;
    int i;
    char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int check;

    //統計次數
    for (i = 0; i < n; i = i + 1) {
        while ((x = getchar()) != '\n' && x != EOF) { //一字一字讀 //EOF是檔案結束
            if (isalpha(x) != 0) {                    //是否為英文字母
                x = toupper(x);                       //轉成大寫
                for (k = 0; k < 26; k = k + 1) {
                    if (az[k] == x) {
                        box[k]++;
                        break; //加上次數之後跳出for loop
                    }
                }
            }
        }
    }

    //排序加上輸出
    for (int z = 1000; z > 0; z = z - 1) { //從1000開始慢慢確認
        for (check = 0; check < 26; check = check + 1) {
            if (box[check] == z) {
                printf("%c %d\n", az[check], box[check]);
            }
        }
    }

    return 0;
}
