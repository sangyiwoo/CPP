#include <iostream>

namespace BestComImpl //'BestComImpl'이 이름공간의 이름 
{
	void SimpleFunc(void) //이름공간 내부에 함수 SimpleFunc를 정의, 'BestComlmpl::SimpleFunc'이라고 지칭하게 된다 
	{
		std::cout<<"BestCom이 정의한 함수"<<std::endl;
	}
}

namespace ProgComImpl //'ProgComImpl'이 이름공간이 이름 
{
	void SimpleFunc(void)
	{
		std::cout<<"ProgCom이 정의한 함수"<<std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
