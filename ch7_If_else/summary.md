### if 语句
    if语句被称为 分支语句 或 选择语句
    注意：即使 if语句 由复合语句构成名，整个if语句仍被视为一条语句。

### getchar() 和 putchar()
    ch = getchar();
    等价于
    scanf("%c", &ch);

    putchar(ch)
    等价于
    printf("%c", ch);

    由于 这些函数只处理字符，所以它们比更通用的 scanf() 和 printf()函数更快，更简洁；
    它们不需要转换说明，并只处理字。

    字符实际是作为整数存储的，为方便计算，表达式ch+1 中的 ch被转换为 int类型，然后 int类型的计算结果
    被传递给接收一个 int类型参数的putchar()，该函数只根据最后一个字节确定显示哪个字符。

### else 与 if 配对
    规则：
        如果没有花括号，else与离它最近的if匹配，除非最近的if被花括号 括起来。
        注意：编译器是忽略缩进的。


### 如何找出约数
    for (div = 2; div < num; div++)
        if (num % div == 0)
            printf("%d is divisible by %d\n", num, div);
    该循环 检查 2~num之间的所有数字，测试它们能否被num整除 但是很费时
    观察：
        144%2 得 0，可知2是144的约数
        144 / 2 得72，72和2都是144的约数
        分析可知：2和72，3和48，4和36，6和24，8和18，9和16，12和12，16和9，18和8，等等。
        在得到12和12这对约数以后，便反向的找到相同对的约数。因此不用循环到143，在到达12以后就可以停止循环。
        for (div = 2; (div * div) <= num; div++)
            if (num % div == 0)
                printf("%d is divisible by %d and %d .\n",num, div, div / num);




















