/*�Լ��� ���޵Ǵ� ���ڰ� ���ʿ������� ���������� ä������ ������ ������ �Ű������� ����Ʈ ������ ä��� ���·� �����ؾ� �Ѵ�.*/ 
#include <iostream>
int BoxVolume(int length, int width=1, int height=1);//ù ���� �Ű��������� ����Ʈ ���� �������� �ʾ����Ƿ�, BoxVolume �Լ��� ȣ���� ���� �ݵ�� �ϳ� �̻��� ���ڸ� �����ؾ� �Ѵ�. 

int main(void)
{
	std::cout<<"[3,3,3] : "<<BoxVolume(3,3,3)<<std::endl;//���޵� ���ڴ� ���ʿ������� ä������ ������ �κ��� ����Ʈ ���� ��� ���޵ȴ�. 
	std::cout<<"[5,5,D] : "<<BoxVolume(5,5)<<std::endl;
	std::cout<<"[7,D,D] : "<<BoxVolume(7)<<std::endl;
	//std::cout<<"[D,D,D] : "<<BoxVolume()<<std::endl;
	//��� �Ű������� ����Ʈ ���� ������ ���� �ƴϱ� ������, ���ڸ� �������� �ʴ� ������ �Լ� ȣ���� ������ ������ �̾�����. 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
