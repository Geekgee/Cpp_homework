//这是Geekgee的作业本
//学习视频：《【c++】 c++ primer 教程 猎豹网校》：https://www.bilibili.com/video/av16625546?from=search&seid=15382813425029884539
//参考书本：《C++ Primer》 王刚 杨巨峰译



//2018/7/24
//Class3_习题解答2-3

//2.3如果在某机器上short占16位，那么可以赋给short类型的最大数是什么？Unsigned short类型的最大数又是什么？

//Demo13
///*十进制数：2位无符号，最大数是99，10^2-1
//            3位无符号，最大数是999,10^3-1
///*Unsigned short类型是无符号的，16位二进制，最大数是2^16-1=65535
///*Short类型是有符号的，16位二进制，有符号的数复杂，最小数-2^15，最大数2^15-1
//

#include<iostream>
int main()
{
	short a;
	unsigned short b;

	char c1;
	unsigned char c2;
	signed char c3;

	unsigned short s1;
	signed short s2;
	short s3;

	int i1;
	signed int i2;
	unsigned int i3;

	long long lng1;
	unsigned long long lng2;
	signed long long lng3;
	
	
	
	std::cout<<"short的类型是："<<sizeof(a) * 8<<"位"<<std::endl;//short类型是16位
	a = 32767;
	std::cout<<"short的最大数是："<<a<<std::endl;
	a++;
	std::cout<<a<<std::endl;//-32768

	std::cout<<"unsigned short的类型是："<<sizeof(b) * 8<<"位"<<std::endl;
	b = 65535;
	std::cout<<"unsigned short的最大数是："<<b<<std::endl;
	b++;
	std::cout<<"unsigned short的最大数+1是："<<b<<std::endl;//溢出

	std::cout<<"给unsigned short赋值100000"<<std::endl;
	b = 100000;
	std::cout<<"结果应该是34464:"<<b<<std::endl;
    return 0;
}
