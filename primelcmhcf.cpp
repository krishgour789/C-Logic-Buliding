// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,factorial=1;
//     cout<<"enter the table; ";
//     cin>>n;
//     for(int i=1; i<=n;i++)
//     {
//         factorial=factorial*i;
//     }
//     cout<<factorial<<endl;
  
        

// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,factorial=1;
//     cout<<"enter the table; ";
//     cin>>n;
//     for(int i=1; i<=n;i++)
//     {
//         factorial=factorial*i;
//     }
//     cout<<factorial<<endl;
  
        

// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1=6;
//     int n2 = 18;
//     int hcf=0;
//     for(int i = 1;i<=6;++i)
//     {
//         if(n1%i==0 && n2%i==0)
//         {
//             hcf=i;
//         }
//     }
//     cout<<hcf;
    
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1 ;
//     int n2 ;
//     int lcm=0;
//     cout<<"Enter the number 1 ;";
//     cin>>n1;
//     cout<<"Enter the Number 2 ;";
//     cin>>n2;
 
//     for(int i<=n2; ;i=i+n2)
//     {
//         if(i%n1==0 && i%n2==0)
//         {
//             lcm=i;
//             break;
//         }
//     }
//     cout<<lcm;
    
// }



#include <iostream>
using namespace std;
int main()
{
    int number = 7;
    int count=0;
    for(int i =1;i<=number;++i)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime";
    }
    else{
        cout<<"Not prime";
    }
}
