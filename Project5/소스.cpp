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
//	printf("�� ��? ");
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
//	printf("���� ���� �Է� :");
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

	printf(":��� ���� �Է� ");
	scanf_s("%d", &num);

	while (the++<num)

		printf("%d", NUM * the);
	
	return 0;
}