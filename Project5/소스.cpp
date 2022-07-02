//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//
//	while (num < 5)
//	{
//		printf("Hello world! %d \n", num);
//		num++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 0, num = 1;
//	printf("몇 단? ");
//	scanf_s("%d", &dan);
//
//	while (num < 10)
//	{
//		printf("%d*%d=%d \n", dan, num, dan * num);
//		num++;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int num=0;
//	int i = 0;
//
//	printf("양의 정수 입력 :");
//	scanf_s("%d", &num);
//
//	while (i < num)
//	{
//		printf("Hello world! \n");
//		i++;
//	}
//	return 0;
//}

#include <stdio.h>
#define NUM 3
int main(void)
{
	int num=0;
	int the=0;

	printf(":배수 개수 입력 ");
	scanf_s("%d", &num);

	while (the++<num)

		printf("%d", NUM * the);
	
	return 0;
}