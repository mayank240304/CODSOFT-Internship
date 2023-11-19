#include <iostream>
using namespace std;
int main()
{
    cout<<" "<<endl;
    cout<<"SIMPLE CALCULATOR"<<endl<<endl<<endl;
    int a,b;
    char op;
    
while(1)
{
    cout<<"Enter the operation you want to do: ";
    cin>>a>>op>>b;


    if(op=='+')
    {
        cout<<"ANSWER= "<<a+b<<endl<<endl;
        
    }
    else if (op=='-')
    {
        cout<<"ANSWER= "<<a-b<<endl<<endl;
        
    }
    else if (op=='*')
    {
        cout<<"ANSWER= "<<a*b<<endl<<endl;
        
    }
    else if (op=='/')
    {
        cout<<"ANSWER= "<<a/b<<endl<<endl;
        
    }

    
}
return 0;

}