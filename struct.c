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
//	printf("Psi 에 대한 정보 \n");
//	printf("나이    : %d \n", Psi.age);
//	printf("키      : %d \n", Psi.height);
//	printf("몸무게  : %d \n", Psi.weight);
//
//	
//	return 0;
//}

//char copy_str(char* dest, char* src);
//struct Books {  // 구조체 선언
//	char name[30];
//	char auth[30];
//	char publ[30];
//	int borrowed;
//};
//
//int main() {
//	struct Books Harry_potter; // struct Books의 타입을 가진 Harry_potter
//	copy_str(Harry_potter.name, "Harry Potter");
//	copy_str(Harry_potter.auth, "J.K. Rolling");
//	copy_str(Harry_potter.publ, "Scholastic");
//	Harry_potter.borrowed = 0;
//
//	printf("책 이름 : %s \n", Harry_potter.name);
//	printf("저자 이름 : %s \n", Harry_potter.auth);
//	printf("출판사 이름 : %s \n", Harry_potter.publ);
//	
//	return 0;
//}
////문자열 복수 함수
//char copy_str(char* dest, char* src) {
//	while (*src) {
//		*dest = *src; //src에서 dest로 복사한다.
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return 1;
//}

//구조체 포인터

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
//	printf("st의 a멤버 : %d \n", st.a);
//	printf("st의 b멤버 : %d \n", st.b);
//
//	return 0;
//}

//구조체 인자로 가진 함수

//struct TEST { //창조해 낸 하나의 타입
//	int c;
//};
//
//int main() {
//	struct TEST t; // struct TEST 형의 구조체 변수 t 선언
//	struct TEST* pt = &t; // struct TEST 형을 가리키는 포인터 pt 선언
//
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	pt->c = 1; //pt 가가리키는 구조체 변수 (c)
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}

//구조체 포인터 예제

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
//	printf("i : %p \n", t.pointer); //구조체의 변수 pointer(주소를 저장하는 변수)에 들어간 값
//	printf("i : %d \n", *t.pointer); //구조체의 변수 pointer가 가리키고 있는 변수안에 있는 값 
//	*t.pointer = 3;
//
//	printf("i : %d \n", i);
//
//	*pt->pointer = 4; //*(pt->pointer)와 같은 의미이다.
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
//	struct TEST* pt = &t; // pt는 t를 가리키고 있다.
//
//	pt->c = 0;
//
//	add_one(&t.c); // 함수 add_one에 t의 멤버 c의 주소값을 전달. &연산자 보다 .연산자가 우선순위 그래서 &(t.c)와 같다.
//
//	printf("t.c : %d \n", t.c);
//
//	add_one(&pt->c); //함수 add_one에 t의 멤버 c의 주소값을 전달. &연산자 보다 ->연산자가 우선순위 &(t->c)와 같다.
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


//구조체 대입

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

//구조체를 인자로 가지는 함수

//int set_human(struct TEST *a, int age, int gender);
//struct TEST {
//	int age;
//	int gender;
//};
//
//int main() {
//	struct TEST human;
//
//	set_human(&human, 10, 1); //특정한 변수의 값을 다른 함수를 통해 바꾸려면 변수의 주소값을 전달해야 한다.
//
//	printf("AGE : %d // Gender : %d", human.age, human.gender);
//	return 0;
//}
//
//int set_human(struct TEST *a, int age, int gender) {
//	a->age = age;  //a가 가리키고 있는 구조체 변수의 멤버, 즉 human의 멤버를 지칭할 수 있게 된다.
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
//	printf("나이와 성별, 이름을 입력하시오 : ");
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


//공용체(union), 열거형(enum)

//struct employee {
//	int age;
//	int salary;
//};
//struct company {
//	struct employee data; //구조체 변수 data를 멤버로 가진다.
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

//구조체를 리턴하는 함수

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
//struct AA function(int j) { // struct AA 형을 리턴하는 함수 function
//	struct AA A;
//	A.i = j;
//
//	return A;
//}

//구조체 변수의 정의 방법

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

//멤버를 쉽게 초기화 하기

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


//UNION 공용체
//구조체와 달리 메모리를 '공유'한다.

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

//빅 엔디안(Big Endian), 리틀 엔디안(little Endian)

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


//열거형

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

