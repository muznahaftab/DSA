#include<iostream>
using namespace std;
void bubble_sort( int a[] , int n)
{
	int i, j ,temp ;
	for(i = 0 ; i < n-1; i++)
	{
		for(j = 0; j < n-1-i ; j++)
		{
			if( a[j] > a[j+1] )
			{
				temp = a[j] ;
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int n , i, ch;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter "<<n<<" array elements: ";
	for( i = 0 ; i < n ; i++)
		cin >> a[i];
	bubble_sort( a, n );
	cout<<"Sorted Array:\n";
	for(int i = 0 ; i < n; i++ )
		cout<<a[i]<< "  ";
}
