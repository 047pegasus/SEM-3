#include <iostream>
using namespace std;
struct SLLNODE{
	int INFO=0;
	struct SLLNODE* NEXT;
};
SLLNODE *START = NULL;
void dis()
{
	cout << "\nLinked List: [ ";
	if (START != NULL)
	{
		cout << START->INFO;
		SLLNODE *temp = START->NEXT;
		while (temp != NULL)
		{
			cout << ", " << temp->INFO;
			temp = temp->NEXT;
		}
	}
	cout << " ]\n";
}

int main()
{
	START = NULL;
	int n;
	cout << "\tSearch in a linked list\n\n"
		 << "Enter the size: ";
	cin >> n;
	SLLNODE *temp = START;
	for (int i = 0; i < n; i++)
	{
		SLLNODE *newnode = new SLLNODE;
		if (i == 0)
			START = newnode;
		else
			temp->NEXT = newnode;

		cout << "Enter " << i << " element: ";
		cin >> newnode->INFO;
		temp = newnode;
	}
	temp = NULL;
	dis();

	if (START != NULL)
	{
		temp = START;
		int i = 0;
		SLLNODE *mid = START;
		while (temp != NULL && temp->NEXT != NULL)
		{
			temp = temp->NEXT->NEXT;
			mid = mid->NEXT;
			i++;
		}
		cout << "The middle element is: " << mid->INFO << " at index: " << i << "\n";
	}
	else
	{
		cout << "The linked list is empty.\n";
	}
	return 0;
}