#include<iostream>
using namespace std;

int partition()
{
	
}

int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	
	int a[n],i,j,min,temp;
	cout<<"\n enter the elements of array: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}	

    cout<<"The sorted elements are: ";
    for(i=0;i<n;i++)
    cout<<" "<<a[i];
    
    int r;
    cin>>r;
    return 0;
}
