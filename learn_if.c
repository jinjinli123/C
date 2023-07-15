#include<stdio.h>
//if语句
int main()
{   
    int i;

    printf("请输入您的成绩：");
    scanf("%d",&i); 

    if (i >= 90)
    {
        printf("A\n");/* code */
    }
    else if (i>=80&&i<90)
    {
        printf("B\n");/* code */
    }
    else if (i>=70 && i<80)
    {
        printf("C\n");/* code */
    }
    else if (i>=60 && i<70)
    {
       printf("C\n"); /* code */
    }
    else if (i<60)
    {
        printf("D\n");/* code */
    }
    else if (i=59)
    {
        printf("E\n");/* code */
    }
    
   

    return 0;
}
    

