#include<stdio.h>

int main() {
	//for��
	//int i;
	//for (i = 0; i < 20; i++) //(�ʱ��;���ǽ�;������)
	//{
	//	printf("���� : %d \n", i);
	//}

	//1���� 19������ ��
	/*int i, sum = 0;
	for (i = 0; i < 20; ++i)
	{
		sum = sum + i;
	}
	printf("1���� 19������ �� : %d", sum);*/

	//1���� 10000���� ���ϱ�
	//int i, sum = 0;
	//for(i=0;i<=10000;++i)
	//{
	//	sum = sum + i;
	//}
	//printf("1���� 10000 ������ �� : %d \n", sum);

	//for�� ����
	//int i;
	//int subject, score;
	//double sum_score = 0;

	//printf("�� ���� ���� ������ �Է� ���� ���ΰ���?");
	//scanf_s("%d", &subject);

	//printf("\n�� ������ ������ �Է��� �ּ��� \n");
	//for (i = 1; i <= subject; i++)
	//{
	//	printf("���� %d :", i);
	//	scanf_s("%d", &score);
	//	sum_score = sum_score + score;
	//}
	//printf("��ü ������ ����� : %.2f \n", sum_score / subject);

	//break��
	/*int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");

	for (;;)
	{
		scanf_s("%d", &usranswer);
		if (usranswer == 3)
		{
			printf("���߼̱���! \n");
			break;
		}
		else
		{
			printf("Ʋ�Ⱦ��! \n");
		}
	}*/

	//continue��
	//int i, a = 0;
	//int b = 0;
	//for (i = 0; i < 101; i++)
	//{
	//	if (i % 5 == 0)
	//	{
	//		a++;
	//		continue;
	//	}		
	//	printf("%d ", i);
	//}
	//printf("\n5�� ����� %d�� �Դϴ�.\n", a);

	//������
	//int i=0, j, k;

	/*for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}*/
	/*for (;;) {		
		for (k = 0; k < 30; k++)
		{
			printf("*");
		}
		printf("\n������ �ܼ��� �Է��ϼ���:");
		scanf_s("%d", &i);
		if (i == 100) {
			printf("���̿���~~");
			break;
		}
		for (j = 1; j < i+1; j++)
		{
			printf("%d x %d = %d  \t\tl \n", i, j, i * j);
		}
		
	}*/

	/*int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%d ", j);
		}
	}
	*/
	//while��

	/*int i = 1, sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}

	printf("1 ���� 100������ �� : %d \n", sum);
		 */
	/*int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 1);

	printf("sum : %d \n", sum);*/
	

	return 0;
}