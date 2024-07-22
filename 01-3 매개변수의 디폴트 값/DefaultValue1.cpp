/*매개변수에 디폴트 값이 설정되어 있으면, 선언된 매개변수의 수보다 적은 수의 인자전달이 가능하다.
그리고 전달되는 인자는 왼쪽에서부터 채워져 나가고, 부족분은 디폴트 값으로 채워진다.*/ 
#include <iostream>

int Adder(int num1=1, int num2=2)//Adder 함수의 디폴트 값으로 1과 2가 설정됨 
{
	return num1+num2;
}

int main(void)
{
	std::cout<<Adder()<<std::endl;//Adder 함수를 호출하면서 인자를 전달하지 않았으므로 1과 2가 전달된 것으로 간주 
	std::cout<<Adder(5)<<std::endl;//Adder 함수를 호출하면서 첫 번째 매개 변수로 전달, num2에는 2가 전달된 것으로 간주 
	std::cout<<Adder(3,5)<<std::endl;//Adder 함수를 호출하면서 두 개의 인자를 직접 전달 
	return 0;
}
