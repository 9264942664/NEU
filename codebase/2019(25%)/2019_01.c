#include <stdio.h>
#include <stdlib.h>

/*
编程实现输入一个数(0-99999)
实现输入这个数中每位数重新组合后构成的最大数和最小数


*/
void swap(int *a,int *b){
    int n;
    n=*a;
    *a=*b;
    *b=n;
}


int main() {
    
    int num,i,j,max,min,n;
    printf("输入一个0-99999的整数\n");
    scanf("%d",&num);
    while ( num<0 || num>99999 ){
        printf("输入不合规，重新输入\n");
        scanf("%d",&num);
    }

    if(num>=1000 && num<=9999){n=4;}
    else if(num>=100 && num<=999){n=3;}
    else if(num>=10 && num<=99){n=2;}
    else if(num>=0 && num<=9){n=1;}
    else{n=5;}
    int a[5];
    
    a[0]=num/10000;
    a[1]=num/1000%10;
    a[2]=num/100%10;
    a[3]=num/10%10;
    a[4]=num%10;

    for(i=4;i>=1;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){swap(a+j,a+j+1);}
        }
    }

    min=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
    max=a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0];
    printf("%d\n",n);
    switch(n){
        case 4: max=max/10;     break;
        case 3: max=max/100;    break;
        case 2: max=max/1000;   break;
        case 1: max=max/10000;   break;
        default:break;
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    system("pause");


    return 0;
   
}