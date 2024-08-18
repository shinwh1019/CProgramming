//#include "Header.h"
//
////첫날에는 1원을 가지고 있습니다.
////이후 30일동안 전날보다 2배의 금액액을 받게 됩니다.
////30일이 되었을 때 총 금액이 얼마나 나오는지 출력하세요.
//
//int main()
//{
//	int money = 1; //시작 금액
//	int total = 0; //보관할 값
//
//	for (int day = 1; day <= 30; day++) //30일 반복
//	{
//		total = total + money;
//		money = total * 2;
//		printf("%d일차 금액 = %d원\n", day, total);
//	}
//		printf("30일 뒤 총 금액은 %d원입니다.\n",total);
//
//
//
//		//입력된 숫자가 소수인지를 판단하는 프로그램을 짜겠습니다.
//		//조건) int is_prime이라는 변수가 제공됩니다.
//		//      이 is_prime는 1일 경우 소수, 0일 경우 소수가 아니라고 출력해줌.
//
//		int n, is_prime;
//		printf("숫자를 입력해주세요, >>");
//		scanf("%d", &n);
//
//		is_prime = 1; //소수다
//		//문제풀이의 핵심: is_prime의 값이 무엇이냐?
//		//설계자분들은 다음과 같은 전제로 조건을 짭니다.
//		//is_prime을 1로 초반 값을 설정했다면 아래의 for문에서는 is_prime이 0이 될 수 있는 조건을 설계
//		//is_prime을 2로 초반 값을 설정했다면 아래의 for문에서는 is_prime이 1이 될 수 있는 조건을 설계
//
//		//소수를 계산하기 위한 for 설계
//		//소수의 조건: n이 1과 자기자신을 약수로 가지는 수
//		//소수의 첫 번째 값은 2입니다.
//		for (int i = 2; i <= n; i++)
//		{
//			//1과 자기자신이 아닌 경우, i로 나누어떨어지게 된다면 그건 소수가 아닐 것이다.
//			if (i == 1 || i == n)
//			{
//				continue;
//			}
//			else if (n % i == 0)
//			{
//				is_prime = 0; //소수가 아니다.
//				break;
//			}
//
//		}
//
//		if (is_prime == 1)
//		{
//			printf("%d는 소수입니다.\n", n);
//		}
//		else
//		{
//			printf("%d는 소수가 아닙니다.\n", n);
//		}
//	return 0;
//}