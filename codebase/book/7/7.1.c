#include <stdio.h>
#include <stdlib.h>

int get_max(int a,int b){
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    if((max%min)==0){
        return min;
    }
    else{min--;}
    while((b%min)!=0 || (a%min)!=0){
        min--;
    }
    return min;
}

int get_min(int a,int b){
    int i=1;
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    while(((min*i)%max)!=0){
        i++;
    }
    return min*i;
}

int main() {
    printf("%d\n",get_max(12,16));
    system("pause");
    return 0;
   
}