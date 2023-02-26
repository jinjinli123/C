//字符和字符串
#include<stdio.h>

int main()
{
    char a = 'C';

    printf("c = %d\n",a);

    return 0;
}
	// 1. char
	// char是一个特殊的整形
	
	// char是否unsigned由编译系统决定
	
    // 2. 字符串

	// 声明: char 变量名[数量];
	
	// 赋值: 变量名[索引号] = 字符
	// 例：  声明： char name[2];
	// 	赋值：name[0] = 'L';
	// 			name[1] = 'J'；
	// 简写：char  变量名[] = 字符串常量
