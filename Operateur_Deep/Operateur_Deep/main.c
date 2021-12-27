#include <stdio.h>

int main(void)
{

	//직접적인 숫자 계산처럼 보이지는 않지만 명백히 연산자가 맞는 연산자들도 있다
	//그리고 sizeof처럼 컴파일러가 수행하고 CPU가 실행하지 않는 특수한 연산자도 있다
	int aList[5] = { 0 };

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);

	//만일 문자열처럼 배열형태의 정보에 대해 관계연산을 수행하고 싶다면 각 요소 하나하나를 일일이 비교해야한다
	//그래서 대부분 비교를 위한 전용 함수를 사용
	//함수를 사용할때 연산자를 사용하는것처럼 두 대상이 서로 같다면 함수는 '0'을 반환
	//대표적으로 memcmp(), strcmp()가 있다. 
	//memcmp();
	//strcmp();


	//<<관계연산자>>
	//절대 실수는 상등, 부등을 사용하면 안된다.
	printf("%d\n", 2147483647);
	printf("%d\n", 2147483648);//최대 구현 범위를 넘어가면 값이 엄청나게 차이가 난다.

	printf("%f\n", 2147483600.0f);
	printf("%f\n", 2147483648.0f);// 이 두수는 부동소수점처리로 인해 값이 같다
	//이러한 오차로 인해 실수는 활용하지 않는다.

	printf("%d\n", 2147483600.0f == 2147483648.0f); //값이 다르지만 같다고 나온다 부동소수점 처리로 인해


	int tall = 0;
	printf("키를 입력하세요\n");
	scanf_s("%d", &tall);
	(tall >= 160) ? printf("합격") : printf("불합격");


	//3항 연산자의 장점

	int nData = 0, nInput;
	scanf_s("%d", &nInput);
	if (nInput > 5)
	{
		nData = 10;
	}
	else
		nData = 0;

	nInput > 5 ? (nData = 10) : (nData = 0);
	return 0;
}