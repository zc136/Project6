#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
int main()
{
	int a = 0x11223344;
	//int* p = &a;
	//*p = 0;
	char* p = &a;
	*p = 0;

	return 0;
}