
#include <iostream>
using namespace std;

int mt = 1;
int full = 0;
int empty = 10, x = 0;

void producer()
{
	--mt;
	++full;
	--empty;
	x++;
	cout<<"\nProducer produces item "<<x<<endl;
	++mt;
}

void consumer()
{
	--mt;
	--full;
	++empty;
	cout<<"\nConsumer consumes item "<<x<<endl;
	x--;
	++mt;
}

int main()
{
	int n, i;
	cout<<"\n1. Press 1 for Producer "<<endl<<"2. Press 2 for Consumer "<<endl<<"3. Press 3 for Exit";

	for (i = 1; i > 0; i++) {

		cout<<"\nEnter your choice:";
		cin>>n;

		switch (n) {
		case 1:
			if ((mt == 1) && (empty != 0)) { producer();
			}

			else {
				cout<<"Buffer is full!";
			}
			break;

		case 2:
			if ((mt == 1)
				&& (full != 0)) {
				consumer();
			}

			else {
				cout<<"Buffer is empty!";
			}
			break;

		case 3:
			exit(0);
			break;
		}
	}
}
