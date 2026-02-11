#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. 写一个函数，将两个字符串连接。(动态内存申请)
*/

char * splice(char *ch1,char *ch2){
    int i,j;
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    int len = len1 + len2 + 1;
    char *resource = (char * )malloc(len * sizeof(char));
    if (resource == NULL) {
        printf("内存申请失败！人数太多或内存不足\n");
    }
    for (i = 0; i < len1 ; i++){
        resource[i]=ch1[i];
    }
    for( j = 0 ;j < len2 ; j++){
        resource[len1+j]=ch2[j];
    }
    resource[len-1]='\0';
    return resource;
}

int main() {
    int i;
    char ch1[10]={"qwerty"};
    char ch2[10]={"uiop"};    
    char *str=splice(ch1,ch2);
    printf("%s\n",str);
    free(str);
    system("pause");
    return 0;
   
}
