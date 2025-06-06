#include <iostream>
using namespace std;

int readNumber(){
    int num{};
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

void writeAnswer(int value){
    cout<<"\nAnswer is "<<value;
}