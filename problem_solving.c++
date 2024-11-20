#include<iostream>
using namespace std;
void PrintPrime(int n,int m)
{

    for(int i=n+1;i<m;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            count++;
            }
        }
        if(count==2)
           {
              cout<<i<<" ";
           }
    }

}
int main(){
    cout<<"insert two integer to print all prime numbers between them\n";
    int x,y;
    cin>>x>>y;
    int temp=0;
    if(y<x)
    {
        temp=x;
        x=y;
        y=temp;
    }
    PrintPrime(x,y);

}
