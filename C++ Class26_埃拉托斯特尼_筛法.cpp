//20180919
//Class26_埃拉托斯特尼_筛法
//Demo61 筛法改进
#include<iostream>
#include<bitset>

using namespace std;
int main()
{
	int const max_number(100);
	int const max_test((int)sqrt((double)max_number));//max_number-double, sqrt-int
	//所有小于n的质数至少有个小于根号n的因数

	bitset<max_number + 1>numbers;//101个0！
	numbers.set();//101个1！
	//numbers[0]不理他！
	numbers[1] = 0;
	for(int i(1); i != max_test; ++i)
	{
		if(numbers[i])
		{//筛掉倍数
			for(int j = (i*i); j < max_number + 1; j += i)//
			{
				numbers[j] = 0;
			}
		}
	}

	cout << "The number of primes less than "<< max_number + 1 << " is " << numbers.count() << ".\n\n";

	for(int i(1); i != max_number + 1; ++i)
	{
		if(numbers[i]) cout << i <<endl; 
	}
	return 0;
}
