#include<iostream>
using namespace std;
int main()
{
 int n1=0,n2=1,n3,i,number,arr[1000],k=0;    
 cout<<"Enter the number of elements: \n";   
 cin>>number; 
 cout<<"Fibonacci series: " ;   
 cout<<n1<<" "<<n2<<" ";  
 for(i=2;i<number;i++)   
 {    
  n3=n1+n2;    
  cout<<n3<<" ";  
  if((n3-n2)>1)
  {
    for(int j=n2+1;j<=n3-1;j++)
    {
        arr[k]=j;
        k++;
    }
  }  
  n1=n2;    
  n2=n3;
      
 }   
 cout<<endl;
 cout<<"Missing numbers are : \n";
 for(int j=0;j<k;j++)
 {
     cout<<arr[j]<<" ";
 } 
 return 0;  
}
