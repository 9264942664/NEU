#include <stdio.h>
#include <stdlib.h>


int main() {
    int n=1,k;
    double sum=0;
    printf("输入一个正整数\n");
    scanf("%d",&k);

    while(sum<=(double)k){
        sum=sum+(1/(double)n);
        n++;
    }
    printf("%d\n",n-1);
    system("pause");
    return 0;
}