#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int s=1;s<=i-1;s++)
		{
			cout<<"  ";
		}
		for(int j=1;j<=n-i;j++)
		{
			cout<<j<<"\t";
			
		}
		
		cout<<endl;
	}
}
