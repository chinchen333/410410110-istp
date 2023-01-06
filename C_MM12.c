#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//相遇時間計算
int main(){
    int a,b;
    while (scanf("%d",&a)!=EOF){
        b=a/0.238+1;    //相遇時間=距離/相差數率
        printf("%d\n",b);
    }
}