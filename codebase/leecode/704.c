#include <stdio.h>
#include <stdlib.h>

//  *È¡ÄÚÈİ

int search(int* nums, int numsSize, int target) {

    int left=0,right=numsSize-1;
    int middle=(left+right)/2;

    while(left<=right){
        if(nums[middle]<target){
            left=middle+1;
            middle=(left+right)/2;
        }
        else if(nums[middle]>target){
            right=middle-1;
            middle=(left+right)/2;
        }
        else{
            return middle;
        }
    }
    return -1;
}


int main() {

    int a[6]={-1,0,3,5,9,12};
    int len=sizeof(a)/sizeof(int);
    printf("%d\n", search(a,len,9));
    system("pause");
    return 0;
}
