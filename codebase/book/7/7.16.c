#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
16. 写一个函数，输入一个十六进制数，输出相应的十进制数。
*/

#define a 10
#define b 11
#define c 12
#define d 13
#define e 14
#define f 15
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15

int hex_to_dec(char *hex_num){
    int num=0;
    int sum=0;
    int i;
    
    int len = strlen(hex_num);

    int *hex_2_int=(int *)malloc(len * sizeof(int));

    for ( i = 0; i < len; i++)
    {
        switch (hex_num[i])
        {
        case 'a': hex_2_int[i]=hex_num[i]-87;break;
        case 'b': hex_2_int[i]=hex_num[i]-87;break;
        case 'c': hex_2_int[i]=hex_num[i]-87;break;
        case 'd': hex_2_int[i]=hex_num[i]-87;break;
        case 'e': hex_2_int[i]=hex_num[i]-87;break;
        case 'f': hex_2_int[i]=hex_num[i]-87;break;
        case 'A': hex_2_int[i]=hex_num[i]-55;break;
        case 'B': hex_2_int[i]=hex_num[i]-55;break;
        case 'C': hex_2_int[i]=hex_num[i]-55;break;
        case 'D': hex_2_int[i]=hex_num[i]-55;break;
        case 'E': hex_2_int[i]=hex_num[i]-55;break;
        case 'F': hex_2_int[i]=hex_num[i]-55;break;
        case '0': hex_2_int[i]=hex_num[i]-'0';break;
        case '1': hex_2_int[i]=hex_num[i]-'0';break;
        case '2': hex_2_int[i]=hex_num[i]-'0';break;
        case '3': hex_2_int[i]=hex_num[i]-'0';break;
        case '4': hex_2_int[i]=hex_num[i]-'0';break;
        case '5': hex_2_int[i]=hex_num[i]-'0';break;
        case '6': hex_2_int[i]=hex_num[i]-'0';break;
        case '7': hex_2_int[i]=hex_num[i]-'0';break;
        case '8': hex_2_int[i]=hex_num[i]-'0';break;
        case '9': hex_2_int[i]=hex_num[i]-'0';break;
        default:    break;
        }
    }
    
    for (i = len-1; i >=0; i--)
    {
        num = hex_2_int[i] * (int)pow(16,len-i-1);
        sum+=num;
    }

    free(hex_2_int);
    return sum;
}

int main() {
    char hex_num[30]={""};
    int num;
    printf("输入四位16进制数字\n");
    scanf("%s",hex_num);
    num=hex_to_dec(hex_num);
    printf("%d\n",num);
    system("pause");
    return 0;
   
}