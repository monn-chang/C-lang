#include<stdio.h>

//int print_hello() {
//	printf("Hello!! \n");
//	return 0;
//}



//int main() {
//	printf("�Լ��� �ҷ����� : \n");
//	print_hello();
//
//	printf("�� �θ���? \n");
//	print_hello();
//
//	return 0;
//}
//int return_func() {
//	printf("����ȴ�. \n");
//	return 0;
//	printf("���� �ȵȴ�. \n");
//}
//
//int main() {
//	return_func();
//	return 0;
//}

//��ȯ��
//int ret()
//{
//	return 1000;
//}
//
//int main() {
//	int a = ret();
//	printf("ret() �Լ��� ��ȯ�� : %d \n", a);
//	return 0;
//}

//int magicbox(int a)
//{
//	
//	a += 4;
//	return a;
//}
//int main() {
//	
//	int i = 0;
//	printf("���� ���ڿ� ������� �� : ");
//	scanf_s("%d", &i);
//	
//
//	
//	printf("���� ���ڸ� ������ : %d \n", magicbox(i));
//
//	return 0;
//}

//int slave(int master_money) {
//	master_money += 10000;
//	return master_money;
//}
//
//int main() {
//	int my_money = 100000;
//	printf("2009.12.12 ��� : $%d \n", slave(my_money));
//
//	return 0;
//}

//1���� n������ ���� ��
//int for_func(int a) {
//	int i;
//	int sum = 0;
//	for (i = 0; i < a + 1; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
//	int ch;
//	printf("1���� ���ϴ� �� ���ϱ�\n");
//	printf("���� �Է��Ͻÿ� : ");
//	scanf_s("%d", &ch);
//	
//	printf("1���� %d������ ���� : %d", ch, for_func(ch));
//
//	return 0;
//}

//int change_val(int i) {
//
//    i = 3;
//    return 0;
// }
//
//int main() {
//
//    int i = 0;
//
//    printf("ȣ�� ���� i�� �� : %d \n", i);
//    change_val(i);
//    printf("ȣ�� ���� i�� �� : %d \n", i);
//
//    return 0;
//}

//�����͸� Ȱ���� �Լ�
//int change_val(int* pi) {
//	printf("=====change_val �Լ� �ȿ���===== \n");
//	printf("pi �� �� : %d \n", pi);
//	printf("pi �� ����Ű�� ���� �� : %d \n", *pi);
//
//	*pi = 3;
//
//	printf("=====change_val �Լ� �� ~~===== \n");
//
//	return 0;
//
//}
//
//int main() {
//	int i = 0;
//
//	printf("i ������ �ּҰ� : %d \n", &i);
//	printf("ȣ�� ���� i �� �� : %d \n", i);
//	change_val(&i);
//	printf("ȣ�� ���� i �� �� : %d \n", i);
//
//	return 0;
//}

//int swap(int* a, int* b) {  //�Լ� ���ο����� a�� b �� ���� ��ȯ�ϴ� ���� �ƴ϶� a��b �� ����Ű�� �� ������ ���� ��ȯ
//	int temp = *a;
//
//	*a = *b;
//	*b = temp;
//
//	return 0;
//}
//
//int main() {
//	int i, j;
//	i = 3;
//	j = 5;
//
//	printf("SWAP ���� i : %d, j : %d \n", i, j);
//	
//	swap(&i, &j);
//
//	printf("SWAP ���� i : %d, j : %d \n", i, j);
//
//	return 0;
//}


////�Լ� ������ Ȱ���� ����
//int swap(int* a, int* b); // �Լ��� ����
//int main() {
//
//	int i, j;
//	i = 3;
//	j = 5;
//
//	printf("SWAP ���� i : %d, j : %d \n", i, j);
//	swap(&i, &j);
//	printf("SWAP ���� i : %d, j : %d \n", i, j);
//
//	return 0;
//
//}
//
//int swap(int* a, int* b) {
//	int temp = *a;
//
//	*a = *b;
//	*b = temp;
//
//	return 0;
//}

//�迭�� ���ڷ� �ޱ�

