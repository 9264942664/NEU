#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
10. 写一个函数，输入一行字符，将此字符串中最长的单词输出。

*/

char * get_max(char *ch){
    int max_word_len=0;
    int new_word_len=0;
    int i,max;
    char *pstr;
    int len = strlen(ch);
    char * p_max_word = ch;

    for (i = 0; i <= len; i++){
        if(ch[i]==' ' || ch[i]=='\0'){
            if(max_word_len < new_word_len){
            max_word_len = new_word_len;
            p_max_word=ch+i-max_word_len;
            }
            new_word_len=0;
        }
        else{new_word_len++;}
    }

    pstr = (char *)malloc(max_word_len + 1);
    pstr[max_word_len]='\0';
    strncpy(pstr, p_max_word, max_word_len);
    return pstr;
}

int main() {
    char ch[100]={"aa bbb  "}; //遍历到 '\0'
    
    char *pstr=get_max(ch);
    printf("%s\n",pstr);
    free(pstr);
    system("pause");
    
    return 0;
   
}