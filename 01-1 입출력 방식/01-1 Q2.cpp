#include <iostream>
int main(void)
{
	char name[10];
	char number[11];
	
	std::cout<<"이름: ";
	std::cin>>name;
	
	std::cout<<"번호: ";
	std::cin>>number;
	
	std::cout<<name<<' '<<number; 
	
	return 0;
}
