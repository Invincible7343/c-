// bit to number transfer

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0)
    {
        int digit  = n%10;  // this use for the divide numbers
        
        if(digit==1)
        {
            ans = ans+pow(2,i);

        }
        n=n/10;   // this use for the confirmation of divide
        i++;
        
        
    }
    cout<<ans<<endl;
    return 0;
}
