#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
求小于n且个位数不为9的全部素数，2须大于等于100，如果小于100显示重新输
入，直到符合要求为止，n的值由用户从键盘输入。
*/

bool judge(int n){
    int i,j=0;
    for(i=2;i<n;i++){
        if((n%i)==0){j++;}
    }
    if(j==0){return 1;}
    else{return 0;}
}

int main() {

    int i,j=0,k=0,n;
    int a[50]={0};
    printf("请输入一个大于等于100的整数\n");
    scanf("%d",&n);
    while(n<100){
        printf("输入不合法,请重新输入\n");
        scanf("%d",&n);
        if(n>=100){break;}
    }
    for(i=100;i<n;i++){
        if(judge(i)&&((i%10)!=9)){a[j]=i;j++;}
    }
    printf("100到%d的个位数不为9的素数有\n",n);
    while(a[k]!=0){
    printf("%d ",a[k]);k++;
    }
    system("pause");
    return 0;
   
}
