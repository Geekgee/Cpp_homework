//Class9_名字的作用域
/*Demo25 
#include<iostream>
#include<string>
std::string s1 = "hello";//全局作用域
int a = 0;

void test()
{
	int a = 1;//变量隐藏/变量屏蔽,把全局作用域的a屏蔽了
	std::cout<< a <<std::endl;
	std::cout<< s1 <<std::endl;
}

int main()
{
	std::string s2 = "world";//局部作用域
	int sum = 0;
	int val = 1;

	int a = 2;
	std::cout<< a <<std::endl;

	for(int val = 1; val <= 10 ; ++val);
	{
		sum += val;//语句作用域
	}
	//std::cout<< val <<std::endl;//val不能在这作用
	std::cout<< sum <<std::endl;//sum可以在这作用
	std::cout<< s1 <<std::endl;
	std::cout<< s2 <<std::endl;
	return 0;
}
*/

/*Demo26 T-2-_19 哪个i作用
#include<iostream>

int i = 42;

int main()
{
	int i = 100;//这个i作用
	int j = i;
	std::cout << j <<std::endl;
	return 0;
}
*/

//Demo26 T-2_20 哪个i作用
#include<iostream>
int main()
{
	int i = 100, sum = 0;//这个i作用
	for(int i = 0; i != 10; i++)
	{
		sum += i;
	}
	std::cout << i <<std::endl;
}
