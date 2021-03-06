#include <iostream>
using namespace std;
int binary_search(int arr[],int beg,int end,int num)
{
		if(beg<=end){
			int mid=(beg+end)/2;
			if(arr[mid]==num)
				return mid;
			else if(arr[mid]<num)
				return binary_search(arr,mid+1,end,num);
			else
				return binary_search(arr,beg,mid-1,num);
		}
		return -1;
}

int main()
{
	int n,element,i;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter array elements in sorted form: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nEnter the element to be searched";
	cin>>element;
	int pos=binary_search(a,0,n-1,element);
	if(pos==-1)
		cout<<"\nElement not found";
	else
		cout<<"\nElement found at "<<pos<<" position";
}
