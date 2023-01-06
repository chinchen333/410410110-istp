#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a;
    while (scanf("%f",&a)!=EOF){
        printf("%.2lf\n",a*20000/198);  //輸出算式結果
    }
}