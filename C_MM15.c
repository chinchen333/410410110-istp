#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//判斷座標是否在正方形的範圍內
int main(){
    int x,y;
    while (scanf("%d %d",&x,&y)!=EOF){
        if(x>100||y>100){          //如果xy其中大於100則此點在範圍外
            printf("outside\n");
        }else printf("inside\n");
    }
}