//20180827
//Class15_编写自己的头文件
//Demo31 
#include<iostream>
#include<string>
#include"Dog.h"
#include"demo.h"
#include"Sales_item.h"
//写类的定义：类的成员

//头文件写什么：类的定义
//外部变量的声明
//函数的声明：只能写声明，不能写定义
//const常量的定义可以写在头文件里
using std::cout;
using std::string;

int main()
{
	string names;
	Sales_item a;
	Dog dog;
	std::cout<<"hello！头文件\n"<<std::endl;
}
