#include<stdio.h>
#include<string.h>

//int main() {
//	FILE* fp;
//	errno_t  err;
//	err = fopen_s(&fp, "a.txt", "w");
//
//	if (fp == NULL) {
//		printf("Write Error!!\n");
//		return 0;
//	}
//	fputs("Hello World!!! \n", fp);
//	fputs("Hello World!!! \n", stdout);
//
//	fclose(fp);
//	return 0;
//}

//int main() {
//	FILE* fp;
//	char buf[20];
//	errno_t a;
//	a = fopen_s(&fp, "a.txt", "r");
//	
//
//	if (fp == NULL) {
//		printf("read error!! \n");
//		return 0;
//	}
//
//	fgets(buf, 20, fp); //scanf_s�� �ٸ��� �Է¹޴� �Ϳ� ������ �ּ� �������̴�. �����÷ο� ����.
//
//	printf("�Է¹޴� ���� : %s \n", buf);
//
//	fclose(fp);
//
//	return 0;
//}

//int main() {
//	FILE* fp;
//	errno_t a;
//	a = fopen_s(&fp,"a.txt", "r");
//	char c;
//
//	while ((c = fgetc(fp)) != EOF) { // EOF End Of File�� ��Ÿ���� �� -1�� �� �ִ�.
//		printf("%c", c);
//	}
//	fclose(fp);
//	return 0;
//}

//int main() {
//	FILE* fp;
//	errno_t err;
//	err = fopen_s(&fp, "a.txt", "r");
//	int size = 0;
//
//	while (fgetc(fp) != EOF) {
//		size++;
//	}
//	printf("�� ������ ũ��� : %d bytes \n", size);
//	fclose(fp);
//	return 0;
//}

//int main() {
//	FILE* fp;
//	errno_t err;
//	err = fopen_s(&fp, "some_data.txt", "r");
//	char c;
//	if (fp == NULL) {
//		printf("file open error! \n");
//		return 0;
//	}
//	while ((c = fgetc(fp)) != EOF) {
//		printf("%c", c);
//	}
//}

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r");
//	char data[10];
//	char c;
//
//	if (fp == NULL) {
//		printf("file open error! \n");
//		return 0;
//	}
//	fgets(data, 5, fp);
//	printf("�Է� ���� ������ : %s \n", data);
//
//	c = fgetc(fp);
//	printf("�� ������ �Է� ���� ���� : %c \n", c);
//	fseek(fp, -1, SEEK_CUR);
//
//	c = fgetc(fp);
//	printf("�׷��ٸ� ���� ���ڰ�? : %c \n", c);
//
//	fclose(fp);	
//}

//���Ͽ� �б� ���� �����ϱ�

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r+");
//	char data[100];
//
//	fgets(data, 100, fp);
//	printf("���� ���Ͽ� �ִ� ���� : %s \n", data);
//
//	fseek(fp, 5, SEEK_SET);
//
//	fputs("is nothing on this file", fp);
//
//
//	fclose(fp);
//}

//int main() {
//	FILE* fp;
//	char c;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r+");
//	
//
//	if (fp == NULL) {
//		printf("���� ���⸦ �����Ͽ����ϴ�.\n");
//		return 0;
//	}
//	while ((c = fgetc(fp)) != EOF) { // �빮�ڸ� �ҹ��ڷ�
//		if (65 <= c && c <= 90) { 
//			fseek(fp, -1, SEEK_CUR);	// �������� ������ġ�����ڸ� �ٽ� �������־�� �Ѵ�.
//			fputc(c + 32, fp);			// �����ָ� ������ ���.
//			fseek(fp, 0, SEEK_CUR);
//		}
//		else if (97 <= c && c <= 122) { // �ҹ����϶� �빮�ڷ�
//			fseek(fp, -1, SEEK_CUR); 
//			fputc(c - 32, fp);
//			fseek(fp, 0, SEEK_CUR);
//		}
//	}
//	fclose(fp);
//}

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "a");
//	char c;
//
//	if (fp == NULL) {
//		printf("���� ���⸦ ���� �Ͽ����ϴ�.");
//		return 0;
//	}
//	fputs("IS ADDED HAHAHAHAHAHA", fp); //�Ʒ� ������ ���� �ڿ� ���ٿ� ����.
//	fclose(fp);
//}

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r");
//	char data[100];
//
//	if (fp == NULL) {
//		printf("���� ���� ����! \n");
//		return 0;
//	}
//	printf("-----�Է� ���� �ܾ��----- \n");
//	while (fscanf_s(fp, "%s", data, 100) != EOF) {
//		printf("%s \n", data);
//	}
//	fclose(fp);
//}

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r+");
//	char data[100];
//
//	if (fp == NULL) {
//		printf("���� ���� ����! \n");
//		return 0;
//	}
//	while (fscanf_s(fp, "%s", data, 100) != EOF) {
//		if (strcmp(data, "this") == 0) {
//			fseek(fp, -(long)strlen("this"), SEEK_CUR);
//			fputs("that", fp);
//			fseek(fp, 0, SEEK_CUR);
//			//fflush(fp);
//		}
//	}
//	fclose(fp);
//}

