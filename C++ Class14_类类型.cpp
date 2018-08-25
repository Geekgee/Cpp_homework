//Class14_类类型
//Demo30 class类的入门介绍
#include<iostream>
#include<string>
using namespace std;

class Cat
{
	double 身高;//默认的访问级别是private
	double 体重;
};//注意分号

struct Dog//C语言里就有struct，C++继承了C语言的struct
{
	double 身高;//默认的访问级别是public
	double 体重;
};//注意分号

class 学生
{
	//类成员
	//数据成员
	//成员函数
	//公有的、私有的
};//注意分号

class Sales_item//销售项，就是销售的每一本书
{
    public://类的操作：成员函数
    private://类的
	std::string isbn;//书号
	unsigned units_sold;//销售数量
	double revenue;//金额

};//注意分号

int main()
{
	double d = 0.0;
	int a;//a是一个变量，int类型（整数类型）
	Dog b;//b是一个变量，Dog类型
	学生 c;//c是一个变量，学生类型

	std::cout<<"Hello!类!"<<std::endl;
	return 0;
}
