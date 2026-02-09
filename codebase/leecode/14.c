#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""

*/

char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j;
    int len = strlen(strs[0]);
    for(i=0;i<strsSize-1;i++){
    if(len > strlen(strs[i+1])){
        len = strlen(strs[i+1]);
        }
    }
    for(i=0;i<len;i++){
        for(j=1;j<strsSize;j++){
            if(strs[j][i]!=strs[0][i]){
                strs[0][i]='\0';
                return strs[0];
            }
        }

    }
    strs[0][len] = '\0';
    return strs[0];
}

int main() {
    int i;
    char strs[3][10]={"flower","flow","floight"};
    char* ptrs[3] = {strs[0], strs[1], strs[2]};
    int strsSize = sizeof(strs)/sizeof(strs[0]);

    //strs是一个数组，里面存的是这几个单词首字母的地址
    //printf("%d\n",len);
    
    printf("%s\n",longestCommonPrefix(ptrs,strsSize));

    system("pause");
    return 0;
   
}