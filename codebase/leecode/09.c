#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

// 例如，121 是回文，而 123 不是。

int a,i,j,len=0;
bool isPalindrome(int x){
    
    if(x<0){return false;}
    char str[20]={};
    len=sprintf(str,"%d",x);
    for(i=0;i<len;i++){
        if(str[i]==str[len-1-i]){j++;}
    }

    if(j==len){return true;}
    else{return false;}
    
}

int main(){
    scanf("%d",&a);
    if(isPalindrome(a)){printf("是");}
    else{printf("不是");}
    system("pause");
    return 0;

}

/*  我的解
    int i,j=0;
    if(x<0){return false;}
    char str[20]={};
    sprintf(str,"%d",x);
    for(i=0;i<len;i++){
        if(str[i]==str[len-1-i]){j++;}
    }

    if(j==len){return true;}
    else{return false;}
*/

/*答案最优方法，太巧妙了
bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    
    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return x == rev || x == rev / 10;
}
*/