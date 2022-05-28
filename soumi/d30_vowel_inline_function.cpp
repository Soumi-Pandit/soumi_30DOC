#include <iostream>

using namespace std;
class user
{
  private:
  char vowel[5];
  public:
  void getdata();
};

inline void user::getdata()
{
	cout<<"enter any character: ";
	cin>>vowel[5];
	int a;
	char v[10]={'a','e','i','o','u','A','E','I','O','U'};
	for(int i=0;i<10;i++)
	{
	
	if(v[i]==vowel[5])
	a+=1;
	
	}
	if(a==1)
	cout<<"its a vowel";
	else
	cout<<"its not a vowel";
	
}

int main()
{
	user obj;
	obj.getdata();
}
