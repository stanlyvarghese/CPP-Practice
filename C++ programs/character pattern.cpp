#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char ch;
	for(int i=1;i<=n;i++)
	{
			for(int j=i;j>=1;j--)
			{	
				ch='A'+i-1;	
				cout<<ch<<"\t";
					
			}		
	cout<<endl;
}	
}
