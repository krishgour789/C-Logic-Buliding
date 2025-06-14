   
// }
#include <iostream>
using namespace std;
int main()
{
    // int i=1;
    // do{
    //     cout<<2*i;
    //     ++i;
        
    // }
    // while(i<=10);
    // int i=1;
    // while(i<=10);
    // {
    //     cout<<2*i;
    //     ++i;
    // }
    // for(int i=1; i<=10; ++i)
    // {
    //     cout<<2*i<<endl;
    // }
    int a,b;
    char op;
    
    cout<<"enter the operator; + - * /";
    cin>>op;
    cout<<"enter the number";
    cin>>a>>b;
    switch (op)
    {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
    }
    
    
}