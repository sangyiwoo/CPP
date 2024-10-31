#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"정수를 입력하세요: ";
    cin>>num;

    if(num>10){
        cout<<"입력한 값은 10보다 큽니다."<<endl;
    } else{
        cout<<"입입력한 값은 10보다 작거나 같습니다."<<endl;
    }

    return 0;
}
