#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算平方值與立方值
int main(){
    int a;
    while (scanf("%d",&a)!=EOF){
        printf("%d %d %d\n",a,a*a,a*a*a);//分別輸出原數,平方,立方
    }
}