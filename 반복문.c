#include<stdio.h>

int main() {
	//for문
	//int i;
	//for (i = 0; i < 20; i++) //(초기식;조건식;증감식)
	//{
	//	printf("숫자 : %d \n", i);
	//}

	//1부터 19까지의 합
	/*int i, sum = 0;
	for (i = 0; i < 20; ++i)
	{
		sum = sum + i;
	}
	printf("1부터 19까지의 합 : %d", sum);*/

	//1부터 10000까지 더하기
	//int i, sum = 0;
	//for(i=0;i<=10000;++i)
	//{
	//	sum = sum + i;
	//}
	//printf("1부터 10000 까지의 합 : %d \n", sum);

	//for문 응용
	//int i;
	//int subject, score;
	//double sum_score = 0;

	//printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	//scanf_s("%d", &subject);

	//printf("\n각 과목의 점수를 입력해 주세요 \n");
	//for (i = 1; i <= subject; i++)
	//{
	//	printf("과목 %d :", i);
	//	scanf_s("%d", &score);
	//	sum_score = sum_score + score;
	//}
	//printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);

	//break문
	/*int usranswer;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

	for (;;)
	{
		scanf_s("%d", &usranswer);
		if (usranswer == 3)
		{
			printf("맞추셨군요! \n");
			break;
		}
		else
		{
			printf("틀렸어요! \n");
		}
	}*/

	//continue문
	//int i, a = 0;
	//int b = 0;
	//for (i = 0; i < 101; i++)
	//{
	//	if (i % 5 == 0)
	//	{
	//		a++;
	//		continue;
	//	}		
	//	printf("%d ", i);
	//}
	//printf("\n5의 배수는 %d개 입니다.\n", a);

	//구구단
	//int i=0, j, k;

	/*for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}*/
	/*for (;;) {		
		for (k = 0; k < 30; k++)
		{
			printf("*");
		}
		printf("\n구구단 단수를 입력하세요:");
		scanf_s("%d", &i);
		if (i == 100) {
			printf("끝이에요~~");
			break;
		}
		for (j = 1; j < i+1; j++)
		{
			printf("%d x %d = %d  \t\tl \n", i, j, i * j);
		}
		
	}*/

	/*int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%d ", j);
		}
	}
	*/
	//while문

	/*int i = 1, sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}

	printf("1 부터 100까지의 합 : %d \n", sum);
		 */
	/*int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 1);

	printf("sum : %d \n", sum);*/
	

	return 0;
}