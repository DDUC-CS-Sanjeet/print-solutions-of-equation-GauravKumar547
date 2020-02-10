#include<iostream>
using namespace std;


void solution_finder(int n,int c)
{
	int arr[n]={0};
	int sum=0;
	while(1)
	{
		bool flag=true;
		sum=0;	
		for(int i=0;i<n;i++)
		{
			
				if(arr[i]==c+1)
				{
					arr[i]=0;
					
					if(i==n-1)
					{
						flag=false;
						break;
					}
					arr[i+1]++;
				}
			sum=sum+arr[i];
		}
		if(flag==false)
		{
			break;
		}
		if(sum==c)
		{
			for(int i=n-1;i>=0;i--)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		arr[0]++;
		
	}
}


int main()
{
	int n,C;
	cout<<"Enter the number of digits in solution: ";
	cin>>n;
	cout<<"Enter the sum that you want: ";
	cin>>C;
	solution_finder(n,C);
	return 0;
}
