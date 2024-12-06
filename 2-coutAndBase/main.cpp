//程序员原始编写的代码文件 main.cpp
// C++ 需要编译 原始编写的代码文件 --编译--> 可以执行程序 main.exe

//include 引入一些前人写好的现成的代码文件
// #+include+<iostream>
// i--> input o-->output
#include<iostream>

using namespace std;


// main 函数是程序的入口
// int main()
// {
//     return 0;
// }

int main() 
{
    // C++ 每行代码需要以英文的分号作为结尾
    // int 整数类型   int + 变量名 = 变量值
    // double 浮点数类型   double + 变量名 = 变量值
    int a = 10;
    double b = 20.5;

    // cout + <<+ 我们想输出的内容1+<<+我们想输出的内容2;
    // cout + <<+ 我们想输出的内容3+<<+我们想输出的内容4;
    // 我们想输出的内容1我们想输出的内容2我们想输出的内容3我们想输出的内容4
    // endl 进行换行
    cout<<"Hello World!"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
    // 变量名 = 新的值
    b=33.3;
    cout<<b<<endl;

    return 0;
}