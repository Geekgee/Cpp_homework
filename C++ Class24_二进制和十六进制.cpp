//20180907
//Class24_二进制和十六进制
/*Demo55 二进制和十六进制转化
十六进制     二进制
   0          0000
   1          0001
   2          0010
   3          0011
   4          0100
   5          0101
   6          0110
   7          0111
   8          1000
   9          1001
   A          1010
   B          1011
   C          1100
   D          1101
   E          1110
   F          1111

   1011 0001 1101 0111
    B    1    D    7    -----> B1D7H//H = 16进制
	                           b1d7
							   0xb1d7//0x = 16进制
	1字节 = 8位二进制
*/

#include<stdio.h>
int main()
{
	int a,b;
	a = 12;//这是十进制
	printf("%d\n",a);

	b = 0x1f;//这是十六进制
	printf("%d\n",b);
	return 0;
}
