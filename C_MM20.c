#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//十進位轉十六進位
int main(){
    int dec,ind=0,check=0;
    int hex[8]={0};
    while (scanf("%d",&dec)!=EOF){
        ind=0;
        while (dec>0){
            hex[ind]=dec%16;    //記錄除16後的餘數
            ind++;      //進入下一位
            dec/=16;
        }
        for(int i=ind-1;i>=0;i--){
            if(hex[i]>=10)printf("%c",hex[i]+55);   //如果此位大於等於10則加55以字元輸出
            else printf("%d",hex[i]);       //其他輸出原陣列的數
        }
        printf("\n");
    }
}