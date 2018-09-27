//20180925
//Class30_指针和const限定符
//Demo67 const指针
#include<iostream>
#include<string>
using namespace std;
void doA(const int *p)
{

}
typedef string *pstring;
int main()
{
	string s ("Hello");
	pstring ps;
	ps = &s;
	//     string*
	const pstring cstr;//cstr和cstr2一样？和cstr3一样？
	const string * cstr2;
	string *const cstr3;
    cout << *ps << endl;

	double a = 1.2;
	double *p = &a;

	const double pi = 3.14;
	//p = &pi;//要想指向常对象必须使用常指针
	const double *cptr;
	cptr = &pi;//指向常对象的指针才可以指向常对象
	cptr = &a;

	int errNum = 0;
	int nNum = 9;
	int *const curErr = &errNum;

	const string s1;
	string const s2;

	return 0;
}
