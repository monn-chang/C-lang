#include<stdio.h>

//struct Human {
//	int age;
//	int height;
//	int weight;
//};
//int main() {
//	struct Human Psi;
//	
//	Psi.age = 99;
//	Psi.height = 185;
//	Psi.weight = 80;
//
//	printf("Psi �� ���� ���� \n");
//	printf("����    : %d \n", Psi.age);
//	printf("Ű      : %d \n", Psi.height);
//	printf("������  : %d \n", Psi.weight);
//
//	
//	return 0;
//}

//char copy_str(char* dest, char* src);
//struct Books {  // ����ü ����
//	char name[30];
//	char auth[30];
//	char publ[30];
//	int borrowed;
//};
//
//int main() {
//	struct Books Harry_potter; // struct Books�� Ÿ���� ���� Harry_potter
//	copy_str(Harry_potter.name, "Harry Potter");
//	copy_str(Harry_potter.auth, "J.K. Rolling");
//	copy_str(Harry_potter.publ, "Scholastic");
//	Harry_potter.borrowed = 0;
//
//	printf("å �̸� : %s \n", Harry_potter.name);
//	printf("���� �̸� : %s \n", Harry_potter.auth);
//	printf("���ǻ� �̸� : %s \n", Harry_potter.publ);
//	
//	return 0;
//}
////���ڿ� ���� �Լ�
//char copy_str(char* dest, char* src) {
//	while (*src) {
//		*dest = *src; //src���� dest�� �����Ѵ�.
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return 1;
//}

//����ü ������

//struct test {
//	int a, b;
//};
//
//int main() {
//	struct test st;
//	struct test* ptr;
//
//	ptr = &st;
//	//(*ptr).a = 1;
//	//(*ptr).b = 2;
//
//	ptr -> a = 1;
//	ptr -> b = 2;
//
//
//	printf("st�� a��� : %d \n", st.a);
//	printf("st�� b��� : %d \n", st.b);
//
//	return 0;
//}

//����ü ���ڷ� ���� �Լ�

//struct TEST { //â���� �� �ϳ��� Ÿ��
//	int c;
//};
//
//int main() {
//	struct TEST t; // struct TEST ���� ����ü ���� t ����
//	struct TEST* pt = &t; // struct TEST ���� ����Ű�� ������ pt ����
//
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	pt->c = 1; //pt ������Ű�� ����ü ���� (c)
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}

//����ü ������ ����

//struct TEST {
//	int c;
//	int* pointer;
//};
//
//int main() {
//	struct TEST t;
//	struct TEST* pt = &t;
//	int i = 0;
//
//	t.pointer = &i;
//	printf("i : %p \n", t.pointer); //����ü�� ���� pointer(�ּҸ� �����ϴ� ����)�� �� ��
//	printf("i : %d \n", *t.pointer); //����ü�� ���� pointer�� ����Ű�� �ִ� �����ȿ� �ִ� �� 
//	*t.pointer = 3;
//
//	printf("i : %d \n", i);
//
//	*pt->pointer = 4; //*(pt->pointer)�� ���� �ǹ��̴�.
//
//	printf("i : %d \n", i);
//
//	return 0;
//}

//int add_one(int* a);
//struct TEST {
//	int c;
//};
//
//int main() {
//	struct TEST t;
//	struct TEST* pt = &t; // pt�� t�� ����Ű�� �ִ�.
//
//	pt->c = 0;
//
//	add_one(&t.c); // �Լ� add_one�� t�� ��� c�� �ּҰ��� ����. &������ ���� .�����ڰ� �켱���� �׷��� &(t.c)�� ����.
//
//	printf("t.c : %d \n", t.c);
//
//	add_one(&pt->c); //�Լ� add_one�� t�� ��� c�� �ּҰ��� ����. &������ ���� ->�����ڰ� �켱���� &(t->c)�� ����.
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//
//}
//
//int add_one(int* a) {
//	*a += 1;
//	return 0;
//}


//����ü ����

//struct TEST {
//	int i;
//	char c;
//};
//
//int main() {
//	struct TEST st, st2;
//
//	st.i = 1;
//	st.c = 'c';
//	st2 = st;
//	printf("st2.i : %d \n", st2.i);
//	printf("st2.c : %d \n", st2.c);
//
//	return 0;
//}

//char copy_str(char* dest, char* src);
//struct TEST {
//	int i;
//	char str[20];
//};
//int main() {
//	struct TEST a, b;
//	b.i = 3;
//	copy_str(b.str, "hello, world");
//
//	a = b;
//
//	printf("a.str : %s \n", a.str);
//	printf("a.i : %d \n", a.i);
//
//	return 0;
//}
//char copy_str(char* dest, char* src) {
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//
//	return 0;
//}

//����ü�� ���ڷ� ������ �Լ�

