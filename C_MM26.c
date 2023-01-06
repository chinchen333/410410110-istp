#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//輸出 1*1、2*2、...、N*N之結果
int main(){
    int a,in;
    while (scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){      //進入迴圈
            printf("%d*%d=%d\n",i,i,i*i);//直接輸出i*i
        }
    }
}