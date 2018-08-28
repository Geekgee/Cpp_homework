//Class13_枚举
//Demo30 枚举类型
#include<iostream>
int m;//这是变量
const int n = 8;//这是const常量

//const int input = 0;//有很多常量做成枚举
//const int output = 1;
//const int append = 2;//2表示追加

enum open_modes
{
	input,
	output,
	append
};

enum forms{shape = 1,sphere,cylinder,polygon};

enum 星期
{
	星期一,
	星期二,
	星期三,
	星期四,
	星期五,
	星期六,
	星期日,
};

int main()
{
	int x;//C++做好直接拿来用
	long y;
	double z;
	open_modes a;//a是枚举open_modes类型
	forms b;//可以定义新的类型
	星期 c;
	
	a = input;//a只能是input,output,append中的某一个
	b = sphere;
	c = 星期三;

	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;
	std::cout<<c<<std::endl;
	return 0;
}
