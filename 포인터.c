#include<stdio.h>

int main() {
	//&������	&(�ּҰ��� ����� ������)
	/*int* p;
	int a;
	p = &a;
	printf("%p", p);*/

	/*int a;
	a = 2;

	printf("%p", &a);*/

	/*int* p;
	int a;

	p = &a;

	printf("������ p�� ��� �ִ� �� : %x \n", p);
	printf("int ���� a �� ����� �ּ� : %x \n", &a);
	printf("int ���� a �� ����� �ּ� : %x \n", &a+1);*/

	//*�������� �̿�
	//int* p;
	//int a;

	//p = &a;
	//a = 2;

	//printf("a �� �� : %d \n", a);
	//printf("*p �� �� : %d \n", *p);
	//printf("*p �� �� : %p \n", *p);
	//printf("*p �� �� : %d \n", p);
	//printf("*p �� �� : %p \n", p);

	//*������ (���� ������ ����� �ּҰ��� ��ġ�� ������)
	//int* p;
	//int a;

	//p = &a;
	//*p = 3;

	//printf("a �� �� : %d \n", a);
	//printf("*p �� ��  : %d \n", *p);

	//int p;
	//int a;

	//p = &a;
	//a = 3;

	//printf("*p �� ��? : %d \n", *p); //���� ������ �߸��Ǿ� �ִ�.
	//printf("*p �� ��? : %d \n", p); //�̷��� �ؾ��Ѵ�~~

	//�����͵� �����̴�.
	/*int a, b;
	int* p;

	p = &a;
	*p = 2;
	p = &b;
	*p = 4;
	�����͵� ���� �̴� ��, ���̆��� �� �ּҰ��� �ٲ� �� �ִٴ� ���̴�.
	a -> b�� �ּҰ��� �ٲ� �� �ִ�.

	printf("a : %d \n", a);
	printf("b : %d \n", b);*/

	//��� ������

	//int a, b;
	//const int* pa = &a;

	////*pa = 3; //�ùٸ��� ���� ����
	//pa = &b; //�ùٸ� ����

	//int* const pa = &a;
	//*pa = 3;  // �ùٸ� ����
	//pa = &b; //�ùٸ��� ���� ����

	//const int* const pa = &a;

	//*pa = 3; // �Ѵ� �ùٸ��� �ʴ�.
	//pa = &b;

	//�������� ����

	//int a;
	//int* pa;
	//pa = &a;

	//printf("pa�� �� : %d \n", pa); //int�� 4��Ʈ �̹Ƿ� ������
	//printf("(pa + 1) �� �� : %d \n", pa + 1);

	//int a;
	//char b;
	//double c;
	//int* pa = &a;
	//char* pb = &b;
	//double* pc = &c;

	//printf("pa �� �� : %d \n", pa); // int�� 4��Ʈ
	//printf("(pa + 1) �� �� : %d \n", pa + 1);
	//printf("pb �� �� : %d \n", pb); // char�� 1��Ʈ
	//printf("(pb + 1) �� �� : %d \n", pb + 1);
	//printf("pc �� �� : %d \n", pc); // double�� 8��Ʈ
	//printf("(pc + 1) �� �� : %d \n", pc + 1);

	//������ ����
	//int a;
	//int* pa = &a;
	//printf("pa �� �� : %d \n", pa);
	//printf("(pa - 1) �� �� : %d \n", pa - 1);

	//�������� ����
	/*int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa �� ����Ű�� �ִ� �� : %d \n", *pa);
	printf("pb �� ����Ű�� �ִ� �� : %d \n", *pb);*/
	//�迭
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] �� �ּҰ� : %d \n", i + 1, &arr[i]);
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] �� �ּҰ� ; %x ", i, &arr[i]);
		printf("(parr + %d) �� �� : %x ", i, (parr + i));
		if (&arr[i] == (parr + i))
		{
			printf("--> ��ġ \n");
		}
		else
		{
			printf("--> ����ġ \n");
		}
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (;;)
	{
		printf("���� �Է��Ͻÿ�");
		scanf_s("%d", &i);
		printf("arr[i] = %d, *(parr + i) = %d \n", arr[i], *(parr + i));
		if (i == 10)
			break;
	}*/

	//1���� �迭 ����Ű��
	/*int arr[3] = { 1,2,3 };
	int* parr;
	parr = arr;

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);*/

	//int arr[10] = { 100, 98, 97, 95, 89, 76, 92, 96, 100, 99 };

	//int* parr = arr;
	//int sum = 0;

	//while (parr - arr <= 9) {
	//	sum += (*parr);
	//	parr++;
	//}

	//printf("�� ���� ���� ��� : %d \n", sum / 10);

	/*int a;
	int* pa;
	int** ppa;

	pa = &a;
	ppa = &pa;

	a = 3;

	printf("a : %d // *pa : %d // **pa : %d \n", a, *pa, **ppa);
	printf("a : %d // pa : %d // *ppa : %d \n", &a, pa, *ppa);
	printf("&pa : %d // ppa : %d \n	", &pa, ppa);*/

	//2���� �迭�� []������
	/*int arr[2][3];*/

	//printf("arr[0] : %x \n", arr[0]);
	//printf("&arr[0][0] : %x \n", &arr[0][0]);

	//printf("arr[1] : %x \n", arr[1]);
	//printf("&arr[1][0] : %x \n", &arr[1][0]);

	/*printf("arr[0] : %x \n", &arr[0]);
	printf("arr : %x \n", arr);*/

	//1����
	/*int arr[2][3] = { {1,2,3,},{4,5,6,} };

	printf("arr : %x, arr + 1 : %x \n", arr, arr + 1);
	*/

	//�迭�� ������
	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int(*parr)[3];

	//parr = arr;

	//printf("parr[1][2] : %d, arr[1][2] : %d \n", parr[1][2], arr[1][2]);

	//�迭 ������ ����
	//int arr[2][3] = { {1,2,3} , {4,5,6}};
	//int brr[10][3];
	//int crr[2][5];

	//int(*parr)[3];

	//parr = arr;
	//parr = brr;
	//parr = crr; //���� ���� ������ �ȸ���

	//printf("%d, %d ", arr[1][2], parr[1][2] 
	
	//������ �迭
	//int* arr[3];
	//int a = 1, b = 2, c = 3;

	//arr[0] = &a;
	//arr[1] = &b;
	//arr[2] = &c;

	//printf("a : %d, *arr[0] : %d &a : %p \n", a, *arr[0], &a);
	//printf("b : %d, *arr[1] : %d &b : %p \n", b, *arr[1], &b);
	//printf("b : %d, *arr[2] : %d &c : %p \n", c, *arr[2], &c);

	//printf("&a : %p, *arr[0] : %d \n", &a, arr[0]);
    int* p = (int*)malloc(sizeof(int));
	*p = 9;
	printf("&a :p, *arr[0] : %p \n", p);
	printf("&a : p, *arr[0] : %d \n", *p);
	printf("&a : p, *arr[0] : %p \n", &p);

	return 0;
}