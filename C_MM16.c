#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//判斷座標是否在圓形的範圍內
int main(){
    int x,y;
    double r;
    while (scanf("%d %d",&x,&y)!=EOF){
        r=sqrt((x*x)+(y*y));    //算出點到原點的距離
        if(r>100){              //如過大於100則再圓外
            printf("outside\n");
        }else printf("inside\n");
    }
}