//int set_human(struct TEST *a, int age, int gender);
//struct TEST {
//	int age;
//	int gender;
//};
//
//int main() {
//	struct TEST human;
//
//	set_human(&human, 10, 1); //Ư���� ������ ���� �ٸ� �Լ��� ���� �ٲٷ��� ������ �ּҰ��� �����ؾ� �Ѵ�.
//
//	printf("AGE : %d // Gender : %d", human.age, human.gender);
//	return 0;
//}
//
//int set_human(struct TEST *a, int age, int gender) {
//	a->age = age;  //a�� ����Ű�� �ִ� ����ü ������ ���, �� human�� ����� ��Ī�� �� �ְ� �ȴ�.
//	a->gender = gender;
//
//	return 0;
//}
//int set_human(struct TEST* a, int age, int gender, char* name);
//char copy_str(char* dest, char* src);
//struct TEST {
//	int age;
//	int gender;
//	char name[20];
//};
//
//int main() {
//	
//	struct TEST human;
//	printf("���̿� ����, �̸��� �Է��Ͻÿ� : ");
//	scanf_s("%d%d%s", &human.age, &human.gender, &human.name, 30);
//	set_human(&human, human.age, human.gender, human.name);
//	//set_human(&human, 10, 1, "Lee");
//
//	printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
//	return 0;
//}
//
//int set_human(struct TEST* a, int age, int gender, char *name) {
//	a->age = age;
//	a->gender = gender;
//	copy_str(a->name, name);
//	return 0;
//}
//
//char copy_str(char* dest, char* src) {
//		while (*src) {
//			*dest = *src;
//			src++;
//			dest++;
//		}
//		*dest = '\0';
//	
//		return 1;
//	}


//����ü(union), ������(enum)

//struct employee {
//	int age;
//	int salary;
//};
//struct company {
//	struct employee data; //����ü ���� data�� ����� ������.
//	char name[10];
//};
//
//int main() {
//	struct company Kim;
//
//	Kim.data.age = 31;
//	Kim.data.salary = 3000000;
//
//	printf("Kim's age : %d \n", Kim.data.age);
//	printf("Kim's salary : %d$/year \n", Kim.data.salary);
//
//	return 0;
//}

//����ü�� �����ϴ� �Լ�

//struct AA function(int j);
//struct AA {
//	int i;
//};
//
//int main() {
//	struct AA a;
//
//	a = function(10);
//	printf("a.i : %d \n", a.i);
//	return 0;
//}
//struct AA function(int j) { // struct AA ���� �����ϴ� �Լ� function
//	struct AA A;
//	A.i = j;
//
//	return A;
//}

//����ü ������ ���� ���

//char copy_str(char* dest, char* src);
//int Print_Obj_Status(struct obj OBJ);
//struct obj {
//	char name[20];
//	int x, y;
//}Ball;
//
//int main() {
//	Ball.x = 3;
//	Ball.y = 4;
//	copy_str(Ball.name, "RED BALL");
//
//	Print_Obj_Status(Ball);
//	return 0;
//}
//
//int Print_Obj_Status(struct obj OBJ) {
//	printf("Location of %s \n", OBJ.name);
//	printf("( %d , %d ) \n", OBJ.x, OBJ.y);
//
//	return 0;
//}
//char copy_str(char* dest, char* src) {
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return 1;
//}

//����� ���� �ʱ�ȭ �ϱ�

//int Print_Status(struct HUMAN human);
//struct HUMAN {
//	int age;
//	int height;
//	int weight;
//	int gender;
//};
//
//int main() {
//	struct HUMAN Adam = { 31, 182, 75, 0 };
//	struct HUMAN Eve = { 27, 166, 48, 1 };
//
//	Print_Status(Adam);
//	Print_Status(Eve);
//}
//
//int Print_Status(struct HUMAN human) {
//	if (human.gender == 0) {
//		printf("MALE \n");
//	}
//	else {
//		printf("FEMALE \n");
//	}
//	printf("AGE : %d / Height : %d / Weight : %d \n ", human.age, human.height, human.weight);
//
//	if (human.gender == 0 && human.height >= 180) {
//		printf("HE IS A WINNER!! \n");
//	}
//	else if (human.gender == 0 && human.height < 180) {
//		printf("HE IS A LOSER!! \n");
//	}
//	printf("----------------------------------------- \n");
//	return 0;
//}


//UNION ����ü
//����ü�� �޸� �޸𸮸� '����'�Ѵ�.

//union A {
//	int i;
//	char j;
//};
//int main() {
//	union A a;
//	a.i = 0x12345678;
//	printf("%x", a.j);
//	return 0;
//}

//�� �����(Big Endian), ��Ʋ �����(little Endian)

//union A {
//	int i;
//	short j;
//};
//int main() {
//	union A a;
//	a.i = 0x12345678;
//	printf("%x", a.j);
//	return 0;
//}


//������

//enum{RED,BLUE,WHITE,BLACK};
//int main() {
//	int palette = 1;
//	//scanf_s("%d", &palette);
//	switch (palette) {
//	case RED:
//		printf("palette : RED \n");
//		break;
//	case BLUE:
//		printf("palette : BLUE \n");
//		break;
//	case WHITE:
//		printf("palette : WHITE \n");
//		break;
//	case BLACK:
//		printf("palette : BLACK \n");
//		break;
//	}
//}

//enum{RED = 3, BLUE, WHITE, BLACK};
//int main() {
//	int palette = BLACK;
//	printf("%d\n", palette);
//}

