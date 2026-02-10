#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2.求方程ax?+bx+c=0的根,
用3个函数分别求当:b?-4ac大于0、
等于0和小于0时的根并输出结果。
从主函数输入a,b,c的值。
*/

void solve_two_roots(int a,int b,int c){
    double num = sqrt(b*b - 4*a*c);
    double x1,x2;
    x1=(-b + num)/(2*a);
    x2=(-b - num)/(2*a);
    printf("x1=%f x2=%f\n",x1,x2);
}

void solve_one_root(int a,int b,int c){
    double x=-b/(2.0*a);    //一定要加括号确保运算顺序正确
    printf("x=%f\n",x);
}

void solve_no_real_root(int a,int b,int c){    //无返回值用void 
    double num = sqrt(4*a*c - b*b) ;
    double x1,x2;
    x1=-b/(2.0*a);      //错误原因：输入全是整形进来，结果是整数，会截断小数
    if(x1==0){
    printf("x1=%fi\n",num/(2*a));
    printf("x2=%fi\n",-num/(2*a));
    }
    else{
    printf("x1=%f+%fi\n",x1,num/(2*a));
    printf("x2=%f+%fi\n",x1,-num/(2*a));
    }

}

int main() {
    int a,b,c,num;
    printf("输入三个整数作为 a b c 的值\n");
    scanf("%d %d %d",&a,&b,&c);
    num= b*b - 4*a*c;
    if(num > 0){
        solve_two_roots(a,b,c);
    }
    else if(num == 0){
        solve_one_root(a,b,c);
    }
    else{
        solve_no_real_root(a,b,c);
    }

    system("pause");
    return 0;
   
}