#include <stdio.h>
#include <stdlib.h>

//统计句子中单词个数，并将单词首字母改为大写

int main() {
    int i=0,num=1;
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    if(ch[0]>='a' && ch[0]<='z')
    {
        ch[0]-=32;
    }
    while(ch[i]!=10){
        if(ch[i]==32)
        {
            num++;
            if(ch[i+1]>='a' && ch[i+1]<='z')
            {
                ch[i+1]-=32;
            }
        }
        i++;
    }
    ch[i]='\0';
    printf("一共%d个单词\n转换后的字符串为%s\n",num,ch);
    system("pause");
    return 0;
   
}