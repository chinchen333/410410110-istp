#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//求最大公因數
int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF){
        while(a!=0&&b!=0){      //利用輾轉相除法
            if(a>=b){           //a>b則a=a%b
                a%=b;
            }else if(b>a){      //a<b則b=b%a
                b%=a;
            }
        }
        if(a>b)printf("%d\n",a);//輸出不為0的數
        else printf("%d\n",b);
    }
}