#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//算階乘
int main(){
    long long ans=1;
    int a;
    while (scanf("%d",&a)!=EOF){
        ans=1;
        for(int i=1;i<=a;i++){
            ans*=i;     //聰1乘到輸入的數算出乘階
        }
        printf("%lld\n",ans);//輸出結果
    }
}