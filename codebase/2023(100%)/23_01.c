#include <stdio.h>
#include <stdlib.h>

//求前n项序列和

int main() {
    int i,n,sum=0;
    printf("输入一个正整数\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    system("pause");
    return 0;
   
}