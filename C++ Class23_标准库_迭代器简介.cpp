//Class23_标准库_迭代器简介
//Demo54 迭代器begin和end操作  
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v(10,8);
	//                           begin()操作返回一个迭代器
	//                           指向第一个元素
    vector<int>::iterator iter = v.begin();
	vector<int>::iterator end = v.end();
	while(iter != end)
	{//迭代器实际上是一个指针
	*iter = *iter * 2;//通过迭代器修改数据
	++iter;
	}

	iter = v.begin();
	iter = iter + 2;
	*iter = 10;
	
	//迭代器指向中间的数
	vector<int>::iterator mid = v.begin() + v.size()/2;
	*mid = 88;


	//for(vector<int>::size_type ix = 0; ix != v.size(); ++ix)
		//cout << v[ix] << endl;
	               //const_iterator常迭代器不能修改
	for(vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)//end指的是迭代器指向最后一个数的下一个
		cout << "迭代器: " << *i << endl;//不通过迭代器修改数据，只是读数据

	return 0;
}
