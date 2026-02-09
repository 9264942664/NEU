#include <stdio.h>
#include <stdlib.h>

//将连续的"neu"转化为"NEU"

int main() {
    int i=0;
    char ch[100]={0};
    printf("请输入一串字符,我将其中的neu转换为NEU\n");
    scanf("%s",ch);
    while(ch[i]!=0){

        if(ch[i]=='n'&&ch[i+1]=='e'&&ch[i+2]=='u')
        {
            ch[i]='N';
            ch[i+1]='E';
            ch[i+2]='U';
            i+=3;
        }
        else i++;
    }
    printf("%s\n",ch);
    system("pause");
    return 0;
   
}