//int add_number(int* parr);
//int main() {
//
//	int arr[3];
//	int i;
//	//����ڷ� ���� 3���� ���Ҹ� �Է� �޴´�.
//	for (i = 0; i < 3; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	add_number(arr);
//
//	printf("�迭�� �� ���� : %d, %d, %d", arr[0], arr[1], arr[2]);
//	return 0;
//}
//
//int add_number(int* parr) {
//	int i;
//	for (i = 0; i < 3; i++) {
//		parr[i]++;
//	}
//	return 0;
//}

//�Է� ���� �迭�� 10���� ���ҵ� �� �ִ밪�� ���

//int max_number(int* parr);
//int main() {
//	int arr[10];
//	int i;
//
//	//����ڷ� ���� ���Ҹ� �Է� �޴´�.
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("�Է��� �迭 �� ���� ū �� : %d \n", max_number(arr));
//
//	return 0;	
//}
//int max_number(int* parr) {
//	int i;
//	int max = parr[0];
//
//	for (i = 0; i < 10; i++) {
//		if (parr[i] > max) {
//			max = parr[i];
//		}
//	}
//	return max;
//}


//�Լ� ��� ����(��)

//int main() {
//	char input;
//
//	scanf_s("%c", &input);
//
//	if (48 <= input && input <= 57) {
//		printf("%c �� ���� �Դϴ� \n", input);
//	}
//	else {
//		printf("%c �� ���ڰ� �ƴմϴ�. \n", input);
//	}
//	return 0;
//	
//} 

//int isdigit(char c);
//int main() {
//	char input;
//	
//	scanf_s("%c", &input);
//
//	if (isdigit(input)) {
//		printf("%c �� �����Դϴ�. \n", input);
//	}
//	else {
//		printf("%c �� ���ڰ� �ƴմϴ�. \n", input);
//	}
//	return 0;
//}
//
//int isdigit(char c) {
//	if (48 <= c && c <= 57) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}


//10���� ���Ҹ� �Է� �ް� �� ���Ҹ� ū ������ ����ϴ� �Լ�	

