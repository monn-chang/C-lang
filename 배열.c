#include<stdio.h>

int main() {
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("Array 3 ��° ���� : %d \n", arr[2]);*/

	//�迭 ���
	/*int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("�迭�� %d ��° ���� : %d \n", i + 1, arr[i]);
	}*/

	//��� ���ϱ�
	/*int arr[5];
	int i, ave = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d ��° �л��� ������?", i + 1);
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		ave = ave + arr[i];
	}
	ave = ave / 5;
	printf("��ü �л��� ��� : %d \n", ave);

	for (i = 0; i < 5; i++)
	{
		printf("�л� %d :", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}*/

	/*int guess = 5;
	int prime[1000];
	int index = 1;
	int i;
	int ok;

	prime[0] = 2;
	prime[1] = 3;
	for (;;)
	{
		ok = 0;
		for (i = 0; i <= index; i++)
		{
			if (guess % prime[i] != 0)
			{
				ok++;
			}
			else
			{
				break;
			}
		}
		if (ok == (index + 1))
		{
			index++;
			prime[index] = guess;
			printf("�Ҽ� : %d \n", prime[index]);
			
			if (index == 999)
				
				break;
			
		}
		guess += 2;
		
	}
	printf("�Ҽ��� ������ %d", ok);*/
	//2���� �迭
	/*int arr[3][3] =	{ 1,2,3,4,5,6,7,8,9 };

	printf("arr �迭�� 2 �� 3���� ���� ��� : %d \n", arr[1][2]);
	printf("arr �迭�� 1 �� 2���� ���� ��� : %d \n", arr[0][1]);*/

	//2���� �迭�� �̿��� �л��� ������ �ޱ�
	//int score[3][2];
	//int i, j;
	//for (i = 0; i < 3; i++) // �� 3 ���� �л��� �����͸� �޴´�.
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		if (j == 0) {
	//			printf("%d ��° �л��� ���� ���� : ", i + 1);
	//			scanf_s("%d", &score[i][j]);
	//		}
	//		else if (j == 1) {
	//			printf("%d ��° �л��� ���� ���� : ", i + 1);
	//			scanf_s("%d", &score[i][j]);
	//		}

	//	}

	//}
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ��° �л��� ���� ���� : %d, ���� ���� : %d \n", i + 1, score[i][0], score[i][1]);
	//}
	return 0;
}