/*동일한 이름공간에 정의된 함수를 호출할 때에는 이름공간을 명시할 필요가 없다.*/ 
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
 }
 
 namespace ProgComImpl
 {
 	void SimpleFunc(void);
 }
 
 int main(void)
 {
 	BestComImpl::SimpleFunc();
 	return 0;
 }
 
 void BestComImpl::SimpleFunc(void)
 {
 	std::cout<<"BestCom이 정의한 함수"<<std::endl;
 	PrettyFunc();//동일한 이름공간에 정의된 함수이다. 따라서 직접 호출이 가능 
 	ProgComImpl::SimpleFunc();//함수의 호출위치가 어떻게 되건, 이름공간 ProgComImpl에 정의된 함수SimpleFunc를 호출하는 방법에는 차이가 없다. 
 }
 
 void BestComImpl::PrettyFunc(void)
 {
 	std::cout<<"So Pretty!!"<<std::endl;
 }
 
 void ProgComImpl::SimpleFunc(void)
 {
 	std::cout<<"ProgCom이 정의한 함수"<<std::endl;
 }
