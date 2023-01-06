#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//停車費計算
int main(){
    int fir1,fir2,sec1,sec2;
    int min,count,ans=0;
    while (scanf("%d %d",&fir1,&fir2)!=EOF){
        ans=0;
        scanf("%d %d",&sec1,&sec2);
        min=(sec1-fir1)*60+sec2-fir2;   //算出總共幾分鐘
        count=min/30;           //算出幾個半小時
        while(count>8){
            ans+=60;            //大於4小時用60算
            count--;
        }
        while(count>4){         //大於2小時用40算
            ans+=40;
            count--;
        }
        while(count>0){         //小於2小時用30算
            ans+=30;
            count--;
        }
        printf("%d\n",ans);
    }
}