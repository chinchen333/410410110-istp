#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//電話費計算
int main(){
    double a;
    while (scanf("%lf",&a)!=EOF){
        if(a<=800){
            printf("%.1lf\n",a*0.9);    //如果800分以下只乘話費
        }else if(a<1500){
            printf("%.1lf\n",a*0.9*0.9);//如果800到1500分乘話費再乘0.9
        }else{
            printf("%.1lf\n",a*0.9*0.79);//如果1500分以上乘話費再乘0.79
        }
    }
}