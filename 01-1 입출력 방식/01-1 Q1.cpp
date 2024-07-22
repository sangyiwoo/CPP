#include <iostream>

int main(void)
{
	int num, sum=0;
	for(int i=1;i<6;i++)
	{
		std::cout<<i<<"��° ���� �Է�: ";
		std::cin>>num;
		sum+=num;
	}
	std::cout<<"�հ�: "<<sum;
	return 0;
 } 
