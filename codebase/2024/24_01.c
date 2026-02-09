#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
判断100000以内是否存在一个数满足，
他加上100是一个数的平方，
加上168是另一个数的平方
*/

//判断是否为一个数的平方
bool judge(int num){
    int i;
    for(i=1;i*i<=num;i++){
        if((num/i)==i && (num%i)==0){return 1;}
    }
    return 0;
}

int main() {
    int i,n;
    for(i=1;i<=100000;i++){
        if(judge(i+100)&&judge(i+168)){
            printf("%d\n",i);
            n++;
        }
    }
    if(n==0){printf("NO");}
    system("pause");
    return 0;
   
}