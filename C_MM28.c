#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算1到N之間屬於5和7的倍數
int main(){
    int a,in;
    int arr[10000];
    arr[0]=0;
    for(int i=1;i<10000;i++){   //建表
        arr[i]=arr[i-1]+35;     //前項加35
    }
    while (scanf("%d",&a)!=EOF){
        in=a/35;                //算出為35的幾倍
        for(int i=1;i<=in;i++){
            printf("%d",arr[i]);//連續輸出表中對應的數
            if(i!=in)printf(" ");
        }
        printf("\n");
    }
}