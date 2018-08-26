//Class11_引用
//Demo28 &和const引用
#include<iostream>
int main()
{
	/*int a = 1024;
	int &b = a;//b是a的别名，实际上是同一个变量
	a++;
	std::cout << a <<std::endl;
	std::cout << b <<std::endl;

	int ival = 1024;
	int refVal = ival;//定义一个引用必须马上初始化
	//int refVal2 = 3;//引用不可以引用直接量，必须是引用变量

	int i = 1, i2 = 2;
	int &r = i, &r2 = i2;//可以一行引用多个变量
	int i3 = 3, &r3 = i3;*/

	const int a = 1024;//常量
	const int &b = a;

	int p = 42;
	const int &r = 42;//可以把r引用为42
	const int &r2 = p + 42;

	double dval = 3.14;
	const int &r3 = dval;//const引用可以初始化为不同类型的对象，非const只能指向同类型的对象
	return 0;
}
