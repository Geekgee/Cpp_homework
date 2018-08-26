//20180823
//Class7_定义对象
//Demo24 初始化
#include<iostream>
#include<string>

class Sales_item
{
	//构造函数
};

int a;//写在外头的系统会帮我们默认赋值为0
std::string s;//相当于赋值为std::string s = "";空字符串，默认构造函数

double apply_discount(double price, double discount)
{
	//计算实际销售价格
	return price * (1 - discount);
}


int main()
{
	double price = 109.99, discount = 0.16;
	double sales_price = apply_discount(price,discount);//给返回值赋值

	int units_sold;//变量中都没有数据，没有初始化
	double sales_price2 = 999.99, avg_price;
	std::string title;
	Sales_item curr_book;//会调用默认的构造函数初始化
	std::cout << sales_price << std::endl;
	std::cout <<sales_price2 << std::endl;

	double salary = 999.99, wage(salary+0.01);
	int day = 7, month, year;//可以有的初始化有的没初始化

	int ival(1024);
	int ival2 = 1024;
	std::cout << ival << std::endl;
	std::cout << ival2 << std::endl;

	std::string titleA = "C++ Primer, 4th Ed";
	std::string titleB ("C++ Primer, 4th Ed");

	std::string all_nines(10,'9');
	std::cout << all_nines << std::endl;
	return 0;
}
