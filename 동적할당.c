#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(int argc, char** argv) {
//	int SizeOFArray;
//	int* arr;
//
//	printf("����� ���� �迭�� ������ �� : ");
//	scanf_s("%d", &SizeOFArray);
//
//	arr = (int*)malloc(sizeof(int) * SizeOFArray); //�����Ҵ�
//
//	free(arr); //�Ҵ��� Ǯ���ش�.
//
//	return 0;
//}

//�����Ҵ� Ȱ��

//int main(int argc, char** argv) {
//	int student;
//	int i, input;
//	int* score;
//	int sum = 0;
//
//	printf("�л��� ����? : ");
//	scanf_s("%d", &student);
//
//	score = (int*)malloc(student * sizeof(int));
//
//	for (i = 0; i < student; i++) {
//		printf("�л� %d �� ���� : ", i);
//		scanf_s("%d", &input);
//
//		score[i] = input;
//	}
//	for (i = 0; i < student; i++) {
//		sum += score[i];
//	}
//	printf("��ü �л� ��� ���� : %d \n", sum / student);
//	return 0;
//}



//int main(int argc, char** argv) {
//	int i;
//	int x, y;
//	int** arr;
//
//	printf("arr[x][y] �� �����. \n");
//	scanf_s("%d %d", &x, &y);
//
//	arr = (int*)malloc(sizeof(int*) * x);
//
//	for (i = 0; i < x; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * y);
//	}
//	printf("�����Ϸ�! \n");
//	for (i = 0; i < x; i++) {
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}


//int main(int argc, char** argv) {
//	int i, j, input, sum = 0; //���� ���� �������� ����
//	int subject, students;
//	int** arr;
//
//	printf("���� �� : ");
//	scanf_s("%d", &subject);
//
//	printf("�л��� �� : ");
//	scanf_s("%d", &students);
//
//	arr = (int**)malloc(sizeof(int*) * subject); // subject�� �Է� ���� ��ŭ�� 1���� �迭 ����
//
//	for (i = 0; i < subject; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * students); //2���� �迭 ������ �Ҽ� �ְ� ����
//	}
//
//	for (i = 0; i < subject; i++) { //����� �л����� ���� �Է� �� �� �ְ� ���ִ� �ݺ���
//		printf("���� %d ���� ------ \n", i);
//		for (j = 0; j < students; j++) {
//			printf("�л� %d ���� �Է� : ", j);
//			scnaf_s("%d", &input);
//
//			arr[i][j] = input;
//		}
//	}
//
//	for (i = 0; i < subject; i++) {  //�迭���� ������ ���ؼ� ����� �����ش�
//		sum = 0;
//		for (j = 0; j < students; j++) {
//			sum += arr[i][j];
//		}
//		printf("���� %d ��� ���� : %d \n", i, sum / students);
//	}
//	for (i = 0; i < subject; i++) { //�����Ҵ��� �������ִ� �����̴�.
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}


//����ü ���� �Ҵ�
//struct Something {
//	int a, b;
//};
//
//int main() {
//	struct Something *arr;
//	int size, i;
//
//	printf("���Ͻô� ����ü �迭�� ũ�� : ");
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

//���
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
//	int data; //�������� ������
//	struct Node* nextNode; // ���� ��带 ����Ű�� �κ�
//};
//
//struct Node* CreateNode(int data) { //�� ��带 ����� �Լ�
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->nextNode = NULL;
//
//	return newNode;
//}
//
//struct Node* InsertNode(struct Node* current, int data) {
//	struct Node* after = current->nextNode; //current ��尡 ����Ű�� ���� ��尡 after����� ��
//	 
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // ���ο� ��带 ����, �޸𸮿� �Ҵ�(�����Ҵ�)
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
//		printf("����� ������ : %d \n", from->data);
//		from = from->nextNode;
//	}
//}

//�޸� ���� �Լ�

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
//	printf("memmove ���� \n");
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
//		printf("arr �� arr2 �� ��ġ \n");
//	}
//	else {
//		printf("arr �� arr2 �� ��ġ ���� \n");
//	}
//	return 0;
//}
