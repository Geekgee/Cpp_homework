//Class16_命名空间的using声明
/*Demo31 using声明可以省略std::
#include<iostream>
#include<string>

using std::cin;//using声明可以省略std::
using std::cout;
using std::string;
using std::endl;

//using namespace std;
int main()
{
	//就像文件放到文件夹里，名称放到名称空间里
	//::是作用域操作符，前面是名称空间
	//   cout名称                     endl名称
	cout << "Hello,名称空间" << endl;
	string s;
	
	cout << "请输入一个字符串" << endl;
	cin >> s;
	cout << "你输入的是：" << s << endl;
}
*/

//Demo32 做个加法
#include<iostream>

using std::cin;//using声明可以省略std::
using std::cout;
using std::endl;

int main()
{
	cout << "Enter two numbers: " << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
	return 0;
}
//头文件中不能使用using声明
