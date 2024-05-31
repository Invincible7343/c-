#include <iostream>
using namespace std;

int factrial(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int num = factrial(n);
    int denum = factrial(r) * factrial(n-r);
    
    int ans = num/denum;
    
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    
    cout<<"Answer is : "<<ncr(n,r)<<endl;
    return 0;
}
