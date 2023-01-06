#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int list[5];
int cmpi(const void *a,const void *b){
    return ( *(int*)a - *(int*)b );
}
int main(){
    while (scanf("%d %d %d %d %d",&list[0],&list[1],&list[2],&list[3],&list[4])){
        if(list[0]==0&&list[1]==0&&list[2]==0&&list[3]==0&&list[4]==0){
            break;  //0 0 0 0 0結束
        }else{
            qsort(list,5,sizeof(int),cmpi);//進行sort
            printf("%d\n",list[2]);//輸出中中位數
        }
    }
}