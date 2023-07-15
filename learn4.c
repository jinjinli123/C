//关系运算符
#include<stdio.h>
#include<math.h>

int main()
{
    int a = 5,b = 3;

    // printf("%d\n",3>1&&1<2);
    // printf("%d\n",3+1||2==0);//4||0
    // printf("%d\n",!(a+b));
    // printf("%d\n",!0+1<1|| !(3+4));
    // printf("%d\n",'a'-'b'&& 'c');//97-98&&99

//短路求值
    (a=0)&&(b=5);//a=0的结果为0后，逻辑与后面就不会再运算了
    printf("a = %d,b = %d\n",a,b);

    (a=1)||(b=5);//a=1结果为1后，逻辑或的后面不运算
    printf("a = %d,b = %d\n",a,b);



   


    return 0;
}