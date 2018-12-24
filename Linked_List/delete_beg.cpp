#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
}*start=NULL;

struct node* insert ( struct node* start )
{
	struct node* new_node;
	int val;
	cout<<"Enter element to insert: ";
	cin>>val;
	while(val!= -1)
	{
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = val;
		if(start == NULL)
		{
			start = new_node;
			new_node->next = NULL;
		}
		struct node* ptr = start;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
		new_node-> next = NULL;
		cout<<"Enter next value (Press -1 to terminate) : ";
		cin>>val;
	}
	return start;
}

void display( struct node* start)
{
	struct node* ptr = start;
	while( ptr != NULL)
	{	
		cout<<ptr->data<<"  ";
		ptr = ptr->next;
	}
}

struct node* delete_beg( struct node* start)
{
	struct node *ptr = start;
	start = start->next;
	free(ptr);
	return start;
}



int main()
{
	start = insert(start);
	display(start);
	start = delete_beg(start);
	cout<<"\n After deletion: \n";
	display(start);
}
