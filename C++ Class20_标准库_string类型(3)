//Class20_标准库_string类型(3)
/*Demo40 从string对象获得字符
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//string类型不是C语言中字符数组
	string str("hello");
	
	cout << str[0] << endl;
	cout << str[4] << endl;

	//             代替int
	for (string::size_type x = 0; x !=  str.size(); ++x)
	{
		cout << str[x] << ' ';
	}
	cout << endl;

	//下标操作用作左值
	for (string::size_type i = 2; i != str.size(); ++i)
	{
		str[i] = '*';//he***	
	}

	cout << str <<endl;
	return 0;
}


//Demo41 标点符号计数
#include<iostream>
#include<string>
//#include<ctype.h>
#include<cctype>

using namespace std;

int main()
{
	string s("Hello, World!!!");
	string::size_type punct_cnt = 0;//计数器：标点符号个数
	for(string::size_type index=0; index != s.size(); ++index)
	{
		if(ispunct(s[index]))
			++punct_cnt;
	}

	//C语言标准库函数
	//isalnum(c)，检查字符是不是字母或数字
	//isalpha(c)，检查是不是字母
	//iscntrl(c)，检查是不是控制字符
	//isdigit(c)，检查是不是数字
	//islower(c)，检查是不是小写字母
	//isupper(c)，检查是不是大写字母
	//ispunct(c)，检查是不是标点符号
	//isspace(c)，检查是不是空格
	//isxdigit(c)，检查是不是十六进制数
	//tolower(c)，把每个字符变成小写
	//toupper(c)，把每个字符变成大写

	cout << "这个字符串里有" << punct_cnt << "个标点符号." <<endl;

	for(string::size_type index = 0; index != s.size(); ++index)
		s[index] = tolower(s[index]);
	cout << s << endl;
    return 0; 
}
*/

//Demo41 习题3.10
//去掉标点符号
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s, result_str;
	char ch;
	bool has_punct = false;
    cout << "Enter a string: " << endl;
	//不能用cin >> s;
	getline(cin,s);
	for(string::size_type index = 0; index != s.size() ;++index)
	{
		ch = s[index];
		if(ispunct(ch))
			has_punct = true;
		else
			result_str += ch;
	}
	if(has_punct)
		cout << "结果：" << endl << result_str <<endl;
	else
		cout << "在输入字符串中没有发现标点符号。" <<endl;
	return 0;
} 
