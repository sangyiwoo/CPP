#include <iostream>

namespace BestComImpl //'BestComImpl'�� �̸������� �̸� 
{
	void SimpleFunc(void) //�̸����� ���ο� �Լ� SimpleFunc�� ����, 'BestComlmpl::SimpleFunc'�̶�� ��Ī�ϰ� �ȴ� 
	{
		std::cout<<"BestCom�� ������ �Լ�"<<std::endl;
	}
}

namespace ProgComImpl //'ProgComImpl'�� �̸������� �̸� 
{
	void SimpleFunc(void)
	{
		std::cout<<"ProgCom�� ������ �Լ�"<<std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
