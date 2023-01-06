#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//攝氏溫度轉華式溫度
int main(){
    double a;
    double ans;
    int temp;
    while (scanf("%lf",&a)!=EOF){
        temp=(int)((a*9/5+32)*10+0.5);//轉為華氏後四捨五入
        ans=temp/10.0;
        printf("%.1lf\n",ans);  //輸出結果
    }
}