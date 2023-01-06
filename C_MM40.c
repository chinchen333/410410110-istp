#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1~N之間的總和
int main(){
    int a,ans=0;
    while (scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){      //進行a次循環
            ans+=i;
            if(i!=a)printf("%d + ",i);      //如果非結尾
            else printf("%d = %d",i,ans);   //結尾
        }
        printf("\n");
    }
}