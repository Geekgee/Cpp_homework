//20180829
//Class17_标准库_string类型(1)
/*Demo33
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	//char name[10] = "张飞";//C语音的做法
	//string name2("刘备");//C++的做法
	//cout << name << endl;
	//cout << name2 << endl;

	//4种初始化方法;
	string s1;//没写小括号，调用string的默认的构造函数
	string s2("Hello");//小括号就是调用string对象的构造函数
	string s3(s2);
	string s4(10,'a');

	string s5 = "hello";//这是不好的方法

	cout << "第1种：" << s1 << endl;
	cout << "第2种：" << s2 << endl;
	cout << "第3种：" << s3 << endl;
	cout << "第4种：" << s4 << endl;
	return 0;
}
*/

/*Demo34 把一行字符串分开读进来
#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s1,s2;

	cout << "请输入你的姓名：" << endl;
	cin >> s1 >> s2;//1、读取并忽略开头所有空白字符；2、再次遇到空白字符，读取终止
	cout << s1 << ' ' << s2 << endl;
	return 0;
}


//Demo35 把一行字符串完整读进来
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	cout << "请输入你的姓名：" << endl;
	//cin >> name;一次读一个单词
	getline(cin,name);//一次读一行
	cout << name << endl;
	return 0;
}
*/
