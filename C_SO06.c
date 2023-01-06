#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct book{
    int id;     //學號
    int math;   //數學成績
    int eng;    //英文成績
}list;
list stu[100]; 
int cmpfunc( const void *a ,const void *b){
    list *fr=(list*)a;
    list *se=(list*)b;
    if(se->math<fr->math)return -1;     //先比較數學分數
    else if(se->eng<fr->eng&&se->math==fr->math) return -1; //同分比英文
    else return 1;
}
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d %d %d",&stu[i].id,&stu[i].math,&stu[i].eng);//存入資料
    }
    qsort(stu,num, sizeof(list), cmpfunc);  //呼叫qsort
    for(int i=0;i<num;i++){
        printf("%d %d %d\n",stu[i].id,stu[i].math,stu[i].eng);  //輸出sort後的結果
    }
    system("pause");
}