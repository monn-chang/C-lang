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

int main() {
	//int num;
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

	int num; // int ���� num ����
	char c; 

	getch(); //
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	fflush(stdin); //�۵��� ���ϴ� ��!

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &c, 10);

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


	

	return 0;
}
