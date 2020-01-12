#include<stdio.h>

int main() {
	/*printf의 또 다른 형식
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a); 소수점 이하 둘째 자리까지만 표시
	printf("b : %5d \n", c); 숫자의 자리수를 5자리로 맞추라
	printf("c : %6.3f \n", b); 숫자의 자리수를 6자리로 맞추되, 반드시 소수점 이하 3째 자리까지 표시
	return 0;*/

	//산술연산
	/*int a, b; 
	a = 10;
	b = 3;
	printf("a + b 는 : %d \n", a + b);
	printf("a - b 는 : %d \n", a - b);
	printf("a * b 는 : %d \n", a * b);
	printf("a / b 는 : %d \n", a / b);
	printf("a % b 는 : %d \n \n", a % b);

	printf("a / b 는 : %f \n", a / b); // 해서는 안될짓{ (정수형 변수)(연산)(정수형 변수)는 언제나 (정수)이기 때문에 실수형 데이터를 출력하는 %f를 이용하면 오류가 발생

	return 0;
	*/

	//산술 변환 (자료형이 다른 두 변수를 연산 할 때, 숫자의 범위가 큰 자료형으로 자료형들이 바뀐다.)
	/*int a;
	double b;
	a = 10;
	b = 3;
	printf("a / b는 : %f \n", a / b);
	printf("b / a는 : %f \n", b / a);
	return 0;*/

	//대입 연산자

	/*int a = 3;
	a = a + 3;
	printf("a 의 값은 : %d \n", a);
	return 0;*/
	
	//더하기 1을 하는 방법 증감 연산자. 앞에 있으면 전위형(prefix), 뒤에 있으면 후위형(postfix)
	//int a = 1, b = 1, c = 1, d = 1;
	//a = a + 1;
	//printf("a : %d \n", a);
	//b += 1;
	//printf("b : %d \n", b);
	//++c;					//(전위형 먼저 1을 더해준 후 결과를 돌려주는것.)
	//printf("c : %d \n", c);
	//d++;					//(후위형 결과를 돌려준 이후 1을 더해준다.)
	//printf("d : %d \n", d);
	//return 0;

	//전위형과 후위형
	//int a = 1;
	//printf("++a : %d \n", ++a);

	//a = 1;
	//printf("a++ : %d \n", a++);
	//printf("a : %d \n", a);
	//return 0;
	//
}