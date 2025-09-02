#include<iostream>

using namespace std;

int main()
{
    int choice;
    int res, a, b;
    cout<<"1. Add\n2. Sub\n3. Div\n ";
    cin>>choice;
    cout<<"Enter Two Numbers : ";
    cin>> a  >> b ;

    switch (choice)
    {
    case 1:
        res = a + b;
        cout<<"Res = "<< res;
        break;
    case 2:
        res = a - b;
        cout<<"Res = "<< res;
        break;
    case 3:
        res=a / b;
        cout<<"Res = "<< res;
    default:
        break;
    }


    return 0;
}