#include<stdio.h>
//
//매크로 함수

//#define squar(x) x*x // define 함수이름(인자) 치환할 것

//int main(int argc, char** argv) {
//	printf("square(3) : %d \n", square(3));
//	return 0;

//#define RADTODEG(x) (x)*57.295
//
//int main(int argc, char** argv) {
//	printf("5 rad 는 : %f 도", RADTODEG(5));
//
//	return 0;
//}

//변수의 이름 출력

//#define PrintVariableName(var) printf(#var"\n");  //인자 앞에 #이 있으면 그것을 문자열로 바꾼다는 말이다.
//
//int main(int argc, char** argv) {
//	int a;
//	PrintVariableName(a);
//
//	return 0;
//}

//## 의 사용

//#define AddName(x,y) x##y   // ## 입력된 것을 하나로 합쳐주는 역할
//
//int main(int argc, char** argv) {
//	int AddName(a, b);
//
//	ab = 3;
//	printf("%d \n", ab);
//
//	return 0;
//}


//
//인라인 함수


//__inline int square(int a) {
//	return a * a;
//}
//
//int main(int argc, char** argv) {
//	printf("%d", square(3));
//
//	return 0;
//}

//__inline int max(int a, int b) {
//	if (a > b) 
//		return a;
//	else
//		return b;
//	
//}
//
//int main(int argc, char** argv) {
//	printf("3과 2 중 최대값은 : %d", max(3, 2));
//
//	return 0;
//}




