#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s] \n", BLURB);
    printf("[%24s] \n", BLURB);

    /* .5 表明只打印5个字符*/
    printf("[%24.5s] \n", BLURB);
    /*- 标记使得文本左对其输出*/
    printf("[%-24.5s] \n", BLURB);

    return 0;
}