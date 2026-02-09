#include <stdio.h>
#include <stdlib.h>
// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  
// 的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
// 你可以按任意顺序返回答案。
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    * returnSize=2;
    int i,j;
    int sum;
    int *p = (int *)malloc(2 * sizeof(int));
    for(i=0;i<numsSize-1;i++){
        for (j = i+1; j < numsSize; j++){
            if(target==(*(nums+i)+*(nums+j)))
            {
                p[0]=i;
                p[1]=j;
                return p;
            }
        }
        
    }
    p[0]=-1;p[1]=-1;
    return p;
     
}
int main() {
    int size =2;
    int a[4];
    int i;
    int numsSize=sizeof(a)/sizeof(int);
    int target;
    for(i=0;i<4;i++){
        scanf("%d",a+i);
    }
    scanf("%d",&target);
    int * idx = twoSum(a,numsSize,target,&size);

    printf("下标：%d %d\n", idx[0], idx[1]);
    free(idx);
    system("pause");
    return 0;
   
}
