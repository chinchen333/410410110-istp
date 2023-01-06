#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算兩整數間所有整數的總和
int main(){
    int a,b,temp;
    int arr[10000];
    arr[0]=0;
    for(int i=1;i<10000;i++){   //建表
        arr[i]=arr[i-1]+i;      //總和=前項+此項數字
    }
    while (scanf("%d %d",&a,&b)!=EOF){
        if(a>b){        //如果a>b
            temp=a;     //交換兩數
            a=b;
            b=temp;
        }
        printf("%d\n",arr[b]-arr[a-1]);     //輸出總和差
    }
}