#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//一維陣列反轉 II
int main(){
    int arr[7];
    int ind=0;
    for(int i=0;i<6;i++){   
        scanf("%d",&arr[i]);    //輸入陣列內容
    }
    for(int i=5;i>=0;i--){
        printf("%d",arr[i]);    //反向輸出陣列
        if(i!=0)printf(" ");
    }
    printf("\n");
}