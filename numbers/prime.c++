//  prime numbers 
//  just for the checking prime number yes or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    
    bool isprime  =1;
    
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {

            isprime =0;
            break;
        }

    }
    if(isprime==0)
    {
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
    return 0;
}