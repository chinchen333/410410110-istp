#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算數字相乘後末尾0的數量
int main(){
    long long ans=1,a;
    int outp=0;
    while (scanf("%lld",&a)!=EOF){
        ans*=a;     //輸入相乘
    }
    while (ans%10==0){ //判斷是否還有10
        outp++;     
        ans/=10;        //除10後繼續
    }
    printf("%d\n",outp);
    system("pause");
}