#include <iostream>
int main(void)
{
	int num;
	std::cout<<"몇 단까지 구구단을 출력할까요? "; 
	std::cin>>num;
	for(int i=1;i<num+1;i++)
	{
		for(int j=1;j<10;j++)
		{
			std::cout<<' '<<i<<' '<<'X'<<' '<<j<<' '<<'='<<' '<<i*j<<std::endl;
		}
	}
	return 0;
}
