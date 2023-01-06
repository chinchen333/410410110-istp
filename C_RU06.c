#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fun(int n){
    if(n==0)return 1;               
    else if(n==1)return 2;
    else return fun(n-1)+fun(n/2);
}
int main(){
    int in;
    scanf("%d",&in);
    printf("%d\n",fun(in)); //輸出遞迴結果
    system("pause");
}