//20180912
//Class25_标准库_bitset类型
/*Demo56 bitset标准库初始化
#include<iostream>
#include<bitset>
#include<string>

using namespace std;

int main()
{
	bitset<32>a;//a的大小是32位二进制，全部是0
	cout << a << endl;

	bitset<16>b(0xffff);
	cout << b << endl;

	bitset<32>c(0xffff);
	cout << c << endl;

	bitset<128>d(0xffff);
	cout << d << endl;

	bitset<32>e(156);
	cout << e << endl;

	string str("111111100000000001100101");
	bitset<32>f(str,5,4);//倒着数第五个，有四位初始化
	cout << f << endl;

	bitset<32>g(str,str.size()-4);//字符串最后4位初始化
	cout << g << endl;
	return 0;
}
*/

/*Demo57 bitset标准库a有几个1
#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main()
{

	bitset<32>a(156);//用156对a初始化
	cout << a << endl;

	bool is_set = a.any();//检查a中有没有任何一位是1
	if(is_set)
		cout << "a里至少有一个1！" << endl;
	bool is_not_set = a.none();
	if(is_not_set)
		cout << "a里一个1都没有！" << endl;
		 
	size_t bite_set = a.count(); 
	cout << "a里一共有" << bite_set << "个1！" << endl;

	cout << "a的大小：" << a.size() << endl;
	cout << "a里有" << a.size() - a.count() << "个0！" << endl;
	return 0;
}
*/

/*Demo58 用下标对每一位操作
#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	bitset<32>a;
	cout << a << endl;

	a[5] = 1;
	cout << a << endl;

	for(int index = 0; index != 32; index += 2)
		a.set(index) = 1;
		//a[index] = 1;
	cout << a << endl;

	a.set();//把每一位都变成1
	a.reset(5);//把第5位1变成0
	cout << a << endl;

	a.flip();//反转
	cout << a << endl;

	a.flip(9);//反转第8位
	cout << a << endl;

	a.reset();//把所有都变成0
	cout << a << endl;

	a.set(8);
	cout << a << endl;
	a.flip();
	cout << a << endl;

	unsigned long b = a.to_ulong();//把2进制转化为10进制
	cout << b << endl;

	return 0;
} 
*/

/*Demo59 bitset库几进制
#include<iostream>
#include<bitset>
#include<string>

using namespace std;
int main()
{
	bitset<4>fourBits;//四位二进制
	cout << fourBits << endl;

	bitset<5>fiveBits(string("10101"));//五位二进制，字符串初始化
	cout << fiveBits << endl;

	bitset<8>eightBits(255);//十进制初始化
	cout << eightBits << endl;

	return 0;
}
*/

//Demo60 位与或亦或操作
#include<iostream>
#include<bitset>

using namespace std;
int main()
{
	bitset<8>eightBits;
	cout << "Enter a 8-bit sequence" << endl;
	cin >> eightBits;
	cout << endl;

	cout << eightBits << endl;

	cout << "有" << eightBits.count() << "个1！！！"<< endl;
	cout << "有" << eightBits.size() - eightBits.count() << "个0！！！"<< endl;

	bitset<8>flipInput(eightBits);
	flipInput.flip();//翻转
	cout << flipInput << endl;

	bitset<8>eightMoreBits;
	cout << "Enter another 8 - bit sequence" << endl;
	cin >> eightMoreBits;
	cout << endl;

	cout << eightBits << endl;
	cout << eightMoreBits << endl;
	cout << (eightBits & eightMoreBits) << endl;//位与运算
	cout << endl;

	cout << eightBits << endl;
	cout << eightMoreBits << endl;
	cout << (eightBits | eightMoreBits) << endl;//位或运算
	cout << endl;

	cout << eightBits << endl;
	cout << eightMoreBits << endl;
	cout << (eightBits ^ eightMoreBits) << endl;//位异或运算
	cout << endl;
	return 0;
}
