#运算符，表达式和语句
    赋值表达式语句 的目的是把 值存储到 内存 位置上。
    1，数据对象，左值，右值和运算符
        a，数据对象：用于 存储值的数据区域。
            使用变量名是标示对象的一种方法，除此之外，还有其他方法，
            例如，可以指定 数组的元素，结构的成员，或者使用指针表达式（存储他所指向对象的地址）。

        b，左值：用于 标识 特定数据对象 的名称或表达式，
            可知，对象是 实际的数据存储，左值 是用于 标识 或 定位 存储位置的 标签。
            左值的标准：
                a，指定一个对象，所以引用内存中的地址
                b，它可以用在赋值运算符的左侧
            沿革：左值 --> 可修改的左值 --> 对象定位值

    2，表达式和语句
        a，表达式：
            由 运算符（非必须） 和 运算对象（必须） 组成，
            表达式 由 字表达式组成。
            每个表达式都有一个值。

        b，语句：
            语句是C程序的基本构建块，一条语句 相当于 一条完整的计算机指令，一般是以分号结尾。

    3，副作用和序列点
        a，副作用：对 数据对象 或 文件 修改。
           称之为 副作用 是 因为 从程序指令的角度而言 是对 表达式进行求值，而 在执行表达式时，会修改 一些数据对象和文件，产生了副作用。

        b，序列点：程序执行的点，在该点上，所有 副作用 都在 进入下一步 之前发生。
        完整表达式：指这个 表达式 不是另外一个 更大表达式 的 子表达式。
        复合语句：用花括号括起来的 一条语句 或 多条语句。
