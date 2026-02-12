#include <stdio.h>
#include <stdlib.h>
/*
8. 写一个函数，输入一个4位数字，要求输出这4个数字字符，
但每两个数字间空一个空格。如输入1990，应输出"1 9 9 0"。
*/

char * insert(int num){
    char *result = (char *)malloc(8);
    result[0]=num/1000+'0';
    result[1]=result[3]=result[5]=' ';
    result[2]=num/100%10+'0';
    result[4]=num/10%10+'0';
    result[6]=num%10+'0';
    result[7]='\0';
    return result;
}

int main() {
    int num=1990;
    //scanf("%d",&num);
    char *str=insert(num);
    printf("%s\n",str);
    free(str);

    system("pause");
    return 0;
   
}