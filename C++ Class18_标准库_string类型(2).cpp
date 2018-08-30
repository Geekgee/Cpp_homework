//20180830
//Class18_标准库_string类型(2)
/*Demo36 判断字符串大小
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string st("hello");
	cout << "字符串的大小(字符的个数）：" << st.size() << endl;

	//int size = st.size();
	string::size_type size = st.size();
	cout << size << endl;

	//判断字符串是否为0
	string s;
	if(s.size() == 0)
	{
		cout << "这是一个空字符串\n" << endl;
	}

	if(s.empty())
	{
		cout << "这是一个空字符串\n" << endl;
	}
	return 0;
}
*/

/*Demo36 字符串的比较
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int x = 12, y = 9;
	if(x > y)
	{

	}

	string a("张飞");//字符串也是可以比较大小的
	string b("刘备");

	if ( a == b )
	{
      cout << "张飞和刘备相等！" << endl;
	}else{
	      if ( a > b )
	      {
	        cout << "张飞比刘备大！" << endl;
          }else{
    		cout << "张飞比刘备小！" << endl;
	             }
	      }

	string big = "big", small = "small";
	string s1 = big;
	if( big == small )//比较两个字符串要写两个等号
	{
      cout << "big和small相等！" << endl;
	}else{
	  cout << "big和small不相等！" << endl;
	}

	if(big <= s1)
	{
      cout << "big小于等于s1" << endl;
	}
	return 0;
}
*/

//Demo37 两个字符串相加
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("hello,");
	string s2("word");
	string s3 = s1 + s2;//加号相当于做字符串连接
	cout << s3 <<endl;

	s1 += s2;
	cout << s1 <<endl;

	//string s4 = "hello" + ",";//在其他语言合法，在C++不合法
	string s5 = s1 + "," + s2;//必须有一个是字面值
	cout << s5 <<endl;
	//string s6 = "hello" + "," +s2;//错误
	return 0;
}
