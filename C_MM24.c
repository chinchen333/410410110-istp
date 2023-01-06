#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算薪水
int main(){
    double a,b;
    double remain;
    while (scanf("%lf %lf",&a,&b)!=EOF){
        if(a>120){          //如果超過120個小時
            remain=a-120.0; //計算-120後的時數
            printf("%.1lf\n",60.0*b+60.0*1.33*b+remain*b*1.66);//計算結果後輸出
        }else if(a>60){     //如果介於60到120個小時
            remain=a-60;    //計算-60後的時數
            printf("%.1lf\n",60*b+remain*b*1.33);//計算結果後輸出
        }else{
            printf("%.1lf\n",a*b);//直接輸出工時*薪資        
            }
    }
}