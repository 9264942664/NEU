#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5.写一个函数,使输人的一个字符串按反序存放,在主函数中输入和输出字符串。

*/

void swap(char *a,char *b){
    char c=*a;
    *a=*b;
    *b=c;
}

void reverse(char *ch){
    int len = strlen(ch);
    int i;
    for ( i = 0; i < len/2; i++)
    {
        swap(ch+i,ch+len-1-i);
    }
    

}


int main() {

    //char ch[100]={"This is a sentence\n"};
    char ch[100]={"poiuytrewq"};
    printf("%s\n",ch);
    reverse(ch);
    printf("--------------颠倒后--------------\n");
    printf("%s\n",ch);

    system("pause");
    return 0;
   
}