#include <iostream>
using namespace std;

int main()
{  
    int n, i, c = 0;
    cout << "Enter number : "; 
	cin>>n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    cout << "it is a Prime number" <<endl;
    else
    cout << "it is not a Prime number" <<endl; 
    
    return 0;    
}
