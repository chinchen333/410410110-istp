#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//計算總和、乘積、差、商和餘數
int main(){
    int a,b,c,r;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);   //輸出相加
    printf("%d*%d=%d\n",a,b,a*b);   //輸出相乘
    printf("%d-%d=%d\n",a,b,a-b);   //輸出相減
    if(a<0)c=a/b-1;                 //如果被除數式負,商須再減一
    else c=a/b;
    r=(a%b+b)%b;        //轉換正餘數
    printf("%d/%d=%d...%d\n",a,b,c,r);////輸出相除
    system("pause");
}