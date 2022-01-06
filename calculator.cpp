#include <iostream>
using namespace std;

int main (){
    float n1,n2;
    cout<<"Enter 2 numbers:";
    cin>>n1>>n2;

    char op;
    cout<<"Enter a operator:";
    cin>>op;

    switch (op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        
        default:
        cout<<"Operator not found!"<<endl;
        break;
    }

    return 0;
}
