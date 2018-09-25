//20180923
//Class27_数组
/*Demo62 数组的初始化
#include<iostream>
#include<string>
using namespace std;

unsigned get_size()
{
	int a = 100;
	int b = 200;
	return a+b;
}
int main()
{
	int a[100];
	const unsigned buf_size = 512, max_files = 20;
	int staff_size = 27;

	const unsigned sz = get_size();

	char input_buffer[buf_size];
	string fileTable[max_files + 1];

	//double salaries[staff_size];//这是变量，不能用来说明数组
	//int test_scores[get_size()];
	//int vals[sz];编译的时候没有值，不行

	const unsigned array_size = 7;
	int ia[array_size] = {12,9,37};
	//int ib[3] = {1,2,3,4,5};定义3个初始化了5个
	int ic[5] = {1,2,3};
	cout << ia[0] << ", " << ia[1] << ", " << ia[2] <<endl;
	
	string str_arr[5] = {"hi","bye"};
	char ca1[] = {'C','+','+'};
	char ca2[] = {'C','+','+','\0'};//只要是字符串必须要有\0
	char ca3[] = "C++";//有个看不见的\0
	cout << "OK" << endl;
	return 0;
}
*/
