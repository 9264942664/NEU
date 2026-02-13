#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
10. 写一个函数，输入一行字符，将此字符串中最长的单词输出。

    for (i = 0; i < len; i++){
        if(ch[i]==' '){
            if(max_word_len < new_word_len){
            max_word_len = new_word_len;
            }
            new_word_len=0;
        }
        else{new_word_len++;}
    }


    
*/

char * get_max(char *ch){
    int max_word_len=0;
    int new_word_len=0;
    int last_word_len=0;
    int i,max;
    char *pstr;
    int len = strlen(ch);
    char * p_max_word = ch;
    char * p_last_word = ch;

    for (i = 0; i < len; i++){
        if(ch[i]==' '){
            if(max_word_len < new_word_len){
            max_word_len = new_word_len;
            p_max_word=ch+i-max_word_len;
            }
            new_word_len=0;
        }
        else{new_word_len++;}
    }

    for (i = 0; i < len; i++){
        if(ch[i]==' '){
            p_last_word=ch+i+1;               //p_last_word指向最后一个单词首字母
        }
    }
    last_word_len = ch+len-1-p_last_word;   //计算最后一个单词长度
    if(max_word_len < last_word_len){
    max_word_len = last_word_len;
    p_max_word=p_last_word;
    }

    pstr = (char *)malloc(max_word_len + 1);
    pstr[max_word_len]='\0';
    strncpy(pstr, p_max_word, max_word_len);

    return pstr;
}

int main() {
    char ch[100]={"  leading spaces"}; //遍历到 '\0'
    
    char *pstr=get_max(ch);
    printf("%s\n",pstr);
    free(pstr);
    system("pause");
    
    return 0;
   
}