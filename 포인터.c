#include<stdio.h>

int main() {
	//&연산자	&(주소값을 계산할 데이터)
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

	printf("포인터 p에 들어 있는 값 : %x \n", p);
	printf("int 변수 a 가 저장된 주소 : %x \n", &a);
	printf("int 변수 a 가 저장된 주소 : %x \n", &a+1);*/

	//*연산자의 이용
	//int* p;
	//int a;

	//p = &a;
	//a = 2;

	//printf("a 의 값 : %d \n", a);
	//printf("*p 의 값 : %d \n", *p);
	//printf("*p 의 값 : %p \n", *p);
	//printf("*p 의 값 : %d \n", p);
	//printf("*p 의 값 : %p \n", p);

	//*연산자 (나를 나에게 저장된 주소값에 위치한 데이터)
	//int* p;
	//int a;

	//p = &a;
	//*p = 3;

	//printf("a 의 값 : %d \n", a);
	//printf("*p 의 값  : %d \n", *p);

	//int p;
	//int a;

	//p = &a;
	//a = 3;

	//printf("*p 의 값? : %d \n", *p); //간접 참조가 잘못되어 있다.
	//printf("*p 의 값? : %d \n", p); //이렇게 해야한다~~

	//포인터도 변수이다.
	/*int a, b;
	int* p;

	p = &a;
	*p = 2;
	p = &b;
	*p = 4;
	포인터도 변수 이다 즉, 포이� 들어간 주소값이 바뀔 수 있다는 것이다.
	a -> b로 주소값이 바뀔 수 있다.

	printf("a : %d \n", a);
	printf("b : %d \n", b);*/

	//상수 포인터

	//int a, b;
	//const int* pa = &a;

	////*pa = 3; //올바르지 않은 문장
	//pa = &b; //올바른 문장

	//int* const pa = &a;
	//*pa = 3;  // 올바른 문장
	//pa = &b; //올바르지 않은 문장

	//const int* const pa = &a;

	//*pa = 3; // 둘다 올바르지 않다.
	//pa = &b;

	//포인터의 덧셈

	//int a;
	//int* pa;
	//pa = &a;

	//printf("pa의 값 : %d \n", pa); //int가 4비트 이므로 더해짐
	//printf("(pa + 1) 의 값 : %d \n", pa + 1);

	//int a;
	//char b;
	//double c;
	//int* pa = &a;
	//char* pb = &b;
	//double* pc = &c;

	//printf("pa 의 값 : %d \n", pa); // int는 4비트
	//printf("(pa + 1) 의 값 : %d \n", pa + 1);
	//printf("pb 의 값 : %d \n", pb); // char은 1비트
	//printf("(pb + 1) 의 값 : %d \n", pb + 1);
	//printf("pc 의 값 : %d \n", pc); // double은 8비트
	//printf("(pc + 1) 의 값 : %d \n", pc + 1);

	//포인터 뺄셈
	//int a;
	//int* pa = &a;
	//printf("pa 의 값 : %d \n", pa);
	//printf("(pa - 1) 의 값 : %d \n", pa - 1);

	//포인터의 대입
	/*int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa 가 가리키고 있는 것 : %d \n", *pa);
	printf("pb 가 가리키고 있는 것 : %d \n", *pb);*/
	//배열
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] 의 주소값 : %d \n", i + 1, &arr[i]);
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] 의 주소값 ; %x ", i, &arr[i]);
		printf("(parr + %d) 의 값 : %x ", i, (parr + i));
		if (&arr[i] == (parr + i))
		{
			printf("--> 일치 \n");
		}
		else
		{
			printf("--> 불일치 \n");
		}
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (;;)
	{
		printf("값을 입력하시오");
		scanf_s("%d", &i);
		printf("arr[i] = %d, *(parr + i) = %d \n", arr[i], *(parr + i));
		if (i == 10)
			break;
	}*/

	//1차원 배열 가리키기
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

	//printf("내 시험 점수 평균 : %d \n", sum / 10);

	/*int a;
	int* pa;
	int** ppa;

	pa = &a;
	ppa = &pa;

	a = 3;

	printf("a : %d // *pa : %d // **pa : %d \n", a, *pa, **ppa);
	printf("a : %d // pa : %d // *ppa : %d \n", &a, pa, *ppa);
	printf("&pa : %d // ppa : %d \n	", &pa, ppa);*/

	//2차원 배열의 []연산자
	/*int arr[2][3];*/

	//printf("arr[0] : %x \n", arr[0]);
	//printf("&arr[0][0] : %x \n", &arr[0][0]);

	//printf("arr[1] : %x \n", arr[1]);
	//printf("&arr[1][0] : %x \n", &arr[1][0]);

	/*printf("arr[0] : %x \n", &arr[0]);
	printf("arr : %x \n", arr);*/

	//1증가
	/*int arr[2][3] = { {1,2,3,},{4,5,6,} };

	printf("arr : %x, arr + 1 : %x \n", arr, arr + 1);
	*/

	//배열의 포인터
	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int(*parr)[3];

	//parr = arr;

	//printf("parr[1][2] : %d, arr[1][2] : %d \n", parr[1][2], arr[1][2]);

	//배열 포인터 예제
	//int arr[2][3] = { {1,2,3} , {4,5,6}};
	//int brr[10][3];
	//int crr[2][5];

	//int(*parr)[3];

	//parr = arr;
	//parr = brr;
	//parr = crr; //오류 열의 개수가 안맞음

	//printf("%d, %d ", arr[1][2], parr[1][2] 
	
	//포인터 배열
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
