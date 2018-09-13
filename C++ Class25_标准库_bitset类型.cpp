//20180912
//Class25_标准库_bitset类型
//Demo56
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
	return 0;
}
