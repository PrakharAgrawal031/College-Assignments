#include<iostream>
using namespace std;
int main()
{
	int A[100][5];
	int i, j, n, total = 0, posi, temp;
	float awt, atat;
	cout<<"Enter number of process: ";
	cin>>n;
	cout<<"Enter Burst Time and priority time:"<<endl;
	// Input of burst time 
	for (i = 0; i < n; i++) {
		cout<<"P"<<i+1<<": ";
		cin>>A[i][1];
		cin>>A[i][4];
		A[i][0] = i + 1;
	}
	//sorting process
	for (i = 0; i < n; i++) {
		posi = i;
		for (j = i + 1; j < n; j++)
			if (A[j][4] < A[posi][4])
				posi = j;
		temp = A[i][4];
		A[i][4] = A[posi][4];
		A[posi][4] = temp;
        
        temp = A[i][1];
		A[i][1] = A[posi][1];
		A[posi][1] = temp;
        
		temp = A[i][0];
		A[i][0] = A[posi][0];
		A[posi][0] = temp;
	}
	A[0][2] = 0; 
	//waiting time calc
	for (i = 1; i < n; i++) {
		A[i][2] = 0;
		for (j = 0; j < i; j++)
			A[i][2] += A[j][1];
		total += A[i][2];
	}
	awt = (float)total / n;
	total = 0;
	cout<<"P\tPrt\tBT\tWT\tTAT"<<endl;
	
	//arrival time calc
	for (i = 0; i < n; i++) {
		A[i][3] = A[i][1] + A[i][2];
		total += A[i][3];
		cout<<"P"<<A[i][0]<<"\t"<<A[i][4]<<"\t"<<A[i][1]<<"\t"<<A[i][2]<<"\t"<<A[i][3]<<endl;
	}
	atat = (float)total / n;
	cout<<"Average Waiting Time= "<< awt<<endl;
	cout<<"Average Turnaround Time= "<< atat;
}
