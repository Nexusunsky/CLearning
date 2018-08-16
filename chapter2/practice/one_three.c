#include <stdio.h>
void one_three(void);
void one(void);
void two(void);
void three(void);


int main(void)
{   
    printf("starting now: \n");
    one_three();
    printf("done! \n");

    return 0;
}

void one_three()
{
    one();
    two();
    three();
}

void one()
{
    printf("one \n");
}

void two()
{
    printf("two \n");
}

void three()
{
    printf("three \n");
}
