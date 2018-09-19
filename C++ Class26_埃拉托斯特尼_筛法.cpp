//20180918
//Class26_埃拉托斯特尼_筛法
//Demo61
#include<iostream>
#include<bitset>

using namespace std;
int main()
{
	int const max_number(100);
	bitset<max_number + 1>numbers;//101个0！
	numbers.set();//101个1！
	//numbers[0]不理他！
	numbers[1] = 0;
	for(int i(1); i != 100; ++i)
	{
		if(numbers[i])
		{
			
		}
	}

	return 0;
}
