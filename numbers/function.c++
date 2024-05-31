#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin>>a>>b;
    int ans =1;
    for(int i=1;i<=b;i++)
    {
        ans = ans*a;
        
    }
    return ans;
}

int main()
{
    // int a,b;
    // cin>>a>>b;
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
            int answer = power();
    
    cout<<"Answer is : "<<answer<<endl;
    }

    return 0;
}
