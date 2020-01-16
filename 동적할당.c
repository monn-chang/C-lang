#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(int argc, char** argv) {
//	int SizeOFArray;
//	int* arr;
//
//	printf("만들고 싶은 배열의 원소의 수 : ");
//	scanf_s("%d", &SizeOFArray);
//
//	arr = (int*)malloc(sizeof(int) * SizeOFArray); //동적할당
//
//	free(arr); //할당을 풀어준다.
//
//	return 0;
//}

//동적할당 활용

//int main(int argc, char** argv) {
//	int student;
//	int i, input;
//	int* score;
//	int sum = 0;
//
//	printf("학생의 수는? : ");
//	scanf_s("%d", &student);
//
//	score = (int*)malloc(student * sizeof(int));
//
//	for (i = 0; i < student; i++) {
//		printf("학생 %d 의 점수 : ", i);
//		scanf_s("%d", &input);
//
//		score[i] = input;
//	}
//	for (i = 0; i < student; i++) {
//		sum += score[i];
//	}
//	printf("전체 학생 평균 점수 : %d \n", sum / student);
//	return 0;
//}



//int main(int argc, char** argv) {
//	int i;
//	int x, y;
//	int** arr;
//
//	printf("arr[x][y] 를 만든다. \n");
//	scanf_s("%d %d", &x, &y);
//
//	arr = (int*)malloc(sizeof(int*) * x);
//
//	for (i = 0; i < x; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * y);
//	}
//	printf("생성완료! \n");
//	for (i = 0; i < x; i++) {
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}


//int main(int argc, char** argv) {
//	int i, j, input, sum = 0; //값을 받을 변수들의 선언
//	int subject, students;
//	int** arr;
//
//	printf("과목 수 : ");
//	scanf_s("%d", &subject);
//
//	printf("학생의 수 : ");
//	scanf_s("%d", &students);
//
//	arr = (int**)malloc(sizeof(int*) * subject); // subject가 입력 받을 만큼의 1차원 배열 선언
//
//	for (i = 0; i < subject; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * students); //2차원 배열 역할을 할수 있게 해줌
//	}
//
//	for (i = 0; i < subject; i++) { //과목당 학생들의 점수 입력 할 수 있게 해주는 반복문
//		printf("과목 %d 점수 ------ \n", i);
//		for (j = 0; j < students; j++) {
//			printf("학생 %d 점수 입력 : ", j);
//			scnaf_s("%d", &input);
//
//			arr[i][j] = input;
//		}
//	}
//
//	for (i = 0; i < subject; i++) {  //배열안의 값들을 더해서 평균을 구해준다
//		sum = 0;
//		for (j = 0; j < students; j++) {
//			sum += arr[i][j];
//		}
//		printf("과목 %d 평균 점수 : %d \n", i, sum / students);
//	}
//	for (i = 0; i < subject; i++) { //동적할당을 해제해주는 문구이다.
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}


//구조체 동적 할당
//struct Something {
//	int a, b;
//};
//
//int main() {
//	struct Something *arr;
//	int size, i;
//
//	printf("원하시는 구조체 배열의 크기 : ");
//	scanf_s("%d", &size);
//
//	arr = (struct Something*)malloc(sizeof(struct Something) * size);
//
//	for (i = 0; i < size; i++) {
//		printf("arr[%d].a : ", i);
//		scanf_s("%d", &arr[i].a);
//		printf("arr[%d].b : ",i);
//		scanf_s("%d", &arr[i].b);
//	}
//
//	for (i = 0; i < size; i++) {
//		printf("arr[%d].a : %d, arr[%d].b : %d \n", i, arr[i].a, i, arr[i].b);
//	}
//	free(arr);
//
//	return 0;
//}

//노드
//struct Node* InsertNode(struct Node* current, int data);
//void DestroyNode(struct Node* destroy, struct Node* head);
//struct Node* CreateNode(int data);
//void PrintNodeFrom(struct Node* from);
//
//int main() {
//	struct Node* Node1 = CreateNode(100);
//	struct Node* Node2 = InsertNode(Node1, 200);
//	struct Node* Node3 = InsertNode(Node2, 300);
//	struct Node* Node4 = InsertNode(Node2, 400);
//
//	PrintNodeFrom(Node1);
//
//	return 0;
//}
//
//struct Node {
//	int data; //끼워넣을 데이터
//	struct Node* nextNode; // 다음 노드를 가리키는 부분
//};
//
//struct Node* CreateNode(int data) { //새 노드를 만드는 함수
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->nextNode = NULL;
//
//	return newNode;
//}
//
//struct Node* InsertNode(struct Node* current, int data) {
//	struct Node* after = current->nextNode; //current 노드가 가리키는 다음 노드가 after노드라는 말
//	 
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // 새로운 노드를 생성, 메모리에 할당(동적할당)
//
//	newNode->data = data;
//	newNode->nextNode = after;
//
//	current->nextNode = newNode;
//	return newNode;
//}
//
//void DestroyNode(struct Node* destroy, struct Node* head) {
//	struct Node* next = head;
//
//	if (destroy == head) {
//		free(destroy);
//		return;
//	}
//	while (next) {
//		if (next->nextNode == destroy) {
//			next->nextNode = destroy->nextNode;
//		}
//		next = next->nextNode;
//	}
//	free(destroy);
//}
//
//void PrintNodeFrom(struct Node* from) {
//	while (from) {
//		printf("노드의 데이터 : %d \n", from->data);
//		from = from->nextNode;
//	}
//}

//메모리 관련 함수

//memcpy

//int main() {
//	char str[50] = "I love Chewing C hahahah";
//	char str2[50];
//	char str3[50];
//
//	memcpy(str2, str, strlen(str)+1);
//	memcpy(str3, "hello", 6);
//
//	printf("%s \n", str);
//	printf("%s \n", str2);
//	printf("%s \n", str3);
//
//	return 0;
//}

//memmove

//int main() {
//	char str[50] = "I Love Chewing C hahaha";
//
//	printf("%s \n", str);
//	printf("memmove 이후 \n");
//	memmove(str + 23, str + 17, 6);
//	printf("%s \n", str);
//
//	return 0;
//}

//memcmp

//int main() {
//	int arr[10] = {1, 2, 3, 4, 5};
//	int arr2[10] = { 1,2,3,4,5 };
//	if (memcmp(arr, arr2, 5) == 0) {
//		printf("arr 과 arr2 는 일치 \n");
//	}
//	else {
//		printf("arr 과 arr2 는 일치 안함 \n");
//	}
//	return 0;
//}
