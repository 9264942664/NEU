#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
7. 写一个函数，将一个字符串中的元音字母复制到另一字符串，然后输出。
*/

char * copy(char *ch){
    char vowel[10]={"aeiouAEIOU"};
    int input_len = strlen(ch); 
    int i,j,k=0,output_len=0;
    for( i = 0 ; i < input_len ; i++ ){
        for ( j = 0; j < 10; j++ ){
        if(ch[i]==vowel[j]){
            output_len++;
            }
        }
    }
    char * str = (char *)malloc((output_len+1) * sizeof(char));
    for ( i = 0; i < input_len; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if(ch[i]==vowel[j]){
            str[k]=ch[i];k++;
            }
        }
    }
    str[output_len]='\0';
    return str;
    
}

int main() {
    char ch[50]={"xyz"};
    char *str = copy(ch);
    printf("%s\n",str);
    free(str);
    system("pause");
    return 0;
   
}