#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//英哩轉公里
int main(){
    double a;
    double ans;
    int temp;
    double small;
    while (scanf("%lf",&a)!=EOF){
        temp=(int)(a*1.6*10+0.5);//算出公里後進行四捨五入
        ans=temp/10.0;
        printf("%.1lf\n",ans);   //輸出結果
    }
}