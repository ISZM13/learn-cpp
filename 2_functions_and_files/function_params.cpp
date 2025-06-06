#include <iostream>
using namespace std;

int getValueFromUser() {
    int num{};
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

// pass by value used copy-initialization
void printValue(int num){
    cout<<"the value is "<<num;
}

// less optimized
// int main()
// {
//     int num{getValueFromUser()};
//     printValue(num);
//     return 0;
// }

int main()
{
    printValue(getValueFromUser());
    return 0;
}