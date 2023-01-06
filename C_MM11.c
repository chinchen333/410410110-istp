#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//購票計算
int main(){
    int a;
    int i;
    while (scanf("%d",&a)!=EOF){
        for (i=1;a>=10;i++){    //先計算10元數量,扣到小於10元跳出
            a-=10;
        }
        printf("NT10=%d\n",i-1);
        for (i=1;a>=5;i++){     //再計算5元數量,扣到小於5元跳出
            a-=5;
        }
        printf("NT5=%d\n",i-1);
        printf("NT1=%d\n",a);   //剩餘則都1塊
    }
}