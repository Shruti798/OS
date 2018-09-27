#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of array";
	cin>>n;
	int a[n],i,j,key,temp;
	cout<<"Enter elements of array: \n";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
	key=i;
		if(i>0)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]>a[key])
				{
				temp=a[key];
				a[key]=a[j];
				a[j]=temp;
				}
			}
		}
	}
	cout<<"The sorted elements are: \n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	
	int r;
	cin>>r;
	
	return 0;
}
