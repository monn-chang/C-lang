#include<stdio.h>

//int main() {
	//널 종료 문자열(Null terminating string)

	/*char null_1 = '\0';
	char null_2 = 0;
	char null_3 = NULL;

	char not_null = '0';

	printf("NULL 의 정수(아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0'의 정수 (아스키)값 : %d \n", not_null);*/

	//문자열의 시작

	/*char sentence_1[4] = { 'P', 's', 'i', '\0' };
	char sentence_2[4] = { 'P', 's', 'i', 0 };
	char sentence_3[4] = { 'P', 's', 'i', NULL };
	char sentence_4[4] = { "Psi" };

	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);*/

	// 포인터 간단 복습

	/*char word[30] = { "long sentence" };
	char* str = word;

	printf("%s \n", str);*/

	//문자열 바꾸기

	/*char word[] = { "long sentenxe" };
	printf("조작 이전 : %s \n", word);

	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';
	word[4] = 'e';

	printf("조작 이후 : %s \n", word);*/

	

	


//
//	return 0;
//}

//문자의 개수를 세자

//int str_length(char* str);
//int main() {
//	char str[] = { "What is your name?" };
//	printf("이 문자열의 길이 : %d \n", str_length(str));
//	return 0;
//}
//	
//
//int str_length(char* str) {
//	int i = 0;
//	while (str[i])
//	{
//		i++;
//	}
//	return i;
//}

//문자열 입력

//int main() {
//
//
//	
//	char words[30];
//
//	printf("30자 이내의 문자열을 입력해주세요! : ");
//	scanf_s("%s", words, 30);
//
//	printf("문자열 : %s \n", words);
//
//	return 0;
//}

//버퍼에 관한 이해
//이상한 scanf

//int main() {
//	//int num;
	//char c;

	//printf("숫자를 입력하세요 : ");
	//scanf_s("%d", &num);

	//printf("문자를 입력하세요 : "); 
	//scanf_s("%c", &c); //입력버퍼의 형식으로 인해 넘어가게된다,

	//stdin 예제1

	/*char str[30];
	int i;

	scanf_s("%d", &i);
	scanf_s("%s", str, 30);

	printf("str : %s, i : %d", str, i);
	return 0;*/

	//stdin 예제2

	/*char str1[10], str2[10];

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str1, 10);
	printf("입력한 문자열 : %s \n", str1);

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str2, 10);
	printf("입력한 문자열 : %s \n", str2);*/

	//버퍼 비우기

	//int num; // int 정수 num 선언
	//char c; 

	//getch(); //
	//printf("숫자를 입력하세요 : ");
	//scanf_s("%d", &num);

	//fflush(stdin); //작동을 안하는 듯!

	//printf("문자를 입력하세요 : ");
	//scanf_s("%c", &c, 10);

	//getchar 함수 이용

	/*int num,i;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	getchar();

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	

	printf("가나다라마바사");*/

	//문자열1

	/*char str[] = "sentence";
	char* pstr = "sentence";

	printf("str : %s \n", str);
	printf("pstr : %s \n", pstr);
	printf("%d \n", "sentence");*/

	//문자열2

	/*char str[] = "hello";
	char* pstr = "goodbye";

	str[1] = 'a';
	pstr[1] = 'a';*/ //에러 구문

	
	

//	return 0;
//}

//문자열 복사

//char copy_str(char* src, char* dest);
//int main() {
//	char str1[] = "hello";
//	char str2[] = "hi";
//
//	printf("복사 이전 : %s \n", str1);
//
//	copy_str(str1, str2);
//
//	printf("복사 이후 : %s \n", str1);
//
//	return 0;
//}
//char copy_str(char* dest, char* src) {  // 만약에 dest의 크기가 src의 크기보다 작다면 허락 되지 않는 공간까지 침범하므로 문제 발생, 검사가 필요하다. 위험한 함수이다....
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//
//	return 1;
//}

// 문자열을 합치는 함수

//char stradd(char* dest, char* src);
//int main() {
//	char str1[100] = "hello my name is ";
//	char str2[] = "Psi";
//
//	printf("합치기 이전 : %s \n", str1);
//
//	stradd(str1, str2);
//
//	printf("합친 이후 : %s \n", str1);
//
//	return 0;
//}
//char stradd(char* dest, char* src) {
//	while (*dest) { // dest의 끝 부분을 찾는 것
//		dest++;
//	}// 구문이 끝나고 나서 dest는 dest의 끝부분 NULL 문자를 가리키고 있다.
//	
//	while (*src) { // src의 값의 끝까지 while문 구동 src의 문자열들을 dest 의 NULL 문자 있는 곳 부터 복사해 넣는다.
//		*dest = *src; // src의 내용을 dest에 넣는다.
//		src++; // 넣은 문자 다음 src의 값으로 증가
//		dest++; // dest의 끝부분에서 src의 값이 들어가면 dest의 값 증가
//	}
//	*dest = '\0'; //마지막에 src의 NULL문자가 들어가지 못해서 dest에 NULL문자 추가
//	return 1;
//}

//문자열을 비교하는 함수

//char compare(char* str1, char* str2);
//int main() {
//	char str[20] = "hello every1";
//	char str2[20] = "hello everyone";
//	char str3[20] = "hello every1 hi";
//	char str4[20] = "hello every1";
//	
//	if (compare(str, str2)) {
//		printf("%s 와 %s 는 같다 \n", str, str2);
//	}
//	else {
//		printf("%s 와 %s 는 다르다 \n", str, str2);
//	}
//
//	if (compare(str, str3)) {
//		printf("%s 와 %s 는 같다 \n", str, str3);
//	}
//	else {
//		printf("%s 와 %s 는 다르다 \n", str, str3);
//	}
//
//	if (compare(str, str4)) {
//		printf("%s 와 %s 는 같다 \n", str, str4);
//	}
//	else {
//		printf("%s 와 %s 는 다르다 \n", str, str4);
//	}	   	 
//}
//
//char compare(char* str1, char* str2) {
//	while (*str1) {
//		if (*str1 != *str2) {
//			return 0;
//		}
//
//		str1++;
//		str2++;
//	}
//	if (*str2 == '\0') {
//		return 1;
//	}
//	return 0;
//}



