#include <stdio.h>
#include <stdlib.h>
/*

4.写一个函数,使给定的一个 n x n 的二维整型数组转置,即行列互换

*/
void print(int len,int *Q){
    int i,j;

    for ( i = 0; i < len; i++)
    {
        for ( j = 0; j < len; j++)
        {
            printf("%3d ",*(Q+i*len+j));
        }
        printf("\n");
    }
}

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void transpose(int len , int *Q){
    int i,j;
    for ( i = 0; i < len ; i++)
    {
        for ( j = i+1 ; j < len; j++)
        {
            swap(Q+i*len+j,Q+j*len+i);
        }
    }
}

int main() {
    int i,j;
    int Q[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int n =  sizeof(Q)/sizeof(Q[0]) ;
    print(n,&Q[0][0]);
    printf("----------------交换后----------------\n");
    transpose(n,&Q[0][0]);
    print(n,&Q[0][0]);
    //printf("%d\n",n);
    system("pause");
    return 0;
   
}