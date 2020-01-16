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
//	fgets(buf, 20, fp); //scanf_s와 다르게 입력받는 것에 제한을 둬서 안정적이다. 오버플로우 방지.
//
//	printf("입력받는 내용 : %s \n", buf);
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
//	while ((c = fgetc(fp)) != EOF) { // EOF End Of File을 나타내는 값 -1이 들어가 있다.
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
//	printf("이 파일의 크기는 : %d bytes \n", size);
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
//	printf("입력 받은 데이터 : %s \n", data);
//
//	c = fgetc(fp);
//	printf("그 다음에 입력 받은 문자 : %c \n", c);
//	fseek(fp, -1, SEEK_CUR);
//
//	c = fgetc(fp);
//	printf("그렇다면 무슨 문자가? : %c \n", c);
//
//	fclose(fp);	
//}

//파일에 읽기 쓰기 같이하기

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r+");
//	char data[100];
//
//	fgets(data, 100, fp);
//	printf("현재 파일에 있는 내용 : %s \n", data);
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
//		printf("파일 열기를 실패하였습니다.\n");
//		return 0;
//	}
//	while ((c = fgetc(fp)) != EOF) { // 대문자를 소문자로
//		if (65 <= c && c <= 90) { 
//			fseek(fp, -1, SEEK_CUR);	// 마지막에 파일위치지정자를 다시 설정해주어야 한다.
//			fputc(c + 32, fp);			// 안해주면 에러가 뜬다.
//			fseek(fp, 0, SEEK_CUR);
//		}
//		else if (97 <= c && c <= 122) { // 소문자일때 대문자로
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
//		printf("파일 열기를 실패 하였습니다.");
//		return 0;
//	}
//	fputs("IS ADDED HAHAHAHAHAHA", fp); //아래 내용이 파일 뒤에 덧붙여 진다.
//	fclose(fp);
//}

//int main() {
//	FILE* fp;
//	errno_t err = fopen_s(&fp, "some_data.txt", "r");
//	char data[100];
//
//	if (fp == NULL) {
//		printf("파일 열기 오류! \n");
//		return 0;
//	}
//	printf("-----입력 받은 단어들----- \n");
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
//		printf("파일 열기 오류! \n");
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

