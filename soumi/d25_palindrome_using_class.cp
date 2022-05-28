#include<iostream>
using namespace std;
class palindrome
{
    private:
    int n,r,sum=0,temp;
    public:
    int check();
};

int palindrome::check()
{
    cout<<"Enter number to be checked \n";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum= (sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    cout<<"Palindrome";
    else
    cout<<"not";
}
int main()
{
    palindrome p;
    p.check();
}

