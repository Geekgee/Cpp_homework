//20180903
//Class21_标准库_vector类型
/*Demo48 vector库保存提取数据
#include<iostream>
#include<vector>
#include<string>
#include"Dog.h"
#include"Sales_item.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	vector<int>ivec;//保存int类型数据的一个vector
	vector<int>dvec;
	vector<string>svec;
	vector<Dog>dogvec;//保存Dog类型数据的一个vector
	vector<Sales_item>Sales_vec;//保存Sales_item类型数据的一个vector

	vector<int>a;//a是一个空的容器
	vector<int>b(10,2);//b是一个容器，里面有10个2

	a.push_back(1);//push_back是往向量的后面放
	a.push_back(2);
	a.push_back(3);

	b.push_back(10);
	b.push_back(11);

	cout << a.size() << endl;
	cout << b.size() << endl;

	//不要用int类型的循环变量
	//for(int
	for(vector<int>::size_type i = 0;i != a.size();++i)//输出放进去a[i]的数
		 cout << a[i] << endl;
	for(vector<int>::size_type ix = 0;ix != b.size();++ix)//输出放进去b[i]的数
         cout << b[ix] << endl;

	return 0;
}
*/

/*Demo49 vector库保存提取数据
#include<iostream>
#include<vector>//vector是一个动态数组，里面可以保存大量数据
#include<string>

using namespace std;

int main()
{
	vector<int>v1;
	v1.push_back(10);//给v1中输入值10
	v1.push_back(11);
	v1.push_back(12);

	vector<int>v2(v1);//在v2中已经有了v1中的三个数
	//vector<string>v3(v1);//因为v3和v1类型不同错误
	vector<int>v4(10,-1);
	vector<int>v5(10);//10个0
	vector<string>v6(10,"hi!");
	vector<string>v7(10);//10个空字符串

	cout << v1[0] << endl;//显示向量里第一个元素
	cout << v2[0] << endl;
	cout << v4[0] << endl;
	cout << v5[0] << endl;
	cout << v6[0] << endl;
	cout << v7[0] << endl;

	v1[0] = 100;//把v1的第一个数输成100
	cout << v1[0] <<endl;
	v7[0] = "Hello!";
	cout << v7[0] << endl;
	return 0;
}
*/

//Demo50 vector库输入输出数据
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int a[100];//数组a里可以保存100个数
	vector<int>ivec;//ivec是空的，里面一个数都没有
	cout << ivec.size() <<endl;

	cout << "请输入5个整数：" << endl;
	int k;

	for(vector<int>::size_type ix = 0; ix != 5; ++ix)
	{
		cin >> k;
		ivec.push_back(k);
	}
	
	cout << "显示vector里的数据：" << endl;
	for(vector<int>::size_type m = 0; m != 5; ++m)
		cout << ivec[m] <<endl;

	cout << "下面请输入一些字符串：" << endl;
	string word;
	vector<string>text;
	while(cin >> word)//每次输入字符串放到word变量里
		text.push_back(word);

	cout << "你输入的字符串是：" << endl;
	for(vector<int>::size_type i = 0; i != text.size(); ++i)//字符串类型for循环
		cout << text[i] << endl;


	return 0;
}
