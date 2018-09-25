//20180924
//Class29_指针2
//Demo65 指针循环输出
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int ia[] = {0,2,4,6,8};
	int *ip = ia;

	cout << *ia << endl;//指向数组的第一个元素
	cout << *ip << endl;

	ip = &ia[0];//取ia的下标4，第五个元素，放到ip里
	ip = ia;
	cout << *ip << endl;

	//ip = &ia[4];
	ip = ia;
	int *ip2 = ip + 4; 
	cout << *ip2 << endl;

	ptrdiff_t n = ip2 - ip;//间距4相减0
	cout << n << endl;

	int last = *(ia+4);
	cout << last << endl;

	int *p = &ia[2];
	cout << last << endl;

	int j = p[1];//p=&ia[2],p[1]=p+1;p=&ia[3];
	cout << j << endl;

	int k = p[-2];//p=&ia[0];
	cout << k << endl;

	const size_t arr_size = 5;//定义数组个数
	int arr[arr_size] = {1,2,3,4,5};
	int *p2 = arr;//指向指针第一个元素
	int *p3 = p2 + arr_size;//超出末端的指针
	cout << "循环：" << endl;
	for (int *ptr = p2; ptr != p3; ++ptr)
	cout << *ptr << endl;

	//简化写法：
	cout << "循环：" << endl;
	const size_t arr_sz = 5;
	int int_arr[arr_sz] = {0,1,2,3,4};
	for(int *pbegin = int_arr, *pend = int_arr + arr_sz;//定义指向第一个和超出末端最后一个
		pbegin != pend;
		++pbegin)
    cout << *pbegin << endl;

	//向量：
	vector<int>ivec;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(30);
	ivec.push_back(40);
	ivec.push_back(50);

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end();
		++ iter)
    cout << *iter << endl;
	return 0;
}
