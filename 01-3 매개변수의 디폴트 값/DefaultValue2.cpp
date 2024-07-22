/*매개변수의 디폴트 값은 함수의 원형 선언에만 위치시켜야한다*/ 
#include <iostream>
int Adder(int num1=1, int num2=2);//선언 

int main(void)
{
	std::cout<<Adder()<<std::endl;//호출 
	std::cout<<Adder(5)<<std::endl;
	std::cout<<Adder(3, 5)<<std::endl;
	return 0; 
}

int Adder(int num1, int num2)//정의 
{
	return num1+num2;
}
