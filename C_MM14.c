#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算時間的組合
int main(){
    int in,min,hour,day;
    while (scanf("%d",&in)!=EOF){
        min=in/60;      //先計算出分鐘
        in%=60;         //剩餘的為秒
        hour=min/60;    //再計算出小時
        min%=60;        //剩餘的為分鐘
        day=hour/24;    //再計算出天
        hour%=24;       //剩餘的為小時
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n",day,hour,min,in);
    }
}