#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 1st number"<<endl;
    cin>>a;

    cout<<"Enter 2nd number"<<endl;
    cin>>b;

    cout<<"Enter 3rd number"<<endl;
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"A is greater"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"B is greater"<<endl;
    }
    else
    {
        cout<<"C is greatest"<<endl;
    }

    return 0;
}
