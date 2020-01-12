#include<stdio.h>

int main() {
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("Array 3 번째 원소 : %d \n", arr[2]);*/

	//배열 출력
	/*int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
	}*/

	//평균 구하기
	/*int arr[5];
	int i, ave = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d 번째 학생의 성적은?", i + 1);
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		ave = ave + arr[i];
	}
	ave = ave / 5;
	printf("전체 학생의 평균 : %d \n", ave);

	for (i = 0; i < 5; i++)
	{
		printf("학생 %d :", i + 1);
		if (arr[i] >= ave)
			printf("합격 \n");
		else
			printf("불합격 \n");
	}*/

	/*int guess = 5;
	int prime[1000];
	int index = 1;
	int i;
	int ok;

	prime[0] = 2;
	prime[1] = 3;
	for (;;)
	{
		ok = 0;
		for (i = 0; i <= index; i++)
		{
			if (guess % prime[i] != 0)
			{
				ok++;
			}
			else
			{
				break;
			}
		}
		if (ok == (index + 1))
		{
			index++;
			prime[index] = guess;
			printf("소수 : %d \n", prime[index]);
			
			if (index == 999)
				
				break;
			
		}
		guess += 2;
		
	}
	printf("소수의 개수는 %d", ok);*/
	//2차원 배열
	/*int arr[3][3] =	{ 1,2,3,4,5,6,7,8,9 };

	printf("arr 배열의 2 행 3열의 수를 출력 : %d \n", arr[1][2]);
	printf("arr 배열의 1 행 2열의 수를 출력 : %d \n", arr[0][1]);*/

	//2차원 배열을 이용한 학생들 데이터 받기
	//int score[3][2];
	//int i, j;
	//for (i = 0; i < 3; i++) // 총 3 명의 학생의 데이터를 받는다.
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		if (j == 0) {
	//			printf("%d 번째 학생의 국어 점수 : ", i + 1);
	//			scanf_s("%d", &score[i][j]);
	//		}
	//		else if (j == 1) {
	//			printf("%d 번째 학생의 수학 점수 : ", i + 1);
	//			scanf_s("%d", &score[i][j]);
	//		}

	//	}

	//}
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1, score[i][0], score[i][1]);
	//}
	return 0;
}