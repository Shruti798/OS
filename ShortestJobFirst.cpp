#include<iostream>
using namespace std; 
int main()
{
    int bt[20],process[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avgw,avgt;
  cout<<"Enter number of process: ";
    cin>>n;
   cout<<"\nEnter Burst time: \n";
    for(i=0;i<n;i++)
    {
       cout<<"Process["<<i+1<<"]: ";
       cin>>bt[i];
        process[i]=i+1;          
    }
   for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
         temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=process[i];
        process[i]=process[pos];
        process[pos]=temp;
      }
     wt[0]=0;           
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
      total+=wt[i];
    }
      avgw=(float)total/n;
      total=0;
  cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];  
        total+=tat[i];
        cout<<"\n"<<process[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
   avgt=(float)total/n;    
   cout<<"\n\nAverage Waiting Time: "<<avgw;
    cout<<"\nAverage Turnaround Time: "<<avgt;

return 0;
}



 


