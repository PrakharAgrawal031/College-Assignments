//Implementation fo SHORTEST JOB FIRST(Preemptive) Using C++
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef  struct proccess
{
	int at,bt,ct,ta,wt,btt;
	string pro_id;

		/*
	artime = Arrival time,
	bt = Burst time,
	ct = Completion time,
	ta = Turn around time,
	wt = Waiting time
	*/

}Schedule;

bool compare(Schedule a,Schedule b)
{
	return a.at<b.at;

	/* This Schedule will always return TRUE
	if above condition comes*/
}
bool compare2(Schedule a,Schedule b)
{
	return a.bt<b.bt;

	/* This Schedule will always return TRUE
	if above condition comes*/
}

int main()
{
	Schedule pro[10];
	//An array of Processes
	int n,i,j,pcom;
	//n = number of processes, i= iteration variable

	cout<<"Enter the number of Process::";
	cin>>n;

	cout<<"Enter the Process id arrival time burst time :::";

	for(i=0;i<n;i++)
	{
		cin>>pro[i].pro_id;
		cin>>pro[i].at;
		cin>>pro[i].bt;
		pro[i].btt=pro[i].bt;
	}

	sort(pro,pro+n,compare);

	/*sort is a predefined funcion  defined in algorithm.h header file,
	it will sort the processes according to their arrival time*/

	i=0;
	pcom=0;
	while(pcom<n)
	{
		for(j=0;j<n;j++)
		{
			if(pro[j].at>i)
			break;
		}

		sort(pro,pro+j,compare2);

		if(j>0)
		{

			for(j=0;j<n;j++)
			{
				if(pro[j].bt!=0)
				break;
			}
			if(pro[j].at>i)

			{
				i=pro[j].at;

			}
			pro[j].ct=i+1;
			pro[j].bt--;
		}
		i++;
		pcom=0;
		for(j=0;j<n;j++)
		{
			if(pro[j].bt==0)
			pcom++;
		}
	}

	cout<<"ProID\tAtime\tBtime\tCtime\tTtime\tWtime\n";

	for(i=0;i<n;i++)
	{
		pro[i].ta=pro[i].ct-pro[i].at;
		pro[i].wt=pro[i].ta-pro[i].btt;
		cout<<pro[i].pro_id<<"\t\t"<<pro[i].at<<"\t\t"<<pro[i].btt<<"\t\t"<<pro[i].ct<<"\t\t"<<pro[i].ta<<"\t\t"<<pro[i].wt;
		cout<<endl;
	}
	
	cout<<"Average waiting time : ";
	float sum1,sum2;
	for(int i = 0; i<n; i++)
	{
	    sum1 = sum1+pro[i].wt;
	    sum2 = sum2 + pro[i].ta;
	}
	cout<<sum1/n<<endl;
	
	cout<<"Average turn around time : ";
	cout<<sum2/n;
	return 0;
}
