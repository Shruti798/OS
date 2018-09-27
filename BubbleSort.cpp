#include<iostream>
using namespace std;
int main()
{
	int s;
	cout<<"Enter size of array: ";
	cin>>s;
    int a[s],i,j,temp;
    cout<<"Enter the array elements: "; 
    
    for(i=0;i<s;++i)
        cin>>a[i];
        
    for(i=1;i<s;++i)
    {
        for(j=0;j<(s-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    cout<<"Array after bubble sort:";
    for(i=0;i<s;++i)
        cout<<" "<<a[i];
        
    return 0;
}

