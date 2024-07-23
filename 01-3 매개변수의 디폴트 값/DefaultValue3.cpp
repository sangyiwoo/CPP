/*함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문에 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 한다.*/ 
#include <iostream>
int BoxVolume(int length, int width=1, int height=1);//첫 번쩨 매개변수에는 디폴트 값이 지정되지 않았을므로, BoxVolume 함수를 호출할 때믄 반드시 하나 이상의 인자를 전달해야 한다. 

int main(void)
{
	std::cout<<"[3,3,3] : "<<BoxVolume(3,3,3)<<std::endl;//전달된 인자는 왼쪽에서부터 채워지고 부족한 부분은 디폴트 값이 대신 전달된다. 
	std::cout<<"[5,5,D] : "<<BoxVolume(5,5)<<std::endl;
	std::cout<<"[7,D,D] : "<<BoxVolume(7)<<std::endl;
	//std::cout<<"[D,D,D] : "<<BoxVolume()<<std::endl;
	//모든 매개변수에 디폴트 값이 지정된 것이 아니기 때문에, 인자를 전달하지 않는 형태의 함수 호출은 컴파일 에러로 이어진다. 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
