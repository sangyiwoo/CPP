/*매크로를 이용한 함수의 인라인화는 전처리기에 의해서 처리되지만, 키워드 inline을 이용한 함수의 인라인화는 컴파일러에 의해서 처리된다.*/ 
#include <iostream>

inline int SQUARE(int x)//inline의 선언을 통해서 함수 SQUARE는 인라인 함수가 되었다. 
{
	return x*x;
}

int main(void)
{
	std::cout<<SQUARE(5)<<std::endl;//SQUARE 함수를 호출하고 있다. 그리고 이 함수는 인라인 함수이니 몸체부분이 호춤문을 대체하게 된다. 
	std::cout<<SQUARE(12)<<std::endl;
	return 0;
}
