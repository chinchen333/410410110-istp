#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//十進制轉二進制
int main(){
    int dec,ind=0,check=0;
    int bin[8]={0};
    while (scanf("%d",&dec)!=EOF){
        if(dec<0){      //如果輸入的數為負
            check=1;    
            dec*=-1;    //先轉正
            dec-=1;     //再減1
        }
        ind=0;
        while (dec>0){
            bin[ind]=dec%2; //如果餘1此位為1
            ind++;          //進入下一位
            dec/=2;         //原數除2
        }
        if(check){
            for(int i=7;i>=0;i--){
                if(bin[i]==0)printf("1");   //如果為負責將結果相反輸出陣列
                else printf("0");
                bin[i]=0;
            }
        }else{
            for(int i=7;i>=0;i--){  
                printf("%d",bin[i]);    //輸出結果
                bin[i]=0;
            }
        }
        printf("\n");
    }
}