//20180831
//Class19_习题解答_3-0708
/*Demo38 习题3.7
//编一个程序读入2个string对象，测试它们是否相等，若不相等，则指出两个中哪个较大。接着改写程序，测试它们程度是否相等。若不相等，则指出长度哪个较长。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	cout <<  "Enter two strings:" << endl;
	cin >> s1 >> s2;

	if ( s1 == s2 )//是否一样
		cout << "They are qual." << endl;
	else if ( s1 > s2 ) 
		cout << "\"" << s1 << "\" is bigger than " << "\"" << s2 << "\"" << endl;
	else
		cout << "\"" << s2 << "\" is bigger than " << "\"" << s1 << "\"" << endl;
	return 0;
}
*/

/*Demo38 习题3.7（2）
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "请输入两个string" << endl;
	cin >> s1 >> s2;
	
	//int len1, len2;
	string::size_type len1, len2;

	len1 = s1.size();//大小就是长度，就是字符的个数
	len2 = s2.size();

	if (len1 == len2)
		cout << "They have same length." << endl;
	else if (len1 > len2)
		cout << "\"" << len1 << "\" is longer than " << "\"" << len2 << "\"" << endl;
	else
		cout << "\"" << len2 << "\" is longer than " << "\"" << len1 << "\"" << endl;

	return 0;
}
*/

//Demo39 习题3.8
//编一个程序，从标准输入很多字符串，连接起来形成一个大字符串；改一下，字符之间加上空格
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, result_str;

	cout << "Enter strings(Ctrl+Z to end)" << endl;
	while(cin >> str)
	{
		if(result_str.empty())
		{
			result_str = str;}
		else{
		    result_str = result_str + " " + str;
		}
	}
	cout << "最终大字符串：" << endl << result_str << endl;

	return 0;
}
