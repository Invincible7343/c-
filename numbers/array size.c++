#include <iostream>
using namespace std;

//HOLD

void printarray(int arr[],int size)
{
    cout<<"Printing the array "<<endl;
    //print the array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"printing Done" <<endl;
}

int main()
{
    // int n[15] = {3,4,5,6,7,8,9};
    // printarray(n,7);
    
    int five[]= {3,4,5,6};
    // printarray(five,5);
    
    int fifth = sizeof(five)/sizeof(int);
    
    cout<<"Size of fifth "<<fifth<<endl;
    return 0;
}
