#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int N[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>N[i];
    }
    for(int j=n-1;j>=0;j--)
    {
        cout<<N[j]<<" ";
    }
    return 0;
}
