//Class12_typedef
//Demo29 如何使用typedef
#include<iostream>
#define MaxSize 50

typedef int 考试分数;
typedef int exam_score;

typedef double wages;
typedef wages salary;
typedef double 工资;
typedef 工资 薪资;

typedef int KeyType;
typedef double ValueType;
typedef struct{
	KeyType key;
	ValueType value;
}DataType;//复杂的类型定义了一个简单的名字

typedef struct{
	DataType data[MaxSize];
	int length;
}SqList;
int main()
{
	int a;
	考试分数 a;
	exam_score a;
	return 0;
}
