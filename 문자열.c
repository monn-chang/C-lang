#include<stdio.h>

//int main() {
	//�� ���� ���ڿ�(Null terminating string)

	/*char null_1 = '\0';
	char null_2 = 0;
	char null_3 = NULL;

	char not_null = '0';

	printf("NULL �� ����(�ƽ�Ű)�� : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0'�� ���� (�ƽ�Ű)�� : %d \n", not_null);*/

	//���ڿ��� ����

	/*char sentence_1[4] = { 'P', 's', 'i', '\0' };
	char sentence_2[4] = { 'P', 's', 'i', 0 };
	char sentence_3[4] = { 'P', 's', 'i', NULL };
	char sentence_4[4] = { "Psi" };

	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);*/

	// ������ ���� ����

	/*char word[30] = { "long sentence" };
	char* str = word;

	printf("%s \n", str);*/

	//���ڿ� �ٲٱ�

	/*char word[] = { "long sentenxe" };
	printf("���� ���� : %s \n", word);

	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';
	word[4] = 'e';

	printf("���� ���� : %s \n", word);*/

	

	


//
//	return 0;
//}

//������ ������ ����

//int str_length(char* str);
//int main() {
//	char str[] = { "What is your name?" };
//	printf("�� ���ڿ��� ���� : %d \n", str_length(str));
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

//���ڿ� �Է�

//int main() {
//
//
//	
//	char words[30];
//
//	printf("30�� �̳��� ���ڿ��� �Է����ּ���! : ");
//	scanf_s("%s", words, 30);
//
//	printf("���ڿ� : %s \n", words);
//
//	return 0;
//}

//���ۿ� ���� ����
//�̻��� scanf

//int main() {
//	//int num;
	//char c;

	//printf("���ڸ� �Է��ϼ��� : ");
	//scanf_s("%d", &num);

	//printf("���ڸ� �Է��ϼ��� : "); 
	//scanf_s("%c", &c); //�Է¹����� �������� ���� �Ѿ�Եȴ�,

	//stdin ����1

	/*char str[30];
	int i;

	scanf_s("%d", &i);
	scanf_s("%s", str, 30);

	printf("str : %s, i : %d", str, i);
	return 0;*/

	//stdin ����2

	/*char str1[10], str2[10];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str1, 10);
	printf("�Է��� ���ڿ� : %s \n", str1);

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str2, 10);
	printf("�Է��� ���ڿ� : %s \n", str2);*/

	//���� ����

	//int num; // int ���� num ����
	//char c; 

	//getch(); //
	//printf("���ڸ� �Է��ϼ��� : ");
	//scanf_s("%d", &num);

	//fflush(stdin); //�۵��� ���ϴ� ��!

	//printf("���ڸ� �Է��ϼ��� : ");
	//scanf_s("%c", &c, 10);

	//getchar �Լ� �̿�

	/*int num,i;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	getchar();

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);
	

	printf("�����ٶ󸶹ٻ�");*/

	//���ڿ�1

	/*char str[] = "sentence";
	char* pstr = "sentence";

	printf("str : %s \n", str);
	printf("pstr : %s \n", pstr);
	printf("%d \n", "sentence");*/

	//���ڿ�2

	/*char str[] = "hello";
	char* pstr = "goodbye";

	str[1] = 'a';
	pstr[1] = 'a';*/ //���� ����

	
	

//	return 0;
//}

//���ڿ� ����

//char copy_str(char* src, char* dest);
//int main() {
//	char str1[] = "hello";
//	char str2[] = "hi";
//
//	printf("���� ���� : %s \n", str1);
//
//	copy_str(str1, str2);
//
//	printf("���� ���� : %s \n", str1);
//
//	return 0;
//}
//char copy_str(char* dest, char* src) {  // ���࿡ dest�� ũ�Ⱑ src�� ũ�⺸�� �۴ٸ� ��� ���� �ʴ� �������� ħ���ϹǷ� ���� �߻�, �˻簡 �ʿ��ϴ�. ������ �Լ��̴�....
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//
//	return 1;
//}

// ���ڿ��� ��ġ�� �Լ�

//char stradd(char* dest, char* src);
//int main() {
//	char str1[100] = "hello my name is ";
//	char str2[] = "Psi";
//
//	printf("��ġ�� ���� : %s \n", str1);
//
//	stradd(str1, str2);
//
//	printf("��ģ ���� : %s \n", str1);
//
//	return 0;
//}
//char stradd(char* dest, char* src) {
//	while (*dest) { // dest�� �� �κ��� ã�� ��
//		dest++;
//	}// ������ ������ ���� dest�� dest�� ���κ� NULL ���ڸ� ����Ű�� �ִ�.
//	
//	while (*src) { // src�� ���� ������ while�� ���� src�� ���ڿ����� dest �� NULL ���� �ִ� �� ���� ������ �ִ´�.
//		*dest = *src; // src�� ������ dest�� �ִ´�.
//		src++; // ���� ���� ���� src�� ������ ����
//		dest++; // dest�� ���κп��� src�� ���� ���� dest�� �� ����
//	}
//	*dest = '\0'; //�������� src�� NULL���ڰ� ���� ���ؼ� dest�� NULL���� �߰�
//	return 1;
//}

//���ڿ��� ���ϴ� �Լ�

//char compare(char* str1, char* str2);
//int main() {
//	char str[20] = "hello every1";
//	char str2[20] = "hello everyone";
//	char str3[20] = "hello every1 hi";
//	char str4[20] = "hello every1";
//	
//	if (compare(str, str2)) {
//		printf("%s �� %s �� ���� \n", str, str2);
//	}
//	else {
//		printf("%s �� %s �� �ٸ��� \n", str, str2);
//	}
//
//	if (compare(str, str3)) {
//		printf("%s �� %s �� ���� \n", str, str3);
//	}
//	else {
//		printf("%s �� %s �� �ٸ��� \n", str, str3);
//	}
//
//	if (compare(str, str4)) {
//		printf("%s �� %s �� ���� \n", str, str4);
//	}
//	else {
//		printf("%s �� %s �� �ٸ��� \n", str, str4);
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



