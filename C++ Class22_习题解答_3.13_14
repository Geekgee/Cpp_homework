//20180906
//Class22_习题解答_3.13_14
//Demo51 习题3.13
/*
//读一组整数到vector对象里，计算并输出每对相邻元素的和。
//如果读入个数为奇数，则提示用户，最后一个元素没有配对，并输出其值。
//然后修改程序，头尾元素两两配对，并计算每对元素的和，输出。

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int ival;//用来保存读入的每个整数
	vector<int>ivec;//用来保存所有的整数

	cout << "Enter numbers(Ctrl + Z to end)" << endl;
	while(cin >> ival)
		ivec.push_back(ival);

	//计算相邻的两个数之和
	if(ivec.empty())//如果ivec是空的
	{
	   cout << "No element?!" << endl;
	   return -1;//-1表示有问题结束
    }
	   cout <<"Sum of each pair of adjancent element in the vector:" <<endl;

	   for(vector<int>::size_type ix =0; ix < ivec.size()-1; ix = ix + 2)//注意+2，-1
	   {
		   cout << ivec[ix] +ivec [ix+1] << endl;
	   }

	   if(ivec.size() % 2 != 0)
		   cout << endl << "The last element is not been summed and its value is "
		   << ivec[ivec.size()-1] << endl;//向量的数据0开始做下标的，最后一个size()-1；

	return 0;//0表示没问题结束
}

//Demo52 习题3.13（2）头尾相加
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int ival;//用来保存读入的每个整数
	vector<int>ivec;//用来保存所有的整数

	cout << "Enter numbers(Ctrl + Z to end)" << endl;
	while(cin >> ival)
		ivec.push_back(ival);

	//计算相邻的两个数之和
	if(ivec.empty())//如果ivec是空的
	{
	   cout << "No element?!" << endl;
	   return -1;//-1表示有问题结束
    }

	cout << "Sum of each pair of couterpart element in the vector:"<< endl;
	vector<int>::size_type cnt = 0;
	vector<int>::size_type first, last;
	for(first = 0, last = ivec.size()-1; first < last; ++first, --last)//牛逼
	{
		cout << ivec[first] + ivec[last] << '\t';
		++cnt;
		if(cnt %6 == 0)//每行6个取模运算
			cout << endl;
	}

	if(first == last)
		cout << endl
		     << "The center element is not been summed "
			 << "and its value is "
			 << ivec[first] << endl;
	return 0;
}
*/

//Demo53 习题3.14
//读入一段文本到vector对象，每个单词转化为大写字母
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string str;
	vector<string>svec;

	cout << "Enter text(Ctrl+Z to end):" << endl;
	while(cin >> str)
		svec.push_back(str);//把每一个字符放到vector里
	if(svec.size() == 0)
	{
		cout << "No string?!" << endl;
		return -1;
	}

	cout << "Transformed elements from the vector: " 
		 << endl;
	for(vector<string>::size_type ix = 0;ix != svec.size(); ++ix)
	{
		for(string::size_type index = 0;index != svec[ix].size();++index)
			if(islower(svec[ix][index]))//第一个下标是vector，第二个下标是每个字母的下标
				svec[ix][index] = toupper(svec[ix][index]);

		cout << svec[ix] << " ";
		if((ix+1) % 8 == 0)//每行8个单词，注意+1
			cout << endl;
	}
	return 0;
}
