/* 浮点值的上溢和下溢 */
// 上溢 ：当计算导致数字过大，超过当前类型能表达的范围时，发生上溢出。
// 下溢 ：虽然得到结果，但是在计算过程中却损失了原末尾有效为上的数字。

#include <stdio.h>
int main(void)
{
    float tooBig = 3.4E38;
    float overflow = 3.4E38 * 100.0f;
    double handled1 = 3.4E38 * 100.0f;
    printf("tooBig :%e\n", tooBig);
    printf("overflow :%e\n", overflow);
    printf("handled1 :%e\n", handled1);

    float tooSmall = 0.123456E-10;
    float underflow = 0.123456E-10 /10;
    double handled2 = 0.123456E-10 /10;
    printf("tooSmall :%Le\n", tooSmall);
    printf("underflow :%Le\n", underflow);
    printf("handled2 :%Le\n", handled2);

    printf("2E5 :%e \n",2E-5);
    printf("2E-5 :%e \n",2E5);
    printf("2e5 :%e \n",2e5);
    printf("2e-5 :%e \n",2e-5);

    return 0;
}