#include "Header.h"

//연습) 다음 조건의 코드를 작성하시오.
//0부터 100사이의 점수를 입력합니다.
//입력한 점수가 60점 이상일 경우 "합격"
//60점 미만일 경우 "불합격"을 출력합니다.

//int main()
//{
//	int score;
//
//	printf("0 ~ 100 사이의 숫자를 입력해주세요. >> ");
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("합격\n");
//	}
//	else
//	{
//		printf("불합격\n");
//	}
//	return 0;
//}


//연습2) 다음 조건의 코드를 작성하시오.
//화면에는 메뉴와 메뉴의 가격이 표시되어 있습니다.(메뉴는 자유롭게 작성)
//사용자는 메뉴를 보고 그 메뉴의 번호를 입력합니다.
//사용자가 그 메뉴를 구매할 가격을 보유하고 있을 경우 그 메뉴를 구입할 수 있습니다,
//없는 경우에는 잔액이 부족하다는 메세지가 출력됩니다.

int main()
{
	//메뉴의 가격
	int menu1 = 1000;
	int menu2 = 2000;
	int menu3 = 3000;

	//화면 출력
	printf("1. A %d\n", menu1);
	printf("2. B %d\n", menu2);
	printf("3. C %d\n", menu3);

	//사용자 입력
	int menu_select;
	scanf("%d", &menu_select);

	int money = 2000; //사용자의 가격을 따로 선택
	int cost = 0; //지불해야하는 비용

	// 입력에 따른 메뉴 비용 설정
	if (menu_select == 1)
	{
		cost = menu1;
	}
	else if (menu_select == 2)
	{
		cost = menu2;
	}
	else
	{
		cost = menu3;
	}

	//계산
	if (money >= cost)
	{
		money -= cost;
		printf("물건을 구매했습니다.");
	}
	else
	{
		printf("잔액이 부족합니다.");
	}
	return 0;
}