//int max_number(int* parr);
//int max_number1(int* parr);
//int main() {
//	int arr[10];
//	int i;
//
//	//����ڷ� ���� ���Ҹ� �Է� �޴´�.
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("�Է��� �迭 �� ���� ū �� : %d \n", max_number(arr));
//	max_number1(arr);
//	printf("�Է��� ���� �� ū������ ���� :");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;	
//}
//int max_number(int* parr) {
//	int i;
//	int max = parr[0];
//
//	for (i = 0; i < 10; i++) {
//		if (parr[i] > max) {
//			max = parr[i];
//		}
//	}
//	return max;
//}
//
//int max_number1(int* parr) {
//	int i, j, temp;
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9 - i; j++) {
//			if (parr[j] < parr[j + 1]) {
//				temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//		}
//	}
//}
//int max_number1(int* parr) {
//	int i,j,temp;
//	int max = parr[0];
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 9; j++) {
//			if (parr[j] < parr[j + 1]) {
//				temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//		}
//	}
//}

// �����Ͱ� ����Ű�� ������ ���� �ٲ۴�.

//int pswap(int** ppa, int** ppb);
//int main() {
//	int a, b;
//	int* pa, * pb;
//	pa = &a;
//	pb = &b;
//
//	printf("pa �� ����Ű�� ������ �ּҰ� : %x \n", pa);
//	printf("pa �� �ּҰ� : %x \n \n", &pa);
//	printf("pb �� ����Ű�� ������ �ּҰ� : %x \n", pb);
//	printf("pb �� �ּҰ� : %x \n", &pb);
//
//	printf("---------ȣ��--------- \n");
//	pswap(&pa, &pb);
//	printf("---------ȣ�ⳡ--------- \n");
//
//	printf("pa �� ����Ű�� ������ �ּҰ� : %x \n", pa);
//	printf("pa �� �ּҰ� : %x \n \n", &pa);
//	printf("pb �� ����Ű�� ������ �ּҰ� : %x \n", pb);
//	printf("pb �� �ּҰ� : %x \n", &pb);
//
//	return 0;
//}
//int pswap(int** ppa, int** ppb) {
//	int* temp = *ppa;
//
//	printf("ppa �� ����Ű�� ������ �ּҰ� : %x \n", ppa);
//	printf("ppb �� ����Ű�� ������ �ּҰ� : %x \n", ppb);
//
//	*ppa = *ppb;
//	*ppb = temp;
//
//	return 0;
//}

//2���� �迭�� �� ���Ҹ� 1 �� ������Ű�� �Լ�

//int add1_element(int(*arr)[2], int row);
//int main() {
//	int arr[3][2];
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++) {
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	add1_element(arr, 3);
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//
//}
//int add1_element(int(*arr)[2], int row) {
//	int i, j;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < 2; j++) {
//			arr[i][j]++;
//		}
//	}
//	return 0;
//}

//����� ���� >> ����� ���ڷ� �޾Ƶ��̱�
//(���� ����)

//int read_val(const int val);
//int main() {
//	int a;
//	scanf_s("%d", &a);
//
//	read_val(a);
//	return 0;
//}
//
//int read_val(const int val) {
//	val = 5;
//
//	return 0;
//}

//�Լ� ������1

//int max(int a, int b);
//int main() {
//
//	int a, b;
//	int (*pmax)(int, int);
//	pmax = max;
//
//	scanf_s("%d %d", &a, &b);
//	printf("max(a,b) : %d \n", max(a, b));
//	printf("pmax(a,b : %d \n", pmax(a, b));
//
//	return 0;
//}
//
//int max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//	return 0;
//}

//�Լ� ������2

//int max(int a, int b);
//int donothing(int c, int k);
//int main() {
//	int a, b;
//	int (*pfunc)(int, int);
//	pfunc = max;
//
//	scanf_s("%d %d", &a, &b);
//	printf("max(a,b) : %d \n", max(a, b));
//	printf("pfunc(a,b) : %d \n", pfunc(a, b));
//
//	pfunc = donothing;
//
//	printf("donothing(1,1) : %d	\n", donothing(1, 1));
//	printf("pfunc(1,1) : %d \n", pfunc(1, 1));
//
//	return 0;
//}
//
//int max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//
//	return 0;
//}
//int donothing(int c, int k) {
//	return 1;
//}

// 5���� �л��� ���� ���� ���� ������ �Է� �޾Ƽ� ����� ���� ��� ���� ���� ������� ���� ����� ��������
//��� �̻��� ��� �հ� �ƴ� ����� ���հ��� ���

//int max_number(int* ptotal);
//int max_number1(int* ptotal);
//int main() {
//	int i;
//	int math, kor, eng, ave;
//	int total[5];
//	
//	for (i = 0; i < 5; i++) {
//		printf("������ �Է��ϼ���!! \n���� ���� ���� : ");
//		scanf_s("%d %d %d", &math, &kor, &eng);
//
//		total[i] = math + kor + eng;
//		ave = total[i] / 3;
//		printf("���� : %d\n", total[i]);
//		printf("��� : %d\n", ave);
//	}
//	printf("�ְ����� : %d", max_number(total));
//	max_number1(total);
//	for (i = 0; i < 4; i++) {
//		printf("������ ���� : %d\n", total[i]);
//	}
//	return 0;
//
//}
//
//
//
//int max_number(int* ptotal) {
//	int i;
//	int max = ptotal[0];
//	for (i = 0; i < 5; i++) {
//		if (ptotal[i] > max) {
//			max = ptotal[i];
//		}
//	}
//	return max;
//}
//int max_number1(int* ptotal) {
//		int i, j, temp;
//		for (i = 0; i < 4; i++) {
//			for (j = 0; j < 4 - i; j++) {
//				if (ptotal[j] < ptotal[j + 1]) {
//					temp = ptotal[j];
//					ptotal[j] = ptotal[j + 1];
//					ptotal[j + 1] = temp;
//				}
//			}
//		}
//		return temp;
//	}

