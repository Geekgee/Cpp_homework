//Class28_指针1
//Demo63 指针初始化
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
	string s("hello world!");
	string *sp = &s;//把变量s地址放在sp里
	string* ps1, ps2;//ps1是指针，ps2不是指针，这是第二种写法

	cout << s << endl;
	cout << *sp << endl;

	vector<int>*pvec;
	int *ip1, *ip2;
	double dp, *dp2;

	int ival = 1024;
	int *pi = 0;//指针是0，表示不指向任何对象
	int *pi2 = &ival;
	int *pi3;//没有初始化 
	pi = pi2;
	pi2 = 0;

	int ival2;
	int zero = 0;
	const int c_ival = 0;

	int *pi4 = c_ival;//指针可以等于常量，不可以等于变量，可以等于地址
	int *pi5 = 0;
	int *pi6 = NULL;//null就是0

	double dval;
	double *pd = &dval;//指针只能指向同类型地址 
	double *pd2 = pd;

	//int *pi7 = pd;//出错
	//int *pi7 = &dval;//出错

	double obj = 3.14;
	int k;
	void *pv = &obj;//万能指针，可以指向任何一种类型对象，但不能操作对象
	pv = &k;

	int a = 1;
	int *pa = &a;
	a = a +2;
	*pa = *pa + 2;
	cout << a << endl;
	cout << *pa << endl;

	int b = 1024;

	return 0;
}


//Demo64 指针的引用
#include<iostream>

using namespace std;
int main()
{
	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;//指针在声明时候可以没有初始化

	int **ppi = &pi;
	cout <<"指针的指针："<< **ppi << endl;//指针的指针，ppi=）ival=）1024
	pi = pi2;
	pi2 = *ppi;

	int &ri = ival, &ri2 = ival2;//引用在声明时候必须初始化，不可以再改变
	cout << ival << ", " << *pi << ", " << ri << endl;
	cout << ival2 << ", " << *pi2 << ", " << ri2 << endl;
	return 0;
}
