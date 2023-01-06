#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算兩數和的平方值
int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",(a+b)*(a+b));     //算出兩數之和後輸出
    }
}