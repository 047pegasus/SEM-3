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
	int n, ele;
	bool check;
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

	cout << "\nEnter the element to search: ";
	cin >> ele;
	temp = START;
	int i = 0;
	while (temp != NULL)
	{
		check = (temp->INFO == ele) ? true : false;
		if (check)
		{
			cout << ele << " found at index: " << i << "\n";
			break;
		}
		i++;
		temp = temp->NEXT;
	}
	if (!check)
		cout << ele << " not found in the linked list.\n";
	return 0;
}