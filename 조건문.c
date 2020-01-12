#include<stdio.h>

int main() {
	//if문이란?
	/*int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf_s("%d", &i);

	if (i == 7)
	{
		printf("당신의 행운의 숫자 7을 입력 했습니다");
	}*/


	//나눗셈 if
	//double i, j;
	//printf("나누고 싶은 두 정수를 입력하세요 : ");
	//scanf_s("%lf %lf", &i, &j);

	//if (j == 0)
	//{
	//	printf("0 으로 나눌 수 없습니다. \n");
	//	return 0;
	//}
	//printf("%f 를 %f로 나눈 결과는 : %f\n", i, j, i / j);

	//합격? 불합격?
	//int score;

	//printf("당신의 수학점수를 입력하세요! : ");
	//scanf_s("%d", &score);

	//if (score >= 90)
	//{
	//	printf("당신은 합격입니다! \n");
	//}

	//if (score < 90)
	//{
	//	printf("당신은 불합격 입니다! \n");
	//}

	//if-else 문
	/*int num;
	for (;;) {
		printf("아무 숫자나 입력해 보세요 : ");
		scanf_s("%d", &num);

		if (num == 7)
		{
			printf("행운의 숫자 7이군요!\n");
			break;
		}
		else
		{
			if (num == 4) {
				printf("죽음의 숫자 4 인가요;;;\n");
				break;
			}
			else {
				printf("그냥 보통 숫자인 %d 를 입력했군요\n", num);
			}
		}
	}*/
	
	// if-else 문 마지막 연습

	//float ave_score;
	//float math, english, science, programming;

	//printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요 ! : ");
	//scanf_s("%f %f %f %f", &math, &english, &science, &programming);
	//
	//ave_score = (math + english + science + programming) / 4;

	//printf("당신의 평균 점수는 %f 입니다. \n", ave_score);
	//if (ave_score >= 90)
	//{
	//	printf("당신은 우등생 입니다.");
	//}
	//else if(ave_score >= 30)
	//{
	//	printf("조금만 노력하세요!.\n");
	//}
	//else
	//{
	//	printf("공부를 발로 합니까?\n");
	//}

	//크기 비교
	/*int a;
	printf("아무숫자나 입력하세요 : ");
	scanf_s("%d", &a);

	if (a >= 10)
	{
		if (a < 20)
		{
			printf("%d 는 10 이상, 20 미만인 수입니다. \n", a);
		}
	}*/
	
	// if문을 이용한 마이펫 선택
	/*int input; 
	printf("마이펫 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");
	
	scanf_s("%d", &input);
	 if문 이용
	if (input == 1)
	{
		printf("아이 맛있어 \n");
	}
	else if (input == 2)
	{
		printf("아이 시원해 \n");
	}
	else if (input == 3)
	{
		printf("zzz \n");
	}
	else
	{
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
	}*/	
	//switch문 이용
	/*switch (input)
	{
	case 1:
		printf("아이 맛있어 \n");
		break;
	case 2:
		printf("아이 시원해 \n");
		break;
	case 3:
		printf("zzz \n");
		break;
	default:
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
		break;
	}*/

	//영어 말하기

	//char input;

	//printf("(소문자) 알파벳 읽기\n");
	//printf("알파벳 : ");

	//scanf_s("%c", &input);

	//switch (input)
	//{
	//case 'a':
	//	printf("에이 \n");
	//	break;
	//case 'b':
	//	printf("비 \n");
	//	break;
	//case 'c':
	//	printf("씨 \n");
	//	break;
	//default :
	//	printf("죄송해요.. 머리가 나빠서 못 읽어요 \n");
	//	break;
	//}

	return 0;
}