#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//計算ASCII字元
int main(){
    char str[1000];
    int num[129]={0};   //ascii碼 i的值有num[i]個
    int len=0;
    scanf("%s",&str);   //輸入字串
    while (str[len]!='\0'){
        num[str[len]]++;    //輸入字元個數++
        len++;              //字串長度++
    }
    for(int i=127;i>32;i--){
        if(num[i]!=0)printf("%d %d\n",i,num[i]);//如果此字元出現過則輸出其出現次數
    }
    system("pause");
}