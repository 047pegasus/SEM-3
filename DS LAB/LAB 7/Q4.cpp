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
	cout << "\tReverse a linked list\n\n"
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

	cout << "\nReversing the list:";

	if (START != NULL || START->NEXT != NULL)
	{
		temp = START->NEXT;
		SLLNODE *prev = START, *next = temp->NEXT;
		while (temp != NULL)
		{
			temp->NEXT = prev;
			prev = temp;
			temp = next;
			if (temp == NULL)
				break;
			next = temp->NEXT;
		}
		START->NEXT = NULL;
		START = prev;
	}
	dis();
	return 0;
}
