#include<stdio.h>

//int print_hello() {
//	printf("Hello!! \n");
//	return 0;
//}



//int main() {
//	printf("함수를 불러보자 : \n");
//	print_hello();
//
//	printf("또 부를까? \n");
//	print_hello();
//
//	return 0;
//}
//int return_func() {
//	printf("실행된다. \n");
//	return 0;
//	printf("실행 안된다. \n");
//}
//
//int main() {
//	return_func();
//	return 0;
//}

//반환값
//int ret()
//{
//	return 1000;
//}
//
//int main() {
//	int a = ret();
//	printf("ret() 함수의 반환값 : %d \n", a);
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
//	printf("마술 상자에 집어넣을 값 : ");
//	scanf_s("%d", &i);
//	
//
//	
//	printf("마술 상자를 지나면 : %d \n", magicbox(i));
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
//	printf("2009.12.12 재산 : $%d \n", slave(my_money));
//
//	return 0;
//}

//1부터 n까지의 숫자 합
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
//	printf("1부터 원하는 값 더하기\n");
//	printf("값을 입력하시오 : ");
//	scanf_s("%d", &ch);
//	
//	printf("1부터 %d까지의 합은 : %d", ch, for_func(ch));
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
//    printf("호출 이전 i의 값 : %d \n", i);
//    change_val(i);
//    printf("호출 이후 i의 값 : %d \n", i);
//
//    return 0;
//}

//포인터를 활용한 함수
//int change_val(int* pi) {
//	printf("=====change_val 함수 안에서===== \n");
//	printf("pi 의 값 : %d \n", pi);
//	printf("pi 가 가리키는 것의 값 : %d \n", *pi);
//
//	*pi = 3;
//
//	printf("=====change_val 함수 끝 ~~===== \n");
//
//	return 0;
//
//}
//
//int main() {
//	int i = 0;
//
//	printf("i 변수의 주소값 : %d \n", &i);
//	printf("호출 이전 i 의 값 : %d \n", i);
//	change_val(&i);
//	printf("호출 이후 i 의 값 : %d \n", i);
//
//	return 0;
//}

//int swap(int* a, int* b) {  //함수 내부에서는 a와 b 의 값을 교환하는 것이 아니라 a와b 가 가리키는 두 변수의 값을 교환
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
//	printf("SWAP 이전 i : %d, j : %d \n", i, j);
//	
//	swap(&i, &j);
//
//	printf("SWAP 이후 i : %d, j : %d \n", i, j);
//
//	return 0;
//}


////함수 원형을 활용한 선언
//int swap(int* a, int* b); // 함수의 원형
//int main() {
//
//	int i, j;
//	i = 3;
//	j = 5;
//
//	printf("SWAP 이전 i : %d, j : %d \n", i, j);
//	swap(&i, &j);
//	printf("SWAP 이후 i : %d, j : %d \n", i, j);
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

//배열을 인자로 받기

//int add_number(int* parr);
//int main() {
//
//	int arr[3];
//	int i;
//	//사용자로 부터 3개의 원소를 입력 받는다.
//	for (i = 0; i < 3; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	add_number(arr);
//
//	printf("배열의 각 원소 : %d, %d, %d", arr[0], arr[1], arr[2]);
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

//입력 받은 배열의 10개의 원소들 중 최대값을 출력

//int max_number(int* parr);
//int main() {
//	int arr[10];
//	int i;
//
//	//사용자로 부터 원소를 입력 받는다.
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));
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


//함수 사용 연습(비교)

//int main() {
//	char input;
//
//	scanf_s("%c", &input);
//
//	if (48 <= input && input <= 57) {
//		printf("%c 는 숫자 입니다 \n", input);
//	}
//	else {
//		printf("%c 는 숫자가 아닙니다. \n", input);
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
//		printf("%c 는 숫자입니다. \n", input);
//	}
//	else {
//		printf("%c 는 숫자가 아닙니다. \n", input);
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


//10개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수	

//int max_number(int* parr);
//int max_number1(int* parr);
//int main() {
//	int arr[10];
//	int i;
//
//	//사용자로 부터 원소를 입력 받는다.
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));
//	max_number1(arr);
//	printf("입력한 원수 중 큰수부터 나열 :");
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

// 포인터가 가리키는 변수를 서로 바꾼다.

//int pswap(int** ppa, int** ppb);
//int main() {
//	int a, b;
//	int* pa, * pb;
//	pa = &a;
//	pb = &b;
//
//	printf("pa 가 가리키는 변수의 주소값 : %x \n", pa);
//	printf("pa 의 주소값 : %x \n \n", &pa);
//	printf("pb 가 가리키는 변수의 주소값 : %x \n", pb);
//	printf("pb 의 주소값 : %x \n", &pb);
//
//	printf("---------호출--------- \n");
//	pswap(&pa, &pb);
//	printf("---------호출끝--------- \n");
//
//	printf("pa 가 가리키는 변수의 주소값 : %x \n", pa);
//	printf("pa 의 주소값 : %x \n \n", &pa);
//	printf("pb 가 가리키는 변수의 주소값 : %x \n", pb);
//	printf("pb 의 주소값 : %x \n", &pb);
//
//	return 0;
//}
//int pswap(int** ppa, int** ppb) {
//	int* temp = *ppa;
//
//	printf("ppa 가 가리키는 변수의 주소값 : %x \n", ppa);
//	printf("ppb 가 가리키는 변수의 주소값 : %x \n", ppb);
//
//	*ppa = *ppb;
//	*ppb = temp;
//
//	return 0;
//}

//2차원 배열의 각 원소를 1 씩 증가시키는 함수

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

//상수인 인자 >> 상수를 인자로 받아들이기
//(오류 문장)

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

//함수 포인터1

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

//함수 포인터2

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

// 5명의 학생의 수학 국어 영어 점수를 입력 받아서 평균이 높은 사람 부터 낮은 사람까지 정렬 평균을 기준으로
//평균 이상인 사람 합격 아닌 사람은 불합격을 출력

//int max_number(int* ptotal);
//int max_number1(int* ptotal);
//int main() {
//	int i;
//	int math, kor, eng, ave;
//	int total[5];
//	
//	for (i = 0; i < 5; i++) {
//		printf("성적을 입력하세요!! \n수학 국어 영어 : ");
//		scanf_s("%d %d %d", &math, &kor, &eng);
//
//		total[i] = math + kor + eng;
//		ave = total[i] / 3;
//		printf("총점 : %d\n", total[i]);
//		printf("평균 : %d\n", ave);
//	}
//	printf("최고점수 : %d", max_number(total));
//	max_number1(total);
//	for (i = 0; i < 4; i++) {
//		printf("석차순 총점 : %d\n", total[i]);
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

