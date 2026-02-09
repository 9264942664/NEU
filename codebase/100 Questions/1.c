#include <stdio.h>
#include <stdlib.h>

/*
题目:有1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数?都是多少?
*/

int main() {
    int i,j,k,num=0;

    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j==i){continue;}
            for(k=1;k<=4;k++){
                if(k==j || k==i){continue;}
                printf("%d\n",i*100+j*10+k);
                num++;
            }
        }
    }
    printf("共%d个\n",num);
    system("pause");
    return 0;
   
}