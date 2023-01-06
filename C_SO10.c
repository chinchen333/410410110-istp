#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int num;
    int list[1000];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&list[i]);
    }
    int small=0,tem;
    for(int i=0;i<num;i++){     //選擇排序
        small=i;                //設定最小為自己
        for(int j=i+1;j<num;j++){
            if (list[j]<list[small]) small=j;//找出最小
        }
        if(small!=i){       //進行交換
            tem=list[i];
            list[i]=list[small];
            list[small]=tem;
        }
    }
    for(int i=0;i<num;i++){
        printf("%d",list[i]);   //輸出結果
        if(num-1==i)printf("\n");
        else printf(" ");
    }
    system("pause");
}