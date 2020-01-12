#include<stdio.h>

int main() {
	float a = 3.141592f; // float 형이라는 것을 확실히 표시해 주기 위해 f를 끝에 붙인다.
	double b = 3.141592;
	printf("a : %f \n", a); //%f를 이용해 수를 출력 할 때 소수점을 뒤에 붙여 주어야 한다.
	printf("b : %f \n", b);
	return 0;
}