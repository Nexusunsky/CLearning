#include <stdio.h>
#define PAGES 959

int main(void)
{
    const double RENT = 3852.99 // const 只读变量

    /* 字段宽度和小数点后面的位数均为 系统默认设置。即字段宽度是容纳带打印数字所需的位数和小数点后打印6位数字*/
    printf("*%f*\n", PAGES);

    /*默认情况下，编译器在小数点的左侧打印1位数字，在小数点右侧打印6个数字*/
    printf("*%e*\n", PAGES);

    /*指定小数点左侧打印四位数字，在小数点右侧打印2位数字*/
    printf("*%4.2f*\n", PAGES);
    printf("*%3.1f*\n", PAGES);

    /*小数点左侧显示十位数字，不足用空格填充*/
    printf("*%10.3f*\n", PAGES);
    printf("*%10.3E*\n", PAGES);

    /*说明+标记*/
    printf("*%+4.2f*\n", PAGES);

    /*0标记使得打印的值前面以0填充以满足字段要求*/
    printf("*%010.2f*\n", PAGES);

    return 0;
}
