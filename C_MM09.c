#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算 i 次方的值
int main(){
    int in;
    int ans[32];
    ans[0]=1;
    for(int i=1;i<=31;i++){
        ans[i]=ans[i-1]<<1;//每次將前向左移bit乘二
    }
    while (scanf("%d",&in)!=EOF){
        if(in>31)printf("Value of more than 31\n");
        else printf("%d\n",ans[in]);//輸出預先算好存在陣列的值
    }
}