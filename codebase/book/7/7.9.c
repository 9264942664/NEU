#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
9. 编写一个函数，由实参传来一个字符串，统计此字符串中字母、
数字、空格和其他字符的个数，在主函数中输入字符串以及输出上述的结果。
*/

void count(char *ch){

    int i,letter=0,number=0,space=0;
    int len = strlen(ch);
    for ( i = 0; i < len; i++)
    {
        if(ch[i]>='a' && ch[i]<='z'){letter++;}
        else if(ch[i]>='A' && ch[i]<='Z'){letter++;}
        else if(ch[i]>='0' && ch[i]<='9'){number++;}
        else if(ch[i]==' '){space++;}
    }
    printf("字母有%d个\n数字有%d个\n空格有%d个\n",letter,number,space);
    printf("其他字符有%d个\n",strlen(ch)-letter-number-space);
    
}

int main() {


    char ch[100]={"abc  ABC123"};
    count(ch);
    system("pause");
    return 0;
   
}
