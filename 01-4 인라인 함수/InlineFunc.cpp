/*��ũ�θ� �̿��� �Լ��� �ζ���ȭ�� ��ó���⿡ ���ؼ� ó��������, Ű���� inline�� �̿��� �Լ��� �ζ���ȭ�� �����Ϸ��� ���ؼ� ó���ȴ�.*/ 
#include <iostream>

inline int SQUARE(int x)//inline�� ������ ���ؼ� �Լ� SQUARE�� �ζ��� �Լ��� �Ǿ���. 
{
	return x*x;
}

int main(void)
{
	std::cout<<SQUARE(5)<<std::endl;//SQUARE �Լ��� ȣ���ϰ� �ִ�. �׸��� �� �Լ��� �ζ��� �Լ��̴� ��ü�κ��� ȣ�㹮�� ��ü�ϰ� �ȴ�. 
	std::cout<<SQUARE(12)<<std::endl;
	return 0;
}
