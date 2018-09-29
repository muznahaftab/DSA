#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int num)
{
	for(int i=0;i<n;i++){
		if(arr[i]==num)
			return i;
	}
	return -1;
}

int main()
{
	int n,element,i;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter array elements: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nEnter the element to be searched";
	cin>>element;
	int pos=linear_search(a,n,element);
	if(pos==-1)
		cout<<"\nElement not found";
	else
		cout<<"\nElement found at "<<pos<<" position";
}
