#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//計算陣列中所有元素的立方和
int main(){
    int arr[7];
    int ans=0;
    int ind=0;
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);        //輸入陣列內容
    }
    for(int i=5;i>=0;i--){
        ans+=arr[i]*arr[i]*arr[i];  //將陣列中i的值平方加入總和
    }
    printf("%d",ans);
    printf("\n");
    system("pause");
}