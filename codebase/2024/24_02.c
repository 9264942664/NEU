#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
要求用卢输入一个合法的日期，日期格式为年、月、日（之间用空格分隔。“程序需要计
算从输入日期的次日到该年结束还有多少天。例如如果用户输入202312.28,程序应输出3。
*/ 

int main() {
    int ch[3];
    int year , month , days=0;
    int i=12,j;
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d %d %d",ch,ch+1,ch+2);
    year=ch[0];
    if(((year%4)==0 && (year%100)!=0) || (year%400)==0){day[2]=29;printf("闰年\n");}
    month=ch[1];
    days=day[month]-ch[2];
    
    while(i>month){
        days+=day[i];
        i--;
    }
    printf("%d\n",days);
    system("pause");
    return 0;
   
}