#include<iostream>
using namespace std;
int main ()
{
    int num1, num2, num3;
    cout<<"Enter the 3 Number :";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3)
        cout<<"Large Number"<<num1;
    else if(num2>=num1 && num2 >= num3)
        cout<< "Large number:"<< num2;

    else cout << "Large Number" <<num3;


}
