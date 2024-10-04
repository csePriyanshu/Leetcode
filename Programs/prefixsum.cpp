#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr;
	int size;
	cout<<"Input the size of array: ";
	cin>>size;
	if(size<=0) return 0;
	for(int i=0;i<size;i++)
	{
		int val;
		printf("Enter the value at arr[%d]: ",i);
		cin>>val;
		arr.push_back(val);
	}
	// calculate prefix sum and upate arr
	cout<<"Prefix sum array is -> ";
	for(int i=1;i<size;i++)
	{
		arr[i] += arr[i-1];
	}
	for(int elem : arr) cout<<elem<<' ';
	cout<<endl;
	cout<< "Enter the range between the sum you want i.e left & right (0-"<<size-1<<") respectively: ";
	int l, r;
	cin>>l>>r;
	int sum;
	bool error = 0;
	if(l==0 && r<size) sum = arr[r];
	else if(l>0 && l<size && r>0 && r<size) sum = arr[r] - arr[l-1];
	else
	{
		error = 1;
		cout<<"error: left and right not in range\n";
	}
	if(!error) printf("The sum in range [%d,%d] = %d\n", l,r,sum);
	return 0;
}
