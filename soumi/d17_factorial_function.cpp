#include<iostream>
using namespace std;  
int fact(int);
int main()    
{    
 int n;
 cout<<"Enter a number: ";
 cin>>n;
 fact(n);  
}
int fact(int n) 
{
 int i;
 int fact=1;
 for(i=1;i<=n;i++)
 {    
 fact=fact*i;    
 }    
  cout<<"Factorial is: "<<fact;    
  return 0;  
}   
