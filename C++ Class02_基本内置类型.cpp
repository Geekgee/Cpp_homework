//这是Geekgee的作业本
//学习视频：《【c++】 c++ primer 教程 猎豹网校》：https://www.bilibili.com/video/av16625546?from=search&seid=15382813425029884539
//参考书本：《C++ Primer》 王刚 杨巨峰译



//2018/7/23
//Class2_基本内置类型

/*Demo10 检测函数类型字节计算

void doA(void)//void函数没有返回值
{
}

int doB(int a）//int函数必须有返回值
{
	return 0;
}

#include<iostream>
#include"Dog.h"
//sizeof(short)<=sizeof(int)<=sizeof(long)<=sizeof(longlong)
int main()
{
	void *p;
	int a;
	Dog b;
	//以字节为单位
	std::cout<<"bool:\t\t"<<sizeof(bool)<<std::endl;//布尔型字节长度计算，-
	std::cout<<"char:\t\t"<<sizeof(char)<<std::endl;//字符型字节长度计算，1个字节，8位二进制储存空间
	std::cout<<"wchar_t:\t"<<sizeof(wchar_t)<<std::endl;//宽字符型字节长度计算，2个字节，16位二进制储存空间
	std::cout<<"short:\t\t"<<sizeof(short)<<std::endl;//短整型字节长度计算，16位二进制储存空间
	std::cout<<"int:\t\t"<<sizeof(int)<<std::endl;//整型字节长度计算，16位二进制储存空间
	std::cout<<"long:\t\t"<<sizeof(long)<<std::endl;//长整型字节长度计算，32位储存空间
	std::cout<<"long long:\t"<<sizeof(long long)<<std::endl;
	std::cout<<"float:\t\t"<<sizeof(float)<<std::endl;//单精度浮点型字节长度计算，6位有效数字
	std::cout<<"double:\t\t"<<sizeof(double)<<std::endl;//双精度型字节长度计算，10位有效数字
	std::cout<<"long double:\t"<<sizeof(long double)<<std::endl;//扩展双精度型字节长度计算，,10位有效数字
	return 0;
}*/

/*Demo11 整形布尔型示例
#include<iostream>
int main()
{
	char c,d;
	c = 'q';//113,01110001(二进制)
	d = 'A';//65,01000001(二进制)
	wchar_t c2;
	c2 = '中';
	printf("%d\n",c2);//输入的字符变成二进制

	bool a;
	bool b;
	a = 100;//非0代表true
	b = 0;//0代表false
	std::cout<<"布尔："<<a<<std::endl;
	std::cout<<"布尔："<<b<<std::endl;
	return 0;
}
*